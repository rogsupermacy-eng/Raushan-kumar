# include<iostream>
using namespace std;
int main(){
int n,ld,sum;

cout<<"enter a number = ";
cin>>n;
sum = 0;

while(n!=0){
    n = n%10;
    ld = n/10;
    sum = sum+ld;  
}
if(n%2==0)
cout<<sum;
}