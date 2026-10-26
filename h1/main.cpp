#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

void calcSum(int a, int b)
{
    cout << "Summa: " << a + b << endl;
}

void calcDiv(int a, int b)
{
    if (b == 0) {
        cout << "Virhe: jakaja ei saa olla nolla!" << endl;
    } else {
        cout << "Osamaara: " << fixed << setprecision(2)
             << static_cast<float>(a) / b << endl;
    }
}

int retSum(int a, int b)
{
    return a + b;
}

float retDiv(int a, int b)
{
    if (b == 0) {
        throw runtime_error("jakaja ei saa olla nolla!");
    }
    return static_cast<float>(a) / b;
}

int main()
{
    int a, b;

    cout << "Anna ensimmainen kokonaisluku (a): ";
    if (!(cin >> a)) {
        cout << "Virheellinen kokonaisluku!" << endl;
        return 1;
    }

    cout << "Anna toinen kokonaisluku (b): ";
    if (!(cin >> b)) {
        cout << "Virheellinen kokonaisluku!" << endl;
        return 1;
    }

    // Funktiot, jotka tulostavat tuloksen itse.
    calcSum(a, b);
    calcDiv(a, b);

    // Funktiot, jotka palauttavat tuloksen main-funktiolle.
    cout << "retSum: " << retSum(a, b) << endl;

    try {
        float result = retDiv(a, b);
        cout << "retDiv: " << a << "/" << b << " = "
             << fixed << setprecision(2) << result << endl;
    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
