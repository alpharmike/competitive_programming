#include <iostream>

using namespace std;

int main() {
    int n, m, c, total_usage, max_usage, counter;
    counter = 0;
    while (scanf("%d %d %d", &n, &m, &c) && n && m && c) {
        printf("Sequence %d\n", counter + 1);
        int power_usages[n];
        bool status[n];
        total_usage = max_usage = 0;
        bool blown = false;
        for (int i = 0; i < n; ++i) {
            scanf("%d", &power_usages[i]);
            status[i] = false;
        }

        int device;
        for (int i = 0; i < m; ++i) {
            scanf("%d", &device);
            if (!status[device - 1]) {
                total_usage += power_usages[device - 1];
            } else {
                total_usage -= power_usages[device - 1];
            }

            if (total_usage > c) {
                blown = true;
            }

            max_usage = max(total_usage, max_usage);
            status[device - 1] = !status[device - 1];
        }

        if (blown) {
            printf("Fuse was blown.\n");
        } else {
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n", max_usage);
        }

        printf("\n");
        ++counter;
    }
}
