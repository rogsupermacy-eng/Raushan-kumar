// # include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter your number = ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i+1; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number = ";//same numbner flip
    
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }


}