#include <iostream>

using namespace std;


int main() {
    int l;
    string way;
    while (scanf("%d", &l) && l) {
        cin >> way;
        int r_index, d_index, min_dist;
        r_index = d_index = -1;
        min_dist = INT_MAX;
        for (int i = 0; i < way.size(); ++i) {
            if (way[i] == 'Z') {
                min_dist = 0;
                break;
            } else if (way[i] == 'R') {
                r_index = i;
                if (d_index != -1) {
                    min_dist = min(min_dist, abs(r_index - d_index));
                }
            } else if (way[i] == 'D') {
                d_index = i;
                if (r_index != -1) {
                    min_dist = min(min_dist, abs(r_index - d_index));
                }
            }
        }

        printf("%d\n", min_dist);

    }
}

