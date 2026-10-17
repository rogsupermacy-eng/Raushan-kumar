// #include<iostream>
// using namespace std;
// int main() {


//     int cp;
//     cout<<"enter cost price of your product = " ;
//     cin>>cp;

//     int sp;
//     cout<<"enter selling price of your product = " ;
//     cin>>sp;

//     if(sp>cp){
//         cout<<"profit";
//     }
//     else if(cp>sp){
//     cout<<"loss";
// }
// else{
//     cout<<"no profit or no loss";
// }


    
// return 0;
// }

#include<iostream>
using namespace std;
int main() {

    int cp;
    cout<<"enter cost price of your product = " ;
    cin>>cp;

    int sp;
    cout<<"enter selling price of your product = " ;
    cin>>sp;

    if(sp>cp){
        cout<<"profit" <<sp-cp;
    }

    else if(sp<cp){
        cout<<"loss" <<cp-sp ;
    }

    else
    cout<<"no profit or no loss";
    return 0;
}