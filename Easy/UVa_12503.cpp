#include <iostream>

using namespace std;

int main() {
    int test_cases, moves, result;
    string move;
    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; ++i) {
        scanf("%d", &moves);
        string instructions[moves];
        result = 0;
        for (int j = 0; j < moves; ++j) {
            cin >> move;
            if (move == "LEFT") {
                instructions[j] = "LEFT";
                --result;
            } else if (move == "RIGHT") {
                instructions[j] = "RIGHT";
                ++result;
            } else {
                cin >> move;
                cin >> move;
                char inst = move[0];
                instructions[j] = instructions[inst - '0' - 1];
                if (instructions[j] == "LEFT") {
                    --result;
                } else {
                    ++result;
                }
            }
        }
        printf("%d\n", result);
    }
}
