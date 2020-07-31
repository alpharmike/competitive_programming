#include <iostream>

using namespace std;

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) && a != -1 && b != -1) {
        printf("%d\n", min(abs(b - a), 100 - abs(b - a)));
    }
}
