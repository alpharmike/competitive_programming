#include <iostream>

using namespace std;

int main() {
    char input[1000000];
    int queries, pos1, pos2, counter;
    counter = 0;
    while (scanf("%s", input) != EOF) {
        printf("Case %d:\n", counter + 1);
        scanf("%d", &queries);
        for (int i = 0; i < queries; ++i) {
            scanf("%d %d", &pos1, &pos2);
            bool same = true;
            for (int j = min(pos1, pos2) + 1; j <= max(pos1, pos2); ++j) {
                if (input[j - 1] != input[j]) {
                    same = false;
                    break;
                }
            }

            if (same) {
                printf("Yes\n");
            } else {
                printf("No\n");
            }
        }

        ++counter;
    }
}
