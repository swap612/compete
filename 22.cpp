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
        
        
        decrCount=0;
        int i=0, flag =1;
        while(i < CardCount -1){
            if(CardNum[i] > CardNum[i+1])
                decrCount++;
                     
            i++;
               
        }
        cout<<"\ndecrCount: "<<decrCount;

        if(CardNum[0] < CardNum[CardCount-1])
        {
            //if first is smaller than last element, we cannot shuffle the cards 
            flag = 0;
        }

        if( (decrCount == 0) && (!flag))
            cout<<"YES"<<endl;
        else if( (decrCount <2) && flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl; 
                            
                
        end: tcCount--;
    }
    
}