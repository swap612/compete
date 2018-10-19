#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){
   
     std::map<std::string,int> wordList;
     std::map<std::string,int>::iterator wlIter;

    int testCount, num, index;
    cin >> testCount;
    while(testCount > 0)
    {
        wordList.clear();
        cin >> num;
        std::string input;
        int prev;
        int time, sum_time = 0;
        while(num>0){
            input.clear();
            prev = -1;
            cin >> input;
            // cout<<input.size();
            wlIter = wordList.find(input);
            if(wlIter != wordList.end()){
                sum_time += (wlIter->second)/2;
                
            }
            else{
                time =0;
                for(int i=0;i<input.size();i++){
                    if(input[i] == 'j' || input[i] == 'k'){
                        if(prev == 1)
                            time+=4;
                        else
                            time+=2;
                        prev = 1;
                    }
                    else if(input[i] == 'd' || input[i] == 'f'){
                        if(prev == 0)
                            time+=4;
                        else    
                            time+=2;
                        
                        prev = 0;
                    }
                    // cout<<"\ntime"<<time;
                }
                sum_time+=time;
                wordList.insert(std::pair<std::string,int> (input,time));
            }
            // cout<<"\nSumTime"<<sum_time;


            num--;
        }
        cout<<sum_time<<endl;
        testCount--;
    }

}