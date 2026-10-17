# include<iostream>
using namespace std;
int main(){

    float bill,unit;

    cout<<"enter unit = ";
    cin>>unit;
if(unit<400){
bill += ( unit-400)*13;
unit = 400;
}
if(unit>=201 and unit<=400){

    bill += (unit-200)*8;
    unit = 200;


}

if(unit>101 and unit<=200){
    bill += (unit-100)*6;
    unit = 100;
}
else 
bill += unit*4.2;

cout<<"Bill = "<<bill<<endl;
return 0;
}





