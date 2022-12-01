#include <iostream>
using namespace std;
void toPrint();
int add(int a, int b);
int factorial(int number );
int main() {
    std::cout << "Hello, World!" << std::endl;



    cout<<"result:"<<factorial(10)<<endl;

    return 1;
}

//void toPrint(){
//
//    cout<<"This is from print fucntion"<<endl;
//    cout<<"This is from print fucntion"<<endl;
//    cout<<"This is from print fucntion"<<endl;
//    cout<<"This is from print fucntion"<<endl;
//    cout<<"This is from print fucntion"<<endl;
//    cout<<"This is from print fucntion"<<endl;
//    cout<<"This is from print fucntion"<<endl;
//    cout<<"This is from print fucntion"<<endl;
//    cout<<"This is from print fucntion"<<endl;
//    cout<<"This is from print fucntion"<<endl;
//    cout<<"This is from print fucntion"<<endl;
//    cout<<"This is from print fucntion"<<endl;
//    cout<<"This is from print fucntion"<<endl;
//    cout<<"This is from print fucntion"<<endl;
//    cout<<"This is from print fucntion"<<endl;
//
//
//}
//
//int add(int a, int b){
//    int c = a*b;
//
//    return c;
//}

int factorial(int number ){ // 10 // 9 // 8

    if(number > 1){
        return number* factorial(number-1); // 10*9 * 8 * 7 * 6 * 5
    } else{
        return 1;
    }

}