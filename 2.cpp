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


    //print primeSet
   /*     cout<<"primeSet :";
    for(int i=0;i<primeSet.size();i++){
        cout<<primeSet[i]<<" ";
    }
    cout<<"\nprimeSet size::"<<primeSet.size()<<endl;
     
    cout<<"\n Semi primeSet :";
    for(int i=0;i<semiPrimeSet.size();i++){
        cout<<semiPrimeSet[i]<<" ";
    }
    cout<<"\nsemi primeSet size::"<<semiPrimeSet.size()<<endl;
*/
    //sort semi-prime set

    // cout<<"\nSorted Semi primeSet :";
    // for(int i=0;i<semiPrimeSet.size();i++){
    //     cout<<semiPrimeSet[i]<<" ";
    // }
    // cout<<"\nSorted semi primeSet size::"<<semiPrimeSet.size()<<endl;

    //serch the given number in semi prime set as sum of 2 numbers
    int testCount, num, index;
    cin >> testCount;
    while(testCount > 0)
    {
        cin >> num;

        //search elemnt less than num in semi primeSet
        findItr = std::find(semiPrimeSet.begin(),semiPrimeSet.end(),num);

        // if(finditr!= semiPrimeSet.end()){
        //     cout<< "elemnt found at index "<<index
        // }
        std::vector<int>::iterator low,up;
        if(findItr!= semiPrimeSet.end()){
            index = findItr -  semiPrimeSet.begin();
            // cout<< "elemnt found at index "<<index << "element "<<semiPrimeSet[index];
        }
        else{
            low=std::lower_bound (semiPrimeSet.begin(), semiPrimeSet.end(), num);
            index = (low - semiPrimeSet.begin() -1);
            if(index == -1){
                cout<<"NO"<<endl;
                goto end;
            }
            // cout<<"\nLess than"<<*low;
            // cout<<"found at index"<<index;      
        }

        //check if num is present as sum of 2 numbers
        firstItr = semiPrimeSet.begin();
        lastItr = semiPrimeSet.begin()+index;
        // cout<<"\nElement present between "<<*firstItr<<"--"<<*lastItr;

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
        cout<<"NO";

        end: testCount--;
    }

}