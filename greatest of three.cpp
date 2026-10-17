# include<iostream>
using namespace std;
int main() {

    int num1,num2,num3;

    cout<<"enter 1st number = " ;
    cin>>num1;

    cout<<"enter 2nd number is = " ;
    cin>>num2;

    cout<<"enter 3rd number = " ;
    cin>>num3;

    if(num1>num2 and num1>num3){
    cout<<num1;
}
    else if (num2>num1 and num2>num3)
    {
      cout<<num2 ; 
    }
    else{
    cout<<num3;
    }

    return 0;
}

    