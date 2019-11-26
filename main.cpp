#include <iostream>

#include "Computer.h"

using namespace std;

void displayProduct(const Product& product) {
    cout << product.model << endl;
}

int main()
{
    Computer myComputer;
    myComputer.model = "Pouet";
    displayProduct(myComputer);

    cout << "Hello world!" << endl;
    return 0;
}
