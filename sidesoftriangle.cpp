# include<iostream>
using namespace std;
int main() {


int a;
cout<<"enter 1st side = " ;
cin>>a;

int b;
cout<<"enter 2nd side = " ;
cin>>b;

int c;
cout<<"enter 3rs side = " ;
cin>>c;

if(a+b>c and b+c>a and c+a>b){
cout<<"this triangel is valid";

}
else{
cout<<"this triangle is invalid ";
}
return 0;
}
