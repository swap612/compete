#include<iostream>
#include<vector>
using namespace std;

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

    
         cout<<"\n*****Printing Data*******\n";
        for(int i=0;i<teamScores.size();i++){
            cout<<"\t"<< teamScores[i];
        }

        tcCount--;
    }
}
