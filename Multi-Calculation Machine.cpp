#include <iostream>
#include <math.h>

using namespace std;

const double pi = 3.1415;

class conversions {
    
public:
    double kilometers = 0;
    double miles = 0;
    double radius = 0;
    double height = 0;
    double width = 0;
    double volume = 0;
    double surface = 0;
    double kelvin = 0;
    double fahrenheit = 0;
    double area = 0;
    double circumference = 0;
    double sideLength = 0;


    
    conversions() {
        kilometers = 0;
        miles = 0;
        radius = 0;
        height = 0;
        width = 0;
        volume = 0;
        surface = 0;
        kelvin = 0;
        fahrenheit = 0;
        area = 0;
        circumference = 0;
        sideLength = 0;
    }
    
    double kiltoMILES() {
        miles = kilometers * 0.62137119;
        return miles;
    }
    
    double MILEStokill () {
        kilometers = miles * 1.609344;
        return kilometers;
    }
    
    double cylinderVOLUME() {
        volume = pi * pow(radius, 2) * height;
        return volume;
    }
    
    double cylinderSURFACE () {
        surface = ((2*pi) * radius * height) + ((2*pi) * pow(radius, 2));
        return surface;
    }
    
    double KELVINtoFAHRENHEIT() {
        fahrenheit = (kelvin * (9.0/5.0)) + 32;
        return fahrenheit;
    }
    
    double FAHRENHEITtoKELVIN() {
        kelvin = (fahrenheit - 32) * (5.0/9.0);
        return kelvin;
    }
    
    double circleArea() {
        area = pi * pow(radius, 2);
        return area;
    }
    
    double circleCircumference() {
        circumference = 2 * pi * radius;
        return circumference;
    }
    
    double volumeSphere() {
        volume = (4.0/3.0) * pi * pow(radius, 3);
        return volume;
    }
    
    double volumeCone() {
        volume = (1.0/3.0) * height * pi * pow(radius, 2);
        return volume;
    }
    
    double areaEquilateralTriangle() {
        area = ((sqrt(3.0)) / 4/0) * sideLength;
        return area;
    }
};


void askForChoice() {
    int choice = 0;
    double result = 0;
    conversions guest;
    
    cout << "Welcome to our Calculation Machine!\nHere you can find the area, volume or even calculate from one temperature to another!\n\nPlease choose your desired selection: ";
    
    cout << "\nTo convert Kilometers to Miles please PRESS 1\nTo convert Miles to Kilometers please PRESS 2\nTo convert Kelvin/Celsius to Fahrenheit please PRESS 3\nTo convert Fahrenheit to Kelving/Celsius please PRESS 4\nTo calculate a Cylinder's Volume please PRESS 5\nTo calculate a Cylinder's Surface please PRESS 6\nTo calculate the Area of a Circle please PRESS 7\nTo calculate the Circumference of a Circle please PRESS 8\nTo calculate the Volume of a Sphere please PRESS 9\nTo calculate the Volume of a Cone please PRESS 10\nTp calculate the Area of a Equilateral Triangle please PRESS 11\n\nTYPE IN YOUR CHOICE😁 : ";
    cin >> choice;
    
    if (choice == 1) {
        cout << "Type in the amount of Kilometers that you would like me to Convert: ";
        cin >> guest.kilometers;
        
        result = guest.kiltoMILES();
        
        cout << "The Kilometers given were converted to " << result << " Miles!";
        
    } else if (choice == 2) {
        cout << "Type in the amount of Miles that you would like to me to convert to Kilometers: ";
        cin >> guest.miles;
        
        result = guest.MILEStokill();
        
        cout << "The Miles given were converted to " << result << " Kilometers!";
        
    } else if (choice == 4) {
        cout << "Type in the amount of Fahrenheit degrees that you would like me to convert to Celsius/Kelvin: ";
        cin >> guest.fahrenheit;
        
        result = guest.FAHRENHEITtoKELVIN();
        
        cout << "The Fahrenheit degrees given were converted to " << result << " Kelvin/Celsius degrees!";
        
    } else if (choice == 3) {
        cout << "Type in the amount of Kelvin/Celsius degrees that you would like me to convert to Fahrenheit: ";
        cin >> guest.kelvin;
        
        result = guest.KELVINtoFAHRENHEIT();
        
        cout << "The Kelvin/Celsius degrees given were converted to " << result << " Fahrenheit degrees!";
        
    } else if (choice == 5) {
        cout << "Type in the Radius of the Cylinder: ";
        cin >> guest.radius;
        
        cout << "Type in the Height of the Cylinder: ";
        cin >> guest.height;
        
        result = guest.cylinderVOLUME();
        
        cout << "The Volume of the Cylinder is: " << result << "!";
        
    } else if (choice == 6) {
        cout << "Type in the Radius of the Cylinder: ";
        cin >> guest.radius;
        
        cout << "Type in the Height of the Cylinder: ";
        cin >> guest.height;
        
        result = guest.cylinderSURFACE();
        
        cout << "The Surface of the Cylinder is: " << result << "!";
        
    } else if (choice == 7) {
        cout << "Type in the Area of the Circle: ";
        cin >> guest.radius;
        
        result = guest.circleArea();
        
        cout << "The Area of the Circle is: " << result << "!";
        
    }else if (choice == 8) {
        cout << "Type in the Area of the Circle: ";
        cin >> guest.radius;
        
        result = guest.circleCircumference();
        
        cout << "The Circumference of the Circle is: " << result << "!";
        
    }else if (choice == 9) {
        cout << "Type in the Radius of the Sphere: ";
        cin >> guest.radius;
        
        result = guest.volumeSphere();
        
        cout << "The Volume of the Sphere is: " << result << "!";
        
    }else if (choice == 10) {
        cout << "Type in the Radius of the Cone: ";
        cin >> guest.radius;
        
        cout << "Type in the Height of the Cone: ";
        cin >> guest.radius;
        
        result = guest.volumeCone();
        
        cout << "The Volume of the Cone is: " << result << "!";
        
    } else if (choice == 11) {
        cout << "Type in the Side Length of the Equilateral Triangle: ";
        cin >> guest.sideLength;
        
        result = guest.areaEquilateralTriangle();
        
        cout << "The Area of the Equilateral Triangle is: " << result << "!";
        
    } else {
        cout << "Invalid Choice! Re-Run the program.";
    }
    
    cout << "\n";
}



int main() {
    
    askForChoice();
}
