# include<iostream>
using namespace std;
int main() {

    int a;
    cout<<"marks in Maths = " ;
    cin>>a;

    int b;
    cout<<"marks in English = " ;
    cin>>b;

    int c;
    cout<<"marks in Hindi = " ;
    cin>>c;

    int d;
    cout<<"marks in Science = " ;
    cin>>d;
    int e;
    cout<<"marks in Social Studies = " ;
    cin>>e;

    float m = a+b+c+d+e;
    cout<<"total marks in 5 subject = "<<m<<endl;
    float f = (a+b+c+d+e)/5;
    cout<<"total percentage of ths students = "<<f<<endl;
    return 0;
}