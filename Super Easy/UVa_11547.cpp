#include <iostream>

using namespace std;

int main() {
    int test_cases, value, res;
    scanf("%d", &test_cases);
    int results[test_cases];

    for (int i = 0; i < test_cases; ++i) {
        scanf("%d", &value);
        res = (value * 567 / 9 + 7492) * 235 / 47 - 498;
        results[i] = (abs(res) / 10) % 10;
    }

    for (int i = 0; i < test_cases; ++i) {
        printf("%d\n", results[i]);
    }

}
