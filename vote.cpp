# include<iostream>
#include<string>
using namespace std;
int main(){

    string name;
    cout<<"sir,plese tell me your name:-";
    cin>>name;

    int age;
    cout<<" now tell me your age sir:-";
    cin>>age;

    if(age>=18){
        cout<<name<<"you are  eligible for vote";



    }
    else
    cout<<name<<"you are not eligible for vote" ;

    return 0;
}
