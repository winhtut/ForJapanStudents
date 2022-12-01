//
// Created by National Cyber City on 12/1/2022.
//

#include "iostream"
#include "stdlib.h"
#include "time.h"
using namespace std;

int genereateRandom();
void menu();
class MyClass{
public:
    int add(int n1, int n2){
        return n1+n2;
    }
    int subtraction(int n1, int n2){
        return n1-n2;
    }
    int multiplication(int n1, int n2){
        return n1*n2;
    }

};

int main(){

    srand(time(NULL));

    menu();

}

void menu(){
    MyClass obj;
    int option=0;
    cout<<"Quiz Menu"<<endl;
    cout<<"Press 1 to Addition\nPress 2 to Subtraction\nPress 3 Multiplication\nPress 4 Exit:";
    cin>>option;
    if(option==4){
        exit(1);
    }

    int question=0;
    cout<<"Enter the number of questions:";
    cin>>question;
    string caseO1;
    int answer = 0;
    int randAnswer=0;

    int answerFlagCor=0;
    switch (option) {
        case 1:
            cout<<"You have selected 'Addition' and you have "<<question<<" questions to proceed."<<endl;
            cout<<"Click 'Y' to proceed:";
            cin>>caseO1;
            if(caseO1=="Y"){
                for(int i=0; i<question; i++){
                    int rand1=genereateRandom();
                    int rand2=genereateRandom();
                    cout<<"Q"<<i+1<<" :"<< rand1 <<"+"<<rand2<<"=";
                    cin>>answer;
                    randAnswer = obj.add(rand1,rand2);
                    if(answer==randAnswer){
                        cout<<"Correct"<<endl;
                        answerFlagCor++;
                    } else{
                        cout<<"Wrong"<<endl;
                    }

                }
                cout<<"Score is:"<<answerFlagCor<<"/"<<question;
            }
            break;
        case 2:
            cout<<"You have selected 'Subtraction' and you have "<<question<<" questions to proceed."<<endl;
            cout<<"Click 'Y' to proceed:";
            cin>>caseO1;
            if(caseO1=="Y"){
                for(int i=0; i<question; i++){
                    int rand1=genereateRandom();
                    int rand2=genereateRandom();
                    cout<<"Q"<<i+1<<" :"<< rand1 <<"-"<<rand2<<"=";
                    cin>>answer;
                    randAnswer = obj.subtraction(rand1,rand2);
                    if(answer==randAnswer){
                        cout<<"Correct"<<endl;
                        answerFlagCor++;
                    } else{
                        cout<<"Wrong"<<endl;
                    }

                }
                cout<<"Score is:"<<answerFlagCor<<"/"<<question;
            }
            break;

        case 3:
            cout<<"You have selected 'Multiplication' and you have "<<question<<" questions to proceed."<<endl;
            cout<<"Click 'Y' to proceed:";
            cin>>caseO1;
            if(caseO1=="Y"){
                for(int i=0; i<question; i++){
                    int rand1=genereateRandom();
                    int rand2=genereateRandom();
                    cout<<"Q"<<i+1<<" :"<< rand1 <<"*"<<rand2<<"=";
                    cin>>answer;
                    randAnswer = obj.multiplication(rand1,rand2);
                    if(answer==randAnswer){
                        cout<<"Correct"<<endl;
                        answerFlagCor++;
                    } else{
                        cout<<"Wrong"<<endl;
                    }

                }
                cout<<"Score is:"<<answerFlagCor<<"/"<<question;
            }
            break;

        default:
            break;

    }


}

int genereateRandom(){
    int random =0;
    random = rand()%100;

    if(random==0){
        random++;
    }

    return random;
}