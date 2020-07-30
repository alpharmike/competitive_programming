#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int participants, budget, hotels, weeks, price, beds, total;
    while (scanf("%d %d %d %d", &participants, &budget, &hotels, &weeks) != EOF) {
        total = INT_MAX;
        for (int i = 0; i < hotels; ++i) {
            scanf("%d", &price);
            for (int j = 0; j < weeks; ++j) {
                scanf("%d ", &beds);
                if (beds >= participants && participants * price < total) {
                    total = participants * price;
                }
            }
        }
        if (total != INT_MAX && total <= budget) {
            printf("%d\n", total);
        } else {
            printf("stay home\n");
        }
    }
}
