#include <iostream>
using namespace std;
class FoodItem {
    private :
        string name;
        int price[100][100] = { {280,160,300}, {240,160,360}, {240,160,100}, {140,160,110}, {160,220,360}};

        string food[100] = {"Pizza", "Burger", "Sandwich", "Rolls", "Biryani"};

        string items[100][100] = {
            {"Cheese Margreta", "Veg Sweetcorn paneer Pizza",  "super veg. loaded cheese pizza"},
            {"veg crispy burger", "Veg. Whoopper", "Crispy paneer patty"},
            {"Club Sandwich", "Veg. Crispy Sandwich", "Extream Veg Sandwich"},
            {"Paneer rolls", "spring rolls", "Veg rolls"},
            {"Veg briyani", "chicken briyani", "hydrabadi briyani"}
        };

        int x,y;
        double amount;
        double total;

    public:
        FoodItem(string name){
            this->total = 0;
            this->amount = 0;
            this-> name = name;
            cout<<"Hello "<<name;
            cout<<"\n\nwhat would you like to order?";
            showMenu();
        }

        void menu(){
            cout<<"\n\t\t--------Menu---------"<<endl;
            cout<<"1) Pizza"<<endl;
            cout<<"2) Burger"<<endl;
            cout<<"3) Sandwich"<<endl;
            cout<<"4) Rolls"<<endl;
            cout<<"5) Biryani"<<endl<<endl;
        }

        int choice(){
            int ch;
            cout<<"Enter your choice : ";
            cin>>ch;
            return ch;
        }

        void sub(){
            int ch = choice();
            int subch;
            this->x = ch;

            switch(ch){
                case 1:
                    cout<<"\n1  Cheese Margreta Rs.280";
                    cout<<"\n2  Veg Sweetcorn paneer Pizza Rs.160";
                    cout<<"\n3  super veg. loaded cheese pizza Rs.300"<<endl;
                    cout<<"\nPlease enter which "<<food[x-1] <<" you want to order ? "<<endl;
                    subch = choice(); 
                    this->y = subch;
                break;

                case 2:
                    cout<<"\n1  veg crispy burger Rs.240";
                    cout<<"\n2  Veg. Whoopper Rs.160";
                    cout<<"\n3  Crispy paneer patty Rs.360"<<endl;
                    cout<<"\nPlease enter which "<<food[x-1] <<" you want to order ? "<<endl;
                    subch = choice(); 
                    this->y = subch;
                break;

                case 3:
                    cout<<"\n1  Club Sandwich Rs.240";
                    cout<<"\n2  Veg. Crispy Sandwich Rs.160";
                    cout<<"\n3  Extream Veg Sandwich Rs.100"<<endl;
                    cout<<"\nPlease enter which "<<food[x-1] <<" you want to order ? "<<endl;
                    subch = choice(); 
                    this->y = subch;
                break;

                case 4:
                    cout<<"\n1  Paneer rolls Rs.140";
                    cout<<"\n2  spring rolls Rs.160";
                    cout<<"\n3  Veg rolls Rs.110"<<endl;
                    cout<<"\nPlease enter which "<<food[x-1] <<" you want to order ? "<<endl;
                    subch = choice(); 
                    this->y = subch;
                break;

                case 5:
                    cout<<"\n1  Veg briyani Rs.160";
                    cout<<"\n2  chicken briyani Rs.220";
                    cout<<"\n3  hydrabadi briyani Rs.360"<<endl;
                    cout<<"\nPlease enter which "<<food[x-1] <<" you want to order ? "<<endl;
                    subch = choice(); 
                    this->y = subch;
                break;
            }
            
        }

        void showMenu(){
            int qty;
            char option;
            
            do{
            option = 'y';
            amount = 0;
            menu();
            sub();
            cout<<"\nEnter quentity of food : ";
            cin>>qty;

            cout<<"\n\t\t--------Your Order---------\n";
            cout<<qty <<" " <<items[x-1][y-1];
            amount = price[x-1][y-1] * qty;
            total = total + amount;
            
            cout<<"\nYour ammount is : "<<amount;
            cout<<"\nYour Total bill is : "<<total;
            cout<<"\nYour order will be delivered in 40 minutes";
            cout<<"\nWould you like to order anything else? [y/n] : ";
            cin>>option;

            }while(option == 'y' || option == 'Y');

        }

};

int main(){

    string name;
    
    cout<<"\n--------------Welcome to Tops Tech. Fast Food-----------------\n";
    cout<<"please enter your name : ";
    cin>>name;
    FoodItem f1(name);
    cout<<"\n-----------------Thank you for visiting------------------------";


    return 0;
}