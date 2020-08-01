#include <iostream>

using namespace std;


int main() {
    string num;
    cin >> num;
    while (num != "END") {
        int prev_len, curr_len;
        prev_len = -1;
        curr_len = num.size();
        int i = 1;
        if (num != "1") {
            while (prev_len != curr_len) {
                prev_len = curr_len;
                curr_len = to_string(curr_len).size();
                ++i;
            }
        }

        printf("%d\n", i);
        cin >> num;
    }
}

