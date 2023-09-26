#include<iostream>
#include<string>
using namespace std;

int getDigits(const int number);
int sumEvenDigits(const string cardNumber);
int sumOddDigits(const string cardNumber);

int main(){
    string cardNumber;
    int result = 0;

    cout<<"Enter the card #: ";
    cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result % 10 == 0){
        cout<< cardNumber<<" is valid!";
    }
    else {
        cout<< cardNumber <<" is not valid!";
    }
}

int getDigits(const int number){
    return number % 10 + (number / 10 % 10); // 18 = (18 % 10 = 8) + (18 / 10 % 10 = 1), 8 + 1 = 9. 9 will be return;
}
int sumEvenDigits(const string cardNumber){
    
    int sum = 0;

    for(int i= cardNumber.size() - 2; i >= 0; i-=2){
        sum += getDigits((cardNumber[i]-'0') * 2); 
    }
    return sum;
}
int sumOddDigits(const string cardNumber){
    
    int sum = 0;

    for(int i=cardNumber.size()-1; i >= 0; i -= 2){
        sum += cardNumber[i] - '0';
    }
    return sum;
    
}