#include <iostream>

using namespace std;

int main() {
    int test_cases, num_of_durations, mile, juice;
    scanf("%d", &test_cases);
    for (int i = 0; i < test_cases; ++i) {
        mile = juice = 0;
        scanf("%d", &num_of_durations);
        printf("Case %d: ", i + 1);
        int duration;
        for (int j = 0; j < num_of_durations; ++j) {
            scanf("%d", &duration);
            mile += (duration / 30 + 1) * 10;
            juice += (duration / 60 + 1) * 15;
        }

        if (mile == juice) {
            printf("Mile Juice %d\n", mile);
        } else if (mile > juice) {
            printf("Juice %d\n", juice);
        } else {
            printf("Mile %d\n", mile);
        }
    }
}
