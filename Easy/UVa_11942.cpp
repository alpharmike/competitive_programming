#include <iostream>

using namespace std;

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    printf("Lumberjacks:\n");
    for (int i = 0; i < test_cases; ++i) {
        bool ordered_long_to_short, ordered_short_to_long;
        ordered_long_to_short = ordered_short_to_long = true;
        int curr_beard_len, prev_beard_len;
        for (int j = 0; j < 10; ++j) {
            scanf("%d", &curr_beard_len);
            if (j == 0) {
                prev_beard_len = curr_beard_len;
                continue;
            } else if (prev_beard_len < curr_beard_len) {
                ordered_long_to_short = false;
            } else if (prev_beard_len > curr_beard_len) {
                ordered_short_to_long = false;
            }

            prev_beard_len = curr_beard_len;
        }

        if (ordered_long_to_short || ordered_short_to_long) {
            printf("Ordered\n");
        } else {
            printf("Unordered\n");
        }
    }
}
