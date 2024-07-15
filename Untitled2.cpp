#include <iostream>
using namespace std;

int main() {
    int numEggs;
    cout << "Enter the number of Eggs" << endl;
    cin >> numEggs;

    double eggWeight;
    int idealCount = 0, nonIdealCount = 0, faultyCount = 0;

    cout << "Enter the weight of the eggs(in grams)" << endl;
    for (int i = 0; i < numEggs; ++i) {
        cin >> eggWeight;

        if (eggWeight >= 50 && eggWeight <= 70) {
            idealCount++;
        } else if (eggWeight > 70) {
            nonIdealCount++;
        } else if (eggWeight < 50) {
            faultyCount++;
            if (faultyCount > 4) {
                cout << "The box contains more than four faulty eggs" << endl;
                return 0;
            }
        }
    }

    cout << "Count of eggs with ideal weight=" << idealCount << endl;
    cout << "Count of eggs with non-ideal weight=" << nonIdealCount << endl;
    cout << "Count of eggs with faulty weight=" << faultyCount << endl;

    return 0;
}

