#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int test_cases, amount, total;
    char operation[10];
    total = 0;
    scanf("%d", &test_cases);
    for (int i = 0; i < test_cases; ++i) {
        scanf("%s %d", operation, &amount);
        if (!strcmp(operation, "donate")) {
            total += amount;
        } else {
            cout << total << endl;
        }
    }
}
