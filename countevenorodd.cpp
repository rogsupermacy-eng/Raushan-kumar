// # include<iostream>
// using namespace std;
// int main(){
//     int n,digit, even = 0,odd = 0;
//     cout<<"enter your number = ";
//     cin>>n;


//     if(n>0)n = -n;

//     if(n==0){
//         even = 1;

//     }

//     while(n!=0){
//         digit =n%10;
//         if(digit%2==0)
//         even++;
//         else
//         odd++;
//         n = n/10;


//     }
//     cout<<"even digit = "<<even<<endl;
//     cout<<"odd digit"<<odd;
//     return 0;

// }



// # include<iostream>
// using namespace std;
// int main(){

//     int n, ld,even = 0, odd = 0;
//     cout<<"enter your number = ";
//     cin>>n;

//     if(n>0)n = -n;
//     if(n==0){
//         even = 1;
//         while(n!=0){
//             ld = n%10;
//             if(ld%2==0)
//             even++;
//             else
//             odd++;
//             n = n/10;
//         }
//         cout<<"even digit = "<<even<<endl;
//         cout<<"odd digit"<<odd;
        
    
//     }
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n, ld;
//     int even = 0, odd = 0;

//     cout << "Enter your number = ";
//     cin >> n;

//     while (n != 0) {
//         ld = n % 10;

//         if (ld % 2 == 0) {
//             even++;
//         } else {
//             odd++;
//         }

//         n = n / 10;
//     }

//     cout << "Even digits = " << even << endl;
//     cout << "Odd digits = " << odd << endl;

//     return 0;
// }


# include<iostream>
using namespace std;
int main(){
    int n,ld,even = 0, odd = 0;
    cout<<"enter your number = ";
    cin>>n;

    while(n!=0){
        ld = n%10;
        if(ld%2==0)
        even++;
        else
        odd++;
         n = n/10;

    }
    cout<<"even number "<<even<<endl;
    cout<<"odd number = "<<odd;
    
}
