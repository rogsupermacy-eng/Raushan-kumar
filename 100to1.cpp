// # include<iostream>
// using namespace std;
// int main(){

//     for(int i=100; i>=1; i--)
//     cout<<i<<




// # include<iostream>
// using namespace std;
// int main(){

//     for(int i=1; i<=100; i++)
//     if(i%2==0)
//     cout<<i<<" ";
# include<iostream>
using namespace std;
int main(){
    
    int n, sum = 0;
    cout<<"enter a number = ";
    cin>>n;

    for(int i=1; i<=n; i++){
        sum = sum+i;
    }
    cout<<"sum = "<<sum;
    return 0;
    

}