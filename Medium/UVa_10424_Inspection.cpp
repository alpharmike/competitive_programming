#include <iostream>

using namespace std;

int get_numeric_value(char *input) {
    int result = 0;
    for (int i = 0; input[i] != '\0'; ++i) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            result += (input[i] - 'a' + 1);
        } else if (input[i] >= 'A' && input[i] <= 'Z') {
            result += (input[i] - 'A' + 1);
        }
    }


    return result;
}

int sum_digits(int num) {
    int result = 0;
    while (num) {
        result += (num % 10);
        num /= 10;
        if (!num && result > 9) {
            num = result;
            result = 0;
        }
    }

    return result;
}

int main() {
    char name1[26], name2[26];
    while (scanf("%s", name1) != EOF && scanf("%s", name2)  != EOF) {
        int val1 = get_numeric_value(name1);
        int val2 = get_numeric_value(name2);
        int sum_val1 = sum_digits(val1);
        int sum_val2 = sum_digits(val2);
        double perc = (double ) min(sum_val1, sum_val2) / (double ) max(sum_val1, sum_val2) * 100.0;
        printf("%.2lf %\n", perc);
    }
}
