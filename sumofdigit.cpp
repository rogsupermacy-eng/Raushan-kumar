// # include<iostream>
// using namespace std;
// int main(){

//     int n,sum,lastdigit;

//     cout<<"enter anumber = ";
//     cin>>n;
//     sum = 0;
//     while(n!=0){
//         lastdigit = n%10;
//         n = n/10;
//         sum = sum+lastdigit;

//     }
//     cout<<sum;
//     return 0;
    
// // }

// # include<iostream>
// using namespace std;
// int main(){

//     int n,ld,sum = 0;

//     cout<<"enter a number = ";
//     cin>>n;

   
// while(n != 0){
//     ld = n % 10;     // last digit nikalo
//     n = n / 10;      // last digit hata do
//     sum = sum + ld;  // sum mein jodo
// }
// cout << sum;
    
    
// }

# include<iostream>
using namespace std;
int main(){
    int n,ld,sum;

    cout<<"enter a number = ";
    cin>>n;
    while(n!=0){
        if(n%2==0)
            ld = n%10;
            n = n/10;
            sum = sum+ld;

        
    }
    cout<<sum;
    return 0;

}