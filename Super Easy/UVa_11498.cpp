#include <iostream>

using namespace std;

int main() {
    int test_cases, div_point_x, div_point_y;
    string result;
    while (scanf("%d", &test_cases) && test_cases) {
        scanf("%d %d", &div_point_x, &div_point_y);
        int x, y;
        for (int i = 0; i < test_cases; ++i) {
            scanf("%d %d", &x, &y);
            if (x == div_point_x || y == div_point_y) {
                result.append("divisa\n");
            } else if (x < div_point_x) {
                if (y < div_point_y) {
                    result.append("SO\n");
                } else if (y > div_point_y) {
                    result.append("NO\n");
                }
            } else { // x > div_point_x
                if (y < div_point_y) {
                    result.append("SE\n");
                } else if (y > div_point_y) {
                    result.append("NE\n");
                }
            }
        }


    }

    printf("%s", result.c_str());
}
