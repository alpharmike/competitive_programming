#include <iostream>

using namespace std;

int main() {
    float h, u, d, f, total_climbed;
    int i;
    while (scanf("%f %f %f %f", &h, &u, &d, &f) && h != 0) {
        total_climbed = 0.0;
        i = 0;
        bool failed = true;
        float falling_factor = u * f / 100;
        while (total_climbed < h) {
            total_climbed += (u - i * falling_factor);
            if (total_climbed < 0) {
                break;
            } else if (total_climbed > h) {
                failed = false;
                break;
            }
            total_climbed -= d;
            if (total_climbed < 0) {
                break;
            }
            ++i;
        }
        if (failed) {
            printf("failure on day %d\n", i + 1);
        } else {
            printf("success on day %d\n", i + 1);
        }
    }
}
