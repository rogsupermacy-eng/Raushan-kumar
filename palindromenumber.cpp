// # include<iostream>
// using namespace std;
// int main(){
// int n,ld,rev= 0;
// cout<<"number = ";
// cin>>n;
// int original = n;

// while(n!=0){
//     ld = n%10;
//     rev = rev*10+ld;
//     n = n/10;
// }
// if(original==rev){
//     cout<<"Palindrome";
// }
// else{
//     cout<<"Not Palindrome";

// }

// }


# include<iostream>
using namespace std;
int main(){

    int n,ld,rev = 0;
    cout<<"number = ";
    cin>>n;

    int original = n;

    while(n!=0){
        ld = n%10;
        rev = rev*10+ld;
        n = n/10;

    }
    if(original==rev){
        cout<<"Palindrome";

    }
    else{
        cout<<"Not Palindrome";
        
    }
}