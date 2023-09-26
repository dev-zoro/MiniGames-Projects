#include<iostream>
#include<time.h>
using namespace std;

int main(){

    srand(time(NULL));

    int num;
    int guess;
    int tries = 0;  

    num = (rand() % 100) + 1;

    cout<<"******** NUMBER GUSSING GAME ********" << endl;
    do{
        cout<<"Enter a number between (1-100): ";
        cin >> guess;
        tries++;

        if(guess > num){
            cout<<"Too HIGHT!"<<endl;
        }
        else if(guess < num){
            cout<<"Too Low!"<<endl;
        }
        else {
            cout<<"CORRECT! # no of tries: "<<tries<<endl;
        }
    }while(guess != num); 

    cout<<"*************************************" << endl;

}