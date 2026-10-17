# include<iostream>
using namespace std;
int main(){

    int a;
    cout<<"enter 1st number = " ;
    cin>>a;

    int b;
    cout<<"enter 2nd number = " ;
    cin>>b;

    int c;
    cout<<"enter 3rd number = " ;
    cin>>c;

    if(a>b and a>c){

        cout<<"greatest number = "<<a;

    }
    else if(b>c and b>a){
        cout<<"greatest number = "<<b;

    }
    else 
    cout<<"c is greatest number = "<<c;
    return 0;
}