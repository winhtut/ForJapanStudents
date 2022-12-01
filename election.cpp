//
// Created by National Cyber City on 12/1/2022.
//

#include "iostream"

using namespace std;
int findWinner(int votes[]);
double calculatePercentage(int votes[],int vote);

string students[6]={"Cathe","Teoh","Jenny","Ashley","James","Dave"};
int main(){



    int votes[5];
    int vote=0;


    for(int i=0; i<6 ; i++){

        cout<<"Enter vote for :"<<students[i]<<":";
        cin>>vote;
        votes[i]=vote;

    }
    int totalVotes=0;
    int x=0;
    for( x=0 ; x<6 ; x++){
        cout<<"data:"<<votes[x]<<endl;
        totalVotes = totalVotes + votes[x];

    }
    cout<<"Total Votes:"<<totalVotes<<endl;
    int winner = findWinner(votes);
    cout<<"Winner :"<<students[winner]<<endl;

    calculatePercentage(votes,totalVotes);


    return 0;
}

int findWinner(int votes[]){

    int index=0;
    int winIndex=0;
    for(index=1 ; index<6 ; index++){
        if(votes[0]<votes[index]){

            winIndex = index;
        }

    }

    return winIndex;

}

double calculatePercentage(int votes[],int vote){

    int y=0;
    double voteInt=0.0;
    double voD=0.0;
    double voInP=0.0;
    cout<<"Students/Con   Votes Received    %of Total Votes"<<endl;
    for(y=0; y<6 ; y++){
        voteInt=votes[y];

        voD = voteInt/vote;

        voInP = voD*100;
        cout<<students[y]<<"\t\t"<<votes[y]<<"\t\t"<<voInP<<"%"<<endl;

    }
    return voInP;
}