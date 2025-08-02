#include <iostream>

using namespace std;



int main() {

    system ("cls");

    // Ternary initialization
    bool fast = false;
    int speed = fast ? 300 : 90;
    int velocity(fast ? 9 : 3);     // int velocity = fast ? 9 : 3;

    cout << "The speed is:    " << speed << endl;
    cout << "The velocity is: " << velocity << endl;
    
}