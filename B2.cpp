
#include <iostream>
#include <set>
using namespace std;

int main ()
{
    int tcCount, inputCount, K, input, count1;;
    
    cin>> tcCount;
    while(tcCount){
        cin>>inputCount>>K;
        int temp;
        temp = inputCount;    
        count1 = 0;
        while(inputCount){
            cin>>input;
            if(input != 1)
                count1++;
            inputCount--;
        }
                
        if(K< count1)
            cout<<"NO\n";
        else
            cout<<"YES\n";

        tcCount--;
   }
   
    return 0;
}