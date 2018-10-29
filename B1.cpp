
#include <iostream>
#include <set>
using namespace std;
int main ()
{
    std::set<int> myset;
    std::set<int>::iterator it;
    int year[]={2010,2015,2016,2017,2019};
    myset.insert(year,year+5);   

    int tcCount, input;
    cin>> tcCount;
    while(tcCount){
        cin>>input;        
        it=myset.find(input);

        if(it!=myset.end())
            cout<<"HOSTED\n";
        else
            cout<<"NOT HOSTED\n";

        tcCount--;
   }
   
   // std::cout << "myset contains:";
    // for (it=myset.begin(); it!=myset.end(); ++it)
    //     std::cout << ' ' << *it;
    // std::cout << '\n';

    return 0;
}