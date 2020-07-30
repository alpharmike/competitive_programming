#include <iostream>

using namespace std;

int main() {
    int num_of_banks, num_of_debentures, debtor, creditor, value, banks[20];

    while (scanf("%d %d", &num_of_banks, &num_of_debentures) && num_of_banks && num_of_debentures) {
        for (int i = 0; i < num_of_banks; ++i) {
            scanf("%d", &banks[i]);
        }

        for (int i = 0; i < num_of_debentures; ++i) {
            scanf("%d %d %d", &debtor, &creditor, &value);
            banks[debtor - 1] -= value;
            banks[creditor - 1] += value;
        }

        bool bailout = false;
        for (int i = 0; i < num_of_banks; ++i) {
            if (banks[i] < 0) {
                bailout = true;
                break;
            }
        }

        printf(bailout ? "N\n" : "S\n");
    }
}
