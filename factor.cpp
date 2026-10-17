// # include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"enter a nunber = " ;
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         if(n%i==0)

    
//       cout<<i<<" "<<endl;
//     }
// }


// # include<iostream>
// using namespace std;
// int main(){

//   int n;
//   cout<<"enter a number = ";
//   cin>>n;

//   for(int i=1; i<=n; i++){
//     if(n%i==0)
//     cout<<i<<" ";

//   }
// }


# include<iostream>
using namespace std;
int main(){
  
  int n,fact = 1;
  cout<<"enter a number = ";
  cin>>n;

  for(int i=1; i<=n; i++){
    if(n%i==1){
      fact = fact*i;

      
    }
    cout<<fact;
  }
}