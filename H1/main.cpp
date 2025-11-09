#include <iostream>
#include <stdexcept>
using namespace std;

//tulostavat funktiot
void calcSum(int a, int b) {
    cout << a << " + " << b << " = " << a + b << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe: jakaja ei saa olla nolla!" << endl;
    } else {
        cout << a << " / " << b << " = " << (float)a / b << endl;
    }
}

//palauttavat funktiot
int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        throw runtime_error("jakaja ei saa olla nolla!");
    }
    return (float)a / b;
}

//main funktio
int main() {
    int a, b;

    cout << "Anna kaksi kokonaislukua: ";
    cin >> a >> b;

    cout << "\n--- calc-funktiot (tulostavat) ---" << endl;
    calcSum(a, b);
    calcDiv(a, b);

    cout << "\n--- ret-funktiot (palauttavat) ---" << endl;
    int sumResult = retSum(a, b);
    cout << a << " + " << b << " = " << sumResult << endl;

    try {
        float divResult = retDiv(a, b);
        cout << a << " / " << b << " = " << divResult << endl;
    } catch (runtime_error &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
