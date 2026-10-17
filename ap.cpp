// # include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"enter a number = ";
//     cin>>n;

//     for(int i=1; i<=2*n-1; i+=2)
//     cout<<i<<" ";
//     return 0;
// }

// # include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"enter number:-";
//     cin>>n;

//     // AP- 4,7,10,13,16...........
//     for(int i=1; i<=3*n-1; i+=3)

# include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter a number = ";
    cin>>n;

    int a = 4;


    
    for(int i=1; i<=n; i++){
    cout<<a<<" ";
   a = a+3;
  }
} 