#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 std::vector<int> teamScores;


//Rank functon
// int getRank(int rank, int score, int size){
//     cout<<"\n Rank: "<<rank;
//     index = 1 ;
//     if(rank+1 < size){
//         if(teamScores[rank+1] < score)
//             return rank;
//     }
//     else 
//         return rank;

//     while((rank+index) < size ){
//         if(teamScores[rank+index] == score){
//             index<<=1;
//             cout<<" if: "<<index;
//         }
//         else{
//             index>>=1;
//             cout<<" else: "<<index;
//             return getRank(rank+index,score, size);
//         }
//     }
// }

//Comparator function for sort
bool desc(int i,int j) { return (i>j); }
    
int main(){
    int tcCount, teamCount, rank, temp;
    cin >> tcCount;
    while(tcCount){
        
        cin>> teamCount >> rank;
       teamScores.clear();

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
        // cout<<"\nKth team score:"<<kScore;

        //Find number of teams with score >= kScore
        // cout<<endl<<"out"<< getRank(rank-1, kScore, teamCount );
        

        //simple linear solution
        while(teamScores[rank] == kScore){
            rank++;
        }
        cout<<rank<<endl;
        // cout<<endl<<"rank is "<<rank;

        //testing 
        // cout<<"\n*****Printing Data*******\n";
        // for(int i=0;i<teamScores.size();i++){
        //     cout<<"\t"<< teamScores[i];
        // }

        tcCount--;
    }
    
}
