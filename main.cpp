#include <iostream>
#include <vector>
#include "student.h"

using namespace std;

int main() {

    vector<int> scores;

    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(5);
    scores.push_back(4);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(5);

    student *stud = new student("Декабрио", "Лео", "Оскорович", scores);

    cout << stud -> get_full_name() << endl;

    cout << "Средний балл: " << stud -> get_average_score() << endl;

    return 0;
}