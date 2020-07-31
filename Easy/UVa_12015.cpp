#include <iostream>

using namespace std;

int main() {
    int test_cases, relevance;
    char url[101];
    scanf("%d", &test_cases);
    for (int i = 0; i < test_cases; ++i) {
        int max_rel = 0;
        string urls[10];
        int relevance_scores[10];
        printf("Case #%d:\n", i + 1);
        for (int j = 0; j < 10; ++j) {
            scanf("%s %d", url, &relevance);
            max_rel = max(relevance, max_rel);
            urls[j] = url;
            relevance_scores[j] = relevance;
        }
        for (int j = 0; j < 10; ++j) {
            if (relevance_scores[j] == max_rel) {
                printf("%s\n", urls[j].c_str());
            }
        }
    }
}
