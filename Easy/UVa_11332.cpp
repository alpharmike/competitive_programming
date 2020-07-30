#include <iostream>

using namespace std;

int main() {
    int number, sum;
    while (scanf("%d", &number) && number) {
        sum = 0;
        while (number) {
            sum += (number % 10);
            number /= 10;
            if (!number && sum > 9) {
                number = sum;
                sum = 0;
            }
        }

        printf("%d\n", sum);
    }
}
