// # include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"enter your numberb = ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i+1; j++){
//             cout<<(char)(j+64)<<" ";

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
        for(int j=1; j<=n-i+1; j++){
            cout<<(char)(j+64)<<" ";

        }
        cout<<endl;

    }
    return 0;
}
