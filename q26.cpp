#include <iostream>
using namespace std;

int main() {
    int marks, total = 0;
    float percentage;

    cout << "Enter marks of 5 subjects:\n";

    for (int i = 1; i <= 5; i++) {
        cout << "Subject " << i << ": ";
        cin >> marks;
        total += marks;
    }

    percentage = total / 5.0;

    cout << "\nTotal Marks = " << total;
    cout << "\nPercentage = " << percentage << "%";

    return 0;
}