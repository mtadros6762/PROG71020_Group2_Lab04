#include "cars.h"

//madisont, adilf, armaanm - prog71020, lab 04 - BMW and Mazda objects implementation

//REQUIREMENTS
/*Design, implement and test a BMW and Mazda classes:
a. They can be drawn using the global draw function.
b. They can be driven using the global drive function.*/

using namespace std;

void BMW::draw() {
    cout << "     **BMW**\n";
    cout << "      *****       \n";
    cout << "   **       **    \n";
    cout << "  *           *   \n";
    cout << " *    B M W    *  \n";
    cout << " *             *  \n";
    cout << "  *           *   \n";
    cout << "   **       **    \n";
    cout << "      *****       \n";
}

void BMW::drive() {
    cout << "Driving a BMW.\n";
}

void MAZDA::draw() {
    cout << "     **Mazda**\n";
    cout << "       ****     \n";
    cout << "   **        **   \n";
    cout << " **            ** \n";
    cout << "*   ***    ***   *\n";
    cout << "*     **  **     *\n";
    cout << "*       **       *\n";
    cout << " **            ** \n";
    cout << "   **        **   \n";
    cout << "     *******    \n";
}

void MAZDA::drive() {
    cout << "Driving a Mazda.\n";
}