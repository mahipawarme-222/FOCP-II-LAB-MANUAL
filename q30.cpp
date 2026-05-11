// Q30. Total and Average Salary of 10 Employees
#include <iostream>
using namespace std;
int main() {
    float salary[10], total = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Enter salary of employee " << i+1 << ": ";
        cin >> salary[i];
        total += salary[i];
    }
    cout << "Total Salary: " << total << endl;
    cout << "Average Salary: " << total / 10 << endl;
    return 0;
}