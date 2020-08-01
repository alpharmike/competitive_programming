#include <iostream>

using namespace std;

int main() {
    int test_cases, pointer;
    string commands;
    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; ++i) {
        printf("Case %d: ", i + 1);
        cin >> commands;
        int memory[100] = {0};
        pointer = 0;
        for (int j = 0; j < commands.size(); ++j) {
            if (commands[j] == '>') {
                pointer = (pointer + 1) % 100;
            } else if (commands[j] == '<') {
                pointer = pointer == 0 ? 99 : pointer - 1;
            } else if (commands[j] == '+') {
                memory[pointer] = (memory[pointer] + 1) % 256;
            } else if (commands[j] == '-') {
                memory[pointer] = !memory[pointer] ? 255 : memory[pointer] - 1;
            }
        }

        for (int j = 0; j < 100; ++j) {
            printf("%02X ", memory[j]);
        }

        printf("\n");
    }

}

