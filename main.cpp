#include <iostream>
#include <string.h>

using namespace std;

class car {
    
public:
    int hp;
    int cc;
    string model;
    string brand;
    string colour;
    double price;
    double speed;
    
    void accelarate() {
        speed = speed + 20;
    }
    
    void discount () {
        price = price - 500;
    }
    
    void readHP(int counter) {
        if (counter > 1) {
            cout << "\n\n";
        }
        cout << "Type in the hp of car No." << counter << ": ";
        cin >> hp;
    }
    
    void readCC(int counter) {
        cout << "Type in the cc of car No." << counter << ": ";
        cin >> cc;
    }
    
    void readBRAND(int counter) {
        cout << "Type in the brand of car No." << counter << ": ";
        scanf(" ");
        getline(cin, brand);
    }
    
    void readMODEL(int counter) {
        cout << "Type in the model of car No." << counter << ": ";
        getline(cin, model);
    }
    
    void readCOLOUR(int counter) {
        cout << "Type in the colour of car No." << counter << ": ";
        getline(cin, colour);
    }
    
    void readPRICE(int counter) {
        cout << "Type in the price of car No." << counter << ": ";
        cin >> price;
    }
    
    void readSPEED(int counter) {
        cout << "Type in the speed of car No." << counter << ": ";
        cin >> speed;
    }
    
    void printMESSAGE() {
        cout << "\n\nThe car given is:\n---------------\nBrand: " << brand << "\nModel: " << model << "\nColour: " << colour << "\nPrice: " << price << "\nSpeed: " << speed << "\n";
    }
};


void printingCarMessages(car carlist[20], int counter) {
    cout << "\n\nTHE CARS GIVEN ARE:\n--------------";
    for (int i = 0; i < counter; i++) {
        cout << "\n\nFOR CAR " << (i+1) << ":";
        cout << "\nBrand: " << carlist[i].brand << "\nModel: " << carlist[i].model << "\nColour: " << carlist[i].colour << "\nPrice: " << carlist[i].price << "\nSpeed: " << carlist[i].speed << "\n";
    }
}

int main() {
    
    car carlist[20];
    int counter = 0;
    char choice;
    
    for (int i = 0; i < 20; i++) {
        counter++;
        carlist[i].readHP(counter);
        carlist[i].readCC(counter);
        carlist[i].readBRAND(counter);
        carlist[i].readMODEL(counter);
        carlist[i].readCOLOUR(counter);
        carlist[i].readPRICE(counter);
        carlist[i].readSPEED(counter);
        
        carlist[i].discount();
        carlist[i].accelarate();
        
        cout << "Do you want to make another car? If yes type \"Y\" (Upper Limit for cars that can be made is 20 cars)";
        cin >> choice;
        
        if (choice != 'y' && choice != 'Y' ) {
            goto jump;
        }
    }
    
    jump:
    printingCarMessages(carlist, counter);
}
