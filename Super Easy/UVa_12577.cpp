#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int i = 0;
    char input[20];
    while (scanf("%s", input) && strcmp(input, "*")) {
        printf("Case %d: ", i + 1);
        if (!strcmp(input, "Hajj")) {
            cout << "Hajj-e-Akbar" << endl;
        } else {
            cout << "Hajj-e-Asghar" << endl;
        }
        ++i;
    }
}
