// # include<iostream>
// using namespace std;
// int main(){

//     int n,lastdigit,product;
//     cout<<"enter your number = ";
//     cin>>n;

//     product = 1;

//     while(n!=0){
       
//         lastdigit = n/10;

//         n = n%10;
//         product = product*lastdigit;

//     }
//     cout<<product;
//     return 0;
// }


# include<iostream>
using namespace std;
int main(){

    int n,ld, product = 1;
    cout<<"enter anumber = ";
    cin>>n;
    while(n!=0){
        ld = n%10;//Last digit nikalo
        n = n/10;
        product = product*ld;
   
}
cout<<product;
}