#include <iostream>
#include<vector>

using namespace std;

std::vector<double> CardNum;

int main(){
    int stCount, shoutCount, temp, decrCount;
    double num;
    cin >> stCount >> shoutCount;
        CardNum.clear();
        temp = stCount;
        //take input and store in vector
        while(temp){
            cin>>num ;
            CardNum.push_back(num);
            temp--;   
        }
        
        temp = shoutCount;
        int cmd, index1, index2;
        while(temp){
            cin>>cmd >>index1 >> index2 ;
            if(index1 >index2){
                std::swap(index1, index2);
            }
            double sum = 0;
            switch(cmd){
                case 1:
                    for(int i=index1-1; i<index2-1;i+=2)
                        std::swap(CardNum[i],CardNum[i+1]);

                    // for(int i=0; i<CardNum.size();i++)
                    // {
                    //     cout<<CardNum[i];
                    // }
                    break;
                case 2:
                    sum =0;
                    // sum index1 to index 2  
                    for(int i=index1-1; i<index2;i+=1)
                        sum+=CardNum[i] ;
                    cout<<sum<<endl;
                    break;
            }
            temp--;   
        }
        

     
}