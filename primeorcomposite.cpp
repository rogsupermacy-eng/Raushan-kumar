# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number = ";
    cin>>n;
    
    bool flag = true;//it means prime
    for(int i=1; i<=n/2; i++){
        if(n%i==0){
            flag = false;//it means composite
            break;
        }
        if(n==1){
            cout<<"neither prime or not composite";
            
        }
        else if(flag = true){
            cout<<"prime";
        }
        else{
        cout<<"composite";
        }
    }

}