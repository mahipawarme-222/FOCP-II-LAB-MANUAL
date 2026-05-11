#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    float discriminant, root1, root2;

    cout << "Enter values of a, b and c: ";
    cin >> a >> b >> c;

    discriminant = (b * b) - (4 * a * c);

    if(discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "Two Real and Different Roots" << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2;
    }

    else if(discriminant == 0) {
        root1 = -b / (2 * a);

        cout << "Two Real and Equal Roots" << endl;
        cout << "Root = " << root1;
    }

    else {
        cout << "Imaginary Roots";
    }

    return 0;
}