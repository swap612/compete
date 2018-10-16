#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


std::vector<int> primeSet ={2,3,5,7,11,13,17,19,23,29,31,37,41,43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89,97};

std::vector<int> semiPrimeSet;
std::vector<int>::iterator firstItr, lastItr, findItr; 

int main(){
    
    //generate semiprimeset
    int temp;
    for(int i=0;i<primeSet.size()-1;i++){
        
        for(int j=i+1;j<primeSet.size();j++){
            
            temp = primeSet[i]*primeSet[j];
            if(temp < 200)
                semiPrimeSet.push_back(temp) ;
            
        }
    }

    //print primeSet
        cout<<"primeSet :";
    for(int i=0;i<primeSet.size();i++){
        cout<<primeSet[i]<<" ";
    }
    cout<<"\nprimeSet size::"<<primeSet.size()<<endl;
     
    cout<<"\n Semi primeSet :";
    for(int i=0;i<semiPrimeSet.size();i++){
        cout<<semiPrimeSet[i]<<" ";
    }
    cout<<"\nsemi primeSet size::"<<semiPrimeSet.size()<<endl;

    //sort semi-prime set
    std::sort(semiPrimeSet.begin(),semiPrimeSet.end());

    cout<<"\nSorted Semi primeSet :";
    for(int i=0;i<semiPrimeSet.size();i++){
        cout<<semiPrimeSet[i]<<" ";
    }
    cout<<"\nSorted semi primeSet size::"<<semiPrimeSet.size()<<endl;

    //serch the given number in semi prime set as sum of 2 numbers
    int testCount, num;
    cin >> testCount;
    while(testCount > 0)
    {
        cin >> num;

        //searc
        

        testCount--;
    }

}