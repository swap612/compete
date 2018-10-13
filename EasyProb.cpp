#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>

using namespace std;

int main(){
    int testCaseCount, m, n, temp;
    cin>>testCaseCount;
    int result[testCaseCount];
    int i=0;
    while(i < testCaseCount){
        cin>>m >>n ;            
        // std::vector<int> vote;
        std::map<int,int> vote;
        std::map<int,int>::iterator voteIter;

        //getting input
        while(n){
            cin >> temp;

            //find add to map increment count
            voteIter = vote.find(temp);
            if(voteIter != vote.end()){
                voteIter->second = voteIter->second + 1;
                // cout<<" updating temp "<<temp;
            }
            else{
                // cout<<" adiing temp "<<temp;
                vote.insert(std::pair<int,int> (temp,1));
            }

            n--;
        }

        //algo
       std::set<int> minSet;
       int maxVoteCount = 0; 
        for(voteIter = vote.begin();voteIter!=vote.end();voteIter++){
            if(voteIter == vote.begin() ){
                maxVoteCount = voteIter->second;
                minSet.insert(voteIter->first);
                continue;    
            }
            else if (maxVoteCount == voteIter->second){
                minSet.insert(voteIter->first);
            }
            else if(maxVoteCount < voteIter->second){
                minSet.clear();
                maxVoteCount = voteIter->second;
                minSet.insert(voteIter->first);
            }
        } 
        
        std::set<int>::iterator set_itr;
        set_itr =minSet.begin();
        result[i] = *set_itr;

        i++;
      
    }
    for(int i=0;i<testCaseCount;i++){
        cout<<result[i]<<endl;
    }
}