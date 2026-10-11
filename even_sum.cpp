# include<iostream>
using namespace std;
int main(){
  int n,digit,sum = 0;
cout<<"enter a number = ";
cin>>n;
while(n>0){
digit = n%10;

if(digit%2==0){
sum += digit;
}
n = n/10;
}
cout<<"sum of even digit = "<<sum<<endl;
return 0;
}
