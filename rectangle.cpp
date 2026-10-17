#include<iostream>
using namespace std;
int main() {



    int l;
    cout<<"enter length = " ;
    cin>>l;

    int b;
    cout<<"enter breadth = ";
    cin>>b;


    cout<<"area of a rectangle = ";
    cout<<(l*b)<<endl;

    cout<<"perimeter of rectangle = ";


    cout<<(2*(l+b))<<endl;

    if((l*b)>2*(l+b)){
    cout<<"area of rectangle is greater tha perimerer of rectangle"<<endl;


}
else 
cout<<"invalid result";
return 0;
}

