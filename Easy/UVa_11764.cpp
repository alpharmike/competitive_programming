#include <iostream>

using namespace std;

int main() {
    int test_cases, walls;
    scanf("%d", &test_cases);
    for (int i = 0; i < test_cases; ++i) {
        int low_jumps, high_jumps;
        low_jumps = high_jumps = 0;

        scanf("%d", &walls);
        int curr_wall_height, prev_wall_height;
        printf("Case %d: ", i + 1);
        for (int j = 0; j < walls; ++j) {
            scanf("%d", &curr_wall_height);
            if (j == 0) {
                prev_wall_height = curr_wall_height;
                continue;
            }
            if (curr_wall_height < prev_wall_height) {
                ++low_jumps;
            } else if (curr_wall_height > prev_wall_height) {
                ++high_jumps;
            }
            prev_wall_height = curr_wall_height;
        }

        printf("%d %d\n", high_jumps, low_jumps);
    }
}
