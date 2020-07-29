#include <iostream>

using namespace std;

int main() {
    int test_cases, first, second, third, fs, ft, st;
    scanf("%d", &test_cases);
    int results[test_cases];
    for (int i = 0; i < test_cases; ++i) {
        scanf("%d %d %d", &first, &second, &third);
        fs = max(first, second);
        ft = max(first, third);
        st = max(second, third);
        results[i] = min(min(fs, ft), st);
    }

    for (int i = 0; i < test_cases; ++i) {
        printf("Case %d: %d\n", i + 1, results[i]);
    }

}
