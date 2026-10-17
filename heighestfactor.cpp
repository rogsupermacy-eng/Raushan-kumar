# include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter a number = ";
    cin>>n;
   int fact = 1; //Factor store karaunga;

   for(int i=1; i<n; i++){
    if(n%i==0)  fact = i;

   }
   cout<<fact;
   return 0;

}
