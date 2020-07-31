#include <iostream>

using namespace std;

int main() {
    int test_cases, students, speed, max_speed;
    scanf("%d", &test_cases);
    for (int i = 0; i < test_cases; ++i) {
        max_speed = 0;
        scanf("%d", &students);
        for (int j = 0; j < students; ++j) {
            scanf("%d", &speed);
            max_speed = max(speed, max_speed);
        }

        printf("Case %d: %d\n", i + 1, max_speed);
    }
}
