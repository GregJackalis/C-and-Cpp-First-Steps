#include <iostream>
using namespace std;

class ATM {
    
public:
    double balance = 0;
    int deposit = 0;
    int withdraw = 0;
    char choice = 0;
    
    double transaction () {
        cout << "\n\nFOR WITHDRAW PLEASE PRESS \"W\" \nFOR DEPOSIT PLEASE PRESS \"D\" \nTO SEE YOUR ACCOUNT'S BALANCE PLEASE PRESS \"C\" \n: ";
        cin >> choice;
        
        if ((choice == 'w') || (choice == 'W')) {
            cout << "\nTYPE IN THE AMOUNT OF MONEY YOU WOULD LIKE TO WITHDRAW: ";
            cin >> withdraw;
            
            balance = balance - withdraw;
            
            cout << "TRANSACTION COMPLETE";
            
            return balance;
            
        } else if ((choice == 'd') || (choice == 'D')) {
            cout << "\nTYPE IN THE AMOUNT OF MONEY YOU WOULD LIKE TO DEPOSIT: ";
            cin >> deposit;
            
            balance = balance + deposit;
            
            cout << "TRANSACTION COMPLETE\n\n";
            
            return balance;
            
        } else if ((choice == 'c') || (choice == 'C')) {
            cout << "\nYOUR ACCOUNT'S BALANCE IS: " << balance;
            return balance;
            
        } else {
            cout << "INVALID CHOICE RE-RUN THE PROGAM";
            exit(0);
        }
    }
    
    double printMESSAGE() {
        cout << "Welcome to our ATM:\nPLEASE TYPE IN YOUR BALANCE: ";
        cin >> balance;
        return balance;
    }
    
    char repeat() {
        char choice1;
        cout << "\n\nWould you like to complete another Transaction?\nPress \"Y\" for Yes and \"N\" for No \n: ";
        cin >> choice1;
        
        return choice1;
        
    }
};
    
    
    int main () {
        
        ATM guest;
        char choice1;
        
        guest.printMESSAGE();
        
        do {
            guest.transaction();
            choice1 = guest.repeat();
            
        }while ((choice1 == 'y' || choice1 == 'Y'));
                
        cout << "\nTHANK YOU FOR USING OUR SERVICES\n";
        exit (0);
        
    }
