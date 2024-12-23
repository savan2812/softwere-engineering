/*Write a C++ program that calculates the factorial of a number using recursion.
*/
#include <iostream>
using namespace std;

int fact(int num){
    if(num == 0){
        return 1;
    } else {
        return num * fact(num -1);
    }
}


int main(){
    int num;
    cout<<"\nEnter the number to find its factorial : ";
    cin>>num;

    cout<<"Factorial of "<<num <<" is : "<<fact(num);
    return 0;
}
