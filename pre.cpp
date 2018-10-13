#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Comparator function for sort
bool desc(int i,int j) { return (i>j); }
    
int main(){
    int tcCount, teamCount, rank, temp;
    cin >> tcCount;
    while(tcCount){
        
        cin>> teamCount >> rank;
       

        //take input and store in vector
        while(teamCount){
            cin>>temp ;
            teamScores.push_back(temp);
            teamCount--;   
        }

        //sort the vector
        std::vector<int>::iterator it;
        std::sort(teamScores.begin(), teamScores.end(), desc); 

        //take the score of kth team
        int kScore;
        kScore = teamScores[rank-1];
        cout<<"\nKth team score:"<<kScore;

        //Find number of teams with score >= kScore
        //cout<<endl<<"out"<< getRank(rank-1, kScore, teamCount );
        while(teamScores[rank] == kScore){
            rank++;
        }
        cout<<endl<<"rank is "<<rank;
        //testing 
        cout<<"\n*****Printing Data*******\n";
        for(int i=0;i<teamScores.size();i++){
            cout<<"\t"<< teamScores[i];
        }

        tcCount--;
    }

}
