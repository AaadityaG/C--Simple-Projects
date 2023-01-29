/*
To do : (For Single Account);
    1. Withdraw
    2. Deposite
    3. Check Balance

Logic :    
    Show Menu 
    - Global Variables(W_amount, balance, deposite) 
    - Create function for each option
*/

#include <iostream>
using namespace std;
int user_Balance = 0, dep_amt = 0, w_amt;

int with(){
    cout<<"Enter the amount to Withdraw : "<<endl;
    cin>>w_amt;
    if(w_amt<=user_Balance){
        cout<<w_amt<<"rs."<<" has been debited from your account succesfully!"<<endl;
        user_Balance = user_Balance - w_amt;
    }
    else{
        cout<<"Your account balance has not "<<w_amt<<"rs."<<endl;
        cout<<"--please check your balance--"<<endl;
    }
}

int depo(){
    cout<<"Enter the amount to Deposite : "<<endl;
    cin>>dep_amt;
    cout<<"Your Account has been credited with "<<dep_amt<<"rs. succesfully!"<<endl;
}

int cb(){
    cout<<"Your Account balance is : "<<user_Balance<<endl;
    // return user_Balance;
}

void showMenu(){
    cout<<endl;
    cout<<"---Choose your Required Option----"<<endl;
    cout<<"***************Menu***************"<<endl;
    cout<<"1. Check Balance"<<endl;
    cout<<"2. Deposit"<<endl;
    cout<<"3. Withdraw"<<endl;
    cout<<"**********************************"<<endl;
    cout<<":";
}


int main()
{    
    cout<<endl<<"--Welcome to the CodeWithAdi ATM--"<<endl;
    showMenu();
    int option;
    cin>>option;
    switch (option)
    {
        case 1:
            cb();
            break;
        case 2:
            depo();
            break;
        case 3:
            with();
            break;
        default:
            cout<<"Please choose valid option!"<<endl;
            break;
    }
    cout<<"Thank for visiting, Have a Good day!"<<endl;
    return 0;
}
