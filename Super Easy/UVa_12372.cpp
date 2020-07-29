#include <iostream>

using namespace std;

int main() {
    int test_cases, l, w, h;
    scanf("%d", &test_cases);
    for (int i = 0; i < test_cases; ++i) {
        cin >> l >> w >> h;
        printf("Case %d: ", i + 1);
        if (l <= 20 && w <= 20 && h <= 20) {
            cout << "good" << endl;
        } else {
            cout << "bad" << endl;
        }
    }
}
