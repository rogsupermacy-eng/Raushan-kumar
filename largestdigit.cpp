# include<iostream>
using namespace std;
int main(){

    int n,digit,largest = 0;
    cout<<"enter our digit = ";
    cin>>n;
    if(n<0)n = -n;
    while(n!=0){
        digit = n%10;
        largest = digit;
        if(digit>largest)
        n = n/10;
    }
    cout<<largest;
}