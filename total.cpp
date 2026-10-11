#include <iostream>
using namespace std;

int main () {
    float m1, m2, m3,m4,m5;
    cout << "Enter marks of five subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    float total = m1 + m2 + m3 + m4 + m5;
    float average = total / 5;
    float percentage = (total / 500) * 100;

    cout << "Total =" << total << endl;
    cout << "Average =" << average << endl;
    cout << "Percentage =" << percentage << "%" << endl;

    return 0;
}