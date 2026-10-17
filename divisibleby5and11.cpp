# include<iostream>
using namespace std;
int main(){

    int a;
    cout<<"enter 1st number = " ;
    cin>>a;

    int b;
    cout<<"enter 2nd number is = " ;
    cin>>b;

    if(a%5==0 or a%11==0){
        cout<<"both are divieible" <<a;

    }
    else if(b%5==0 or b%11==0){
        cout<<"both are divisible by "<<b;

    }
    else
    cout<<"both are not divisible";
    return 0;
}