#include <iostream>

using namespace std;

int main() {
    int test_cases, size, num_of_animals, env_friendliness, case_count, sum;
    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; ++i) {
        sum = 0;
        scanf("%d", &case_count);
        for (int j = 0; j < case_count; ++j) {
            scanf("%d %d %d", &size, &num_of_animals, &env_friendliness);
            sum += size * env_friendliness;
        }

        printf("%d\n", sum);
    }


}
