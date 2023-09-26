#include<iostream>
using namespace std;

int main(){
    string questions[] = {"1. What year was C++ created?: ",
                          "2. Who invented C++?: ",
                          "3. In which lang Pubg is develope?: ",
                          "4. Is C++ used for Game developement?:"};

    string options[][4] ={{"A. 1969","B. 1985","C. 1975","D. 1989"},
                          {"A. Guido van Rossum","B. John Carter","C. Bjaren Stroustrup","D. Mark Zukurberg"},
                          {"A. Java","B. C#","C. JavaScript","D. C++"},
                          {"A. Yes","B. No","C. Sometimes","D. Who cares!"}};

    char answerKey[] = {'B','C','D','A'};
    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;
    cout<<"**********************"<<endl;
    cout<<"***** Quize Game *****"<<endl;

    for(int i=0; i<size; i++){
        cout<<"**********************"<<endl;
        cout<< questions[i]<<endl;
        cout<<"**********************"<<endl;

        for(int j=0; j<sizeof(options[i])/sizeof(options[i][0]); j++){
            cout<<options[i][j]<<endl;
        }

        cout<<"Enter answer: ";
        cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            cout<<"CORRECT!"<<endl;
            score++;
        }
        else {
            cout<<"WRONG!"<<endl;
            cout<<"The Answer is: "<<answerKey[i]<<endl;
        }
    }

    cout<<"**********************"<<endl;
    cout<<"***     RESULT     ***"<<endl;
    cout<<"**********************"<<endl;
    cout<<"CORRECT GUESSES: " << score << endl;
    cout<<"# no of Questions: "<< size << endl;
    cout<<"SCORE: "<< (score/(double)size)*100 << endl;
    cout<<"**********************"<<endl;

}