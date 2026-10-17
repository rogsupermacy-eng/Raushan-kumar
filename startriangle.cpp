// # include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"enter a number = ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<"* ";

//         }
//         cout<<endl;
//     }
// }


// // STAR TRIANGLE PATTERN [PRITING]
// # include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter your number = ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<"* ";

            
//         }
//         cout<<endl;
//     }
// }

# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number = ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}