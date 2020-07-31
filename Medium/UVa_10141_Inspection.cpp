#include <iostream>

using namespace std;

int main() {
    int n, p, counter;
    char proposal[100];
    counter = 0;
    char requirement[100];

    while (scanf("%d %d", &n, &p) && n && p) {
        printf("RFP #%d\n", counter + 1);

        for (int i = 0; i < n; ++i) {
            scanf("%s", requirement);
        }

        float max_comp = 0.0;
        string accepted_prop;
        float price;
        int req_met;
        char proposal_item[100];

        for (int i = 0; i < p; ++i) {
            scanf("%s", proposal);
            scanf("%f %d", &price, &req_met);
            for (int j = 0; j < req_met; ++j) {
                scanf("%s", proposal_item);
            }

            float compliance = req_met / n;
            if (compliance > max_comp) {
                max_comp = compliance;
                accepted_prop = proposal;
            }
        }

        printf("%s\n", accepted_prop.c_str());
        ++counter;
    }
}
