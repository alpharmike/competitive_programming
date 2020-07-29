//#include <iostream>
//
//using namespace std;
//
//int main() {
//    char c;
//    bool open = true;
//
//    while ((c = getchar()) != EOF) {
//        if (c == '"' && open) {
//            printf("``");
//            open = false;
//        } else if (c == '"') {
//            printf("''");
//            open = true;
//        } else {
//            printf("%c", c);
//        }
//    }
//
//    return 0;
//}
