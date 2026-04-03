#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    // Ask user for their name
    cout << "Enter your name: ";
    getline(cin, name);

    // Output the result
    cout << "Your name is " << name << endl;

    return 0;
}