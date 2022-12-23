#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

//struct for employees
struct employee {
    string name;
    string email;
    string address;
    double payments[5];
    double average= 0 ;
    double maximum = 0;
    double minimum = 100000000;
    int maxCounter = 0;
    int minCounter = 0;
};

//global variables
struct employee list[20];
int counter = 0;


//function for getting and storing info for each employee
void gettingInfo () {
    
    cout << "For how many Employees will you be putting info for: ";
    cin >> counter;
    
    
    for (int y = 0; y < counter; y ++) {
        double sum = 0;
        cout << "Name for Employee No." << (y+1) << ": ";
        getline(cin, list[y].name);
        
        cout << "Email for Employee No." << (y+1) << ": ";
        getline(cin, list[y].email);
        
        cout << "Address for Employee No." << (y+1) << ": ";
        getline(cin, list[y].address);
        
        for (int i = 0; i < 5; i++) {
            
            cout << "Type in the amount of Salary No." << (i+1) << ": ";
            cin >> list[y].payments[i];
            sum = sum + list[y].payments[i];
            
            if (list[y].payments[i] > list[y].maximum) {
                list[y].maximum = list[y].payments[i];
                list[y].maxCounter = i+1;
            }
            if (list[y].payments[i] < list[y].minimum) {
                list[y].minimum = list[y].payments[i];
                list[y].minCounter = i+1;
            }
        }
        list[y].average = sum / 5.0;
    }
}


//prints info for each employee and also prints out the average salary, as well as the highest and lowest salary for each employee
void printCustomer() {
    for (int y = 0; y < counter; y++) {
        
        cout << "\n\nCUSTOMER: " << (y+1);
        cout << "Customer's Name: " << list[y].name;
        cout << "Customer's Email: " << list[y].email;
        cout << "Customer's Address: " << list[y].address;
        
        for (int i = 0; i < 5; i++) {
            cout << "Salary No." << (i+1) << ": " << list[y].payments[i];
        }
        
        cout << "Average of Salaries: " << list[y].average;
        cout << "Maximum Salary: " << list[y].maximum << "\nNumber of Max Salary: " << list[y].maxCounter;
        cout << "Minimum Salary: " << list[y].minimum << "\nNumber of Min Saalary: " << list[y].minCounter;
    }
}

int main () {
    
    gettingInfo();
    printCustomer();
    
}
