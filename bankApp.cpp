#include<iostream>
#include<iomanip>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance = 0;
    int choice = 0;

    do
    {
        cout<<"******************* "<<endl;
        cout<<"Enter your choice: "<<endl;
        cout<<"******************* "<<endl;
        cout<<"1. Show Balance"<<endl;
        cout<<"2. Deposit Money"<<endl;
        cout<<"3. Withdraw Money"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter here: ";
        cin >> choice;

        cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        
        case 2:
            balance += deposit();
            showBalance(balance);
            break;

        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;

        case 4:
            cout<<"Thanks for visiting!"<<endl;
            break;

        default:
            cout<<"Invalid Choice!"<<endl;
            break;
        }
    } while (choice != 4);
    
}

void showBalance(double balance){
    cout<<"Your Balance is: Rs."<< setprecision(2) << fixed <<balance<<endl;
}
double deposit(){
    double amount = 0;
    cout<<"Enter a amount to be deposited: ";
    cin >> amount;

    if(amount > 0){
        return amount;
    }
    else {
        cout<<"The amount is Invalid!"<<endl;
        return 0;
    }

}
double withdraw(double balance){

    double amount;
    cout<<"Enter the amount ot be withdrawn: ";
    cin >> amount;

    if(amount > balance){
        cout<<"Insufficent funds!"<<endl;
        return 0;
    } 
    else if(amount < 0){
        cout<<"Invalid amount!"<<endl;
        return 0;
    }
    else {
        return amount;
    }

}

