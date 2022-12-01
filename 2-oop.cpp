#include "iostream"
using namespace std;


class Myclass{

public:
    int age=100;
    void myPrint(){
        cout<<"This is pirnt method:"<<endl;
    }


};

int main(){
    Myclass obj; // object = instance of a class ;

    cout<<"age:"<<obj.age<<endl;
    obj.myPrint();

    return 0;
}