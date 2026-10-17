# include<iostream>
#include<string>
using namespace std;
int main(){


    int num1;
    cout<<"enter 1st number = ";
    cin>>num1;

    char op;
    cout<<"enter a operator = ";
    cin>>op;
    int num2;
    cout<<"enter 2nd number = " ;
    cin>>num2;

    switch(op) {
        case '+':
        cout<<num1+num2;
        break;

        case '-':
        cout<<num1-num2;
        break;
        case '*':
        cout<<num1*num2;
        break;

        case '/':
        cout<<num1/num2;
        break;
        
        default:
        cout<<"invalid operator";

    }

    return 0;
}