#include <iostream>

using namespace std;

int main() {
    int test_cases;
    string number;
    scanf("%d", &test_cases);
    for (int i = 0; i < test_cases; ++i) {
        cin >> number;
        if (number.length() == 5) {
            cout << 3 << endl;
        } else if ((number[0] == 'o' && number[1] == 'n') || (number[0] == 'o' && number[2] == 'e') ||
                   (number[1] == 'n' && number[2] == 'e')) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
}
