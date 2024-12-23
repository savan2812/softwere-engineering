/*Write a C++ program to check if a given string is a palindrome (reads the same
forwards and backwards).
*/
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string str,str2;
    char temp;

    cout<<"\nEnter any string to chek if it is palindrome or not :"<<endl;
    cout<<"Enter string : ";
    getline(cin, str);
    
    int len = str.length();

    str2 = str;
    
    for(int i=0; i<len/2; i++){
        temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }

    
    cout<<"\nstring is         : "<<str2;
    cout<<"\nReverse string is : "<<str;


    if(str==str2){
        cout<<str2 <<" : is palindrome string ";
    }else {
        cout<<str2 <<" : is not palindrome string ";
    }

        
    return 0;
}
