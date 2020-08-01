#include <iostream>

using namespace std;

int num_of_taken_courses(string sel_courses[], string category_courses[], int s_size, int c_size) {
    int res = 0;
    for (int i = 0; i < s_size; ++i) {
        for (int j = 0; j < c_size; ++j) {
            if (sel_courses[i] == category_courses[j]) {
                ++res;
            }
        }
    }

    return res;
}


int main() {
    int selected_courses, categories;
    while (scanf("%d", &selected_courses) && selected_courses != 0 && scanf("%d", &categories)) {
        string selected_course_numbers[selected_courses];
        for (int i = 0; i < selected_courses; ++i) {
            cin >> selected_course_numbers[i];
        }

        bool degree_met = true;

        int category_courses, necessary;
        for (int i = 0; i < categories; ++i) {
            scanf("%d %d", &category_courses, &necessary);
            string category_course_numbers[category_courses];
            for (int j = 0; j < category_courses; ++j) {
                cin >> category_course_numbers[j];
            }

            if (num_of_taken_courses(selected_course_numbers, category_course_numbers, selected_courses, category_courses) < necessary) {
                degree_met = false;
            }
        }

        if (degree_met) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
}

