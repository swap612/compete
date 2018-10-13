#include<iostream>

using namespace std;


int main(){
    string input;
    cin >> input;
    int count0 = 0,count1 = 0;
    // cout<< input.size() <<input;
    int size;
    size= input.size();
    
    if(size%2){
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<input.size();i++){
        if(input[i] == '0')
            count0++;
        else
            count1++;

        if(count1 > count0){
            cout<<"NO";
            return 0;
        }

    }
    if(count0 == count1)
        cout<<"YES";
    else    
        cout<<"NO";
}