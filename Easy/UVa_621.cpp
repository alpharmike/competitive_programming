#include <iostream>

using namespace std;

int main() {
    int test_cases;
    string encrypted_value;
    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; ++i) {
        cin >> encrypted_value;
        if (encrypted_value == "4" || encrypted_value == "1" || encrypted_value == "78") {
            printf("+\n");
        } else if (encrypted_value.substr(encrypted_value.length() - 2, 2) == "35") {
            printf("-\n");
        } else if (encrypted_value[0] == '9' && encrypted_value[encrypted_value.length() - 1] == '4') {
            printf("*\n");
        } else if (encrypted_value.substr(0, 3) == "190") {
            printf("?\n");
        }
    }

}
