#include <iostream>

using namespace std;

int compare(const void* a, const void* b)
{
    const int* x = (int*) a;
    const int* y = (int*) b;

    if (*x > *y)
        return 1;
    else if (*x < *y)
        return -1;

    return 0;
}

int compute_dist(int arr[], int n) {
    int res = 0;
    for (int i = 1; i < n; ++i) {
        res += (arr[i] - arr[i - 1]);
    }

    return res;
}

int main() {
    int test_cases, case_count;
    scanf("%d", &test_cases);
    int results[test_cases];
    for (int i = 0; i < test_cases; ++i) {
        scanf("%d", &case_count);
        int case_numbers[case_count];
        for (int j = 0; j < case_count; ++j) {
            scanf("%d", &case_numbers[j]);
        }

        qsort(case_numbers, case_count, sizeof(int), compare);
        results[i] = compute_dist(case_numbers, case_count) * 2;
    }

    for (int i = 0; i < test_cases; ++i) {
        printf("%d\n", results[i]);
    }
}
