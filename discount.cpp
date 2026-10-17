// # include<iostream>
// using namespace std;
// int main(){

//     int amt = 10000;
//     double dis = 0, totalAmt = 0;

//     if(amt>0 and amt<=5000)
//     dis = 0;
//     else if(amt>5000 and amt<=7000)
//     dis = 0.05;

//     else if(amt>7000 and amt<9000)
//     dis = 0.1;
//     else
//     dis = 0.2;
//     totalAmt = amt-(amt*dis);
//     cout<<"Bill"<<totalAmt<<endl;



// }


// # include<iostream>
// using namespace std;
// int main() {

//     double dis = 0,totalAmt = 0;
    

//     int amt;
//     cout<<"enter amount = ";
//     cin>>amt;

// if(amt>0 and amt<=5000)
// dis = 0;

// else if(amt>5000 and amt<=7000)
// dis = 0.05;
// else if(amt>7000 and amt<9000)
// dis = 0.1;
// else 
// dis = 0.2;

// totalAmt = amt-(amt*dis);
// cout<<"Bil = "<<totalAmt<<endl;
// return 0;

// }

# include<iostream>
using namespace std;
int main(){

    float amount,Discount,finalAmount;

    cout<<"enter your purchase amount = " ;
    cin>>amount;

    if(amount>0 and amount<5000)
    Discount = 0;
    else if(amount>=5000 and amount<=7000)
    Discount = 5;

    else if(amount>7000 and amount<9000)
    Discount = 10;

    else
    Discount = 20;

    finalAmount = amount-(amount*(Discount/100));


    
    cout<<"purchase amount = "<<amount<<endl;
    cout<<"Discount = "<<Discount<<"%"<<endl;
    cout<<"Final amount = "<<finalAmount<<endl;
    return 0;
    
}