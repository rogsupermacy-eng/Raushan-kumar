#include<iostream>
using namespace std;
int main() {


    int n;
    cout<<"enter a number = " ;
    cin>>n;

    if( n>99 && n<1000){
        cout<<"three digit number";
    }
        else
        cout<<"not three digit number";
        return 0;
}