# include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter your base = ";
    cin>>a;
    cout<<"enter your exponent = ";
    cin>>b;

    long result = 1;
    if(b<0){
    cout<<"invalid exponent";
    return 0;
}
for(int i=1; i<=b; i++){
    result = result*a;

}
cout<<"power = "<<result;
return 0;
}

