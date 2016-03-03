#include <iostream>
#include <vector>
#include "student.h"
#include "teacher.h"

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

    // Количество учебных часов преподавателя
    unsigned int teacher_work_time = 40;

    teacher *tch = new teacher("Васильков", "Петр", "Сергеевич", teacher_work_time);

    std::cout << tch->get_full_name() << std::endl;
    std::cout << "Количество часов: " << tch->get_work_time() << std::endl;


    return 0;
}