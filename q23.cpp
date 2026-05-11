
#include <iostream>
using namespace std;
int main() {
    int n = 5;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) cout << "*";
        for (int sp = 0; sp < 2*(n-i); sp++) cout << " ";
        for (int j = 0; j < i; j++) cout << "*";
        cout << endl;
    }
  
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < i; j++) cout << "*";
        for (int sp = 0; sp < 2*(n-i); sp++) cout << " ";
        for (int j = 0; j < i; j++) cout << "*";
        cout << endl;
    }
    return 0;
}