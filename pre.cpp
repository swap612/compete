#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    bool desc(int i,int j) { return (i>j); }
    
    int main(){
    int tcCount, teamCount, rank, temp;
    cin >> tcCount;
    while(tcCount){
        
        cin>> teamCount >> rank;
        std::vector<int> teamScores;

        //take input and store in vector
        while(teamCount){
            cin>>temp ;
            teamScores.push_back(temp);
            teamCount--;   
        }

        //sort the vector

        
        std::vector<int>::iterator it;
        std::sort(teamScores.begin(), teamScores.end(), desc); 
         cout<<"\n*****Printing Data*******\n";
        for(int i=0;i<teamScores.size();i++){
            cout<<"\t"<< teamScores[i];
        }

        tcCount--;
    }
}
