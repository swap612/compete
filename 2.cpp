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
    //sort semi primeset
    std::sort(semiPrimeSet.begin(),semiPrimeSet.end());

    int testCount, num, index;
    cin >> testCount;
    while(testCount > 0)
    {
        cin >> num;

        //search elemnt less than num in semi primeSet
        findItr = std::find(semiPrimeSet.begin(),semiPrimeSet.end(),num);

        std::vector<int>::iterator low,up;
        if(findItr!= semiPrimeSet.end()){
            index = findItr -  semiPrimeSet.begin();
        }
        else{
            low=std::lower_bound (semiPrimeSet.begin(), semiPrimeSet.end(), num);
            index = (low - semiPrimeSet.begin() -1);
            if(index == -1){
                cout<<"NO"<<endl;
                goto end;
            }   
        }

        //check if num is present as sum of 2 numbers
        firstItr = semiPrimeSet.begin();
        lastItr = semiPrimeSet.begin()+index;

        while(*firstItr <= *lastItr){
            if((*firstItr + *lastItr) > num )
                lastItr--;
            else if ((*firstItr + *lastItr) < num )
                firstItr++;
            else{    
                cout<<"YES"<<endl;
                goto end;
            }

        }
        cout<<"NO"<<endl;

        end: testCount--;
    }

}