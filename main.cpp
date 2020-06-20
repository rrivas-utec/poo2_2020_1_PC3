#include <iostream>
#include <exception>
#include "P1.h"
#include "P2.h"
#include "P3.h"
#include "P4.h"

using namespace std;

int main() {
    try {
        P1();
        cout << "P1 passed" << endl;
        P2();
        cout << "P2 passed" << endl;
        P3();
        cout << "P3 passed" << endl;
        P4();
        cout << "P4 passed" << endl;

    }
    catch (const runtime_error& error) {
        cout << "ERROR: " << error.what();
    }
    return 0;
}
