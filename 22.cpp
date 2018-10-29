#include <iostream>
#include<vector>

using namespace std;

std::vector<int> CardNum;

int main(){
    int tcCount, CardCount, temp, num, decrCount;
    
    cin >> tcCount;
    while(tcCount){
        cin>> CardCount;
        CardNum.clear();
        temp = CardCount;
        //take input and store in vector
        while(temp){
            cin>>num ;
            CardNum.push_back(num);
            temp--;   
        }
        
        //number of time decreasing elemennt occurs
        decrCount=0;
        int i=0, flag =1;
        while(i < CardCount -1){
            //if in decr order increment
            if(CardNum[i] > CardNum[i+1])
                decrCount++;
                     
            i++;
               
        }
        // cout<<"\ndecrCount: "<<decrCount;

        //if first is smaller than last element, we cannot shuffle the cards 
        if(CardNum[0] < CardNum[CardCount-1])
        {
            flag = 0;
        }

        //CASE1: increasing order, decr count 0 and flag will be 0.
        if( (decrCount == 0) && (!flag))
            cout<<"YES"<<endl;
        //CASE2: decr count can be less than 2 and flag =1
        else if( (decrCount <2) && flag)
            cout<<"YES"<<endl;
        //CASE3: Remaining cases
        else
            cout<<"NO"<<endl; 
                             
        tcCount--;
    }
    
}