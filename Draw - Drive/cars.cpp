#include "cars.h"

//madisont, adilf, armaanm - prog71020, lab 04 - BMW and Mazda objects implementation

//REQUIREMENTS
/*Design, implement and test a BMW and Mazda classes:
a. They can be drawn using the global draw function.
b. They can be driven using the global drive function.*/

using namespace std;

// drawing bmw

void BMW::draw() {
    cout << "     **BMW**\n";
    cout << "        _______\n";
    cout << " BMW   //  ||\\ \\\n";
    cout << " _|___//___||_\\ \\___\n";
    cout << ")  _          _    \\\n";
    cout << "|_/ \\________/ \\___|\n";
    cout << "__\\_/________\\_/______\n";
}

void BMW::drive() {
    cout << "Driving a BMW.\n";
}

// drawing mazda 
void MAZDA::draw() {
    cout << "     **Mazda**\n";
    cout << "    ___                MAZDA" << endl;
    cout << "      _-_-  _/\\______\\\\_|_" << endl;
    cout << "   _-_-__  / ,-. -|-  ,-.`-." << endl;
    cout << "      _-_- `( o )----( o )-'" << endl;
    cout << "             `-'      `-'" << endl;
}

void MAZDA::drive() {
    cout << "Driving a Mazda.\n";
}