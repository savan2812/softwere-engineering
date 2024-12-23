/*Write a C++ program that asks the user to guess a number between 1 and 100. The
program should provide hints if the guess is too high or too low. Use loops to allow
the user multiple attempts*/ 

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){

    int num,attempt=0;
    int preAttempts[10];
    
    srand(time(0));

    int rndNum = (rand()%100)+1;

    cout<<endl<<rndNum;
    
    
    cout<<"\nWelcome to number guessing game";

    while(attempt < 10){

        cout<<"\nyou have left "<< 10 - attempt <<" attempts out of 10";

        cout<<"\nEnter your guess:-"<<endl;
        cin>>num;
        
        if(num<rndNum){
            cout<<"\nYour guess is too low :- ";
        } else if(num>rndNum){
            cout<<"\nYour guess is too high :- ";
        } else {
            cout<<"\nYour guess is correct : "<<num;
            break;
        }

        preAttempts[attempt] = num;
        attempt++;

        cout<<"previous attempts : ";
        for(int i=0; i<attempt; i++){
            cout<<preAttempts[i] <<", ";
        }
        
        if(attempt == 10 && preAttempts[attempt-1] != rndNum ){
            cout<<"\nyou left 0 attempts you can't play further";
        }

    }

    cout<<"\n!!!!!Thanks For Playing!!!!!";
    
    return 0;
}
