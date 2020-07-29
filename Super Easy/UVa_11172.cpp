#include <iostream>

using namespace std;

int main() {
    int test_cases, a, b;
    scanf("%d", &test_cases);
    char results[test_cases];
    for (int i = 0; i < test_cases; ++i) {
        scanf("%d %d", &a, &b);
        results[i] = a < b ? '<' : a == b ? '=' : '>';
    }

    for (int i = 0; i < test_cases; ++i) {
        printf("%c\n", results[i]);
    }
}
