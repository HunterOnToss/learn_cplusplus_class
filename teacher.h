//
// Created by hunter on 03.03.16.
//

#ifndef TESTCLAS_TEACHER_H
#define TESTCLAS_TEACHER_H

#include "human.h"
#include <string>

class teacher : public human {
    public:
        teacher(string last_name,
                string name,
                string second_name,
                // Количество учебных часов за семетр у преподавателя
                unsigned int work_time
        ) : human(
                last_name,
                name,
                second_name
        ) {
            this -> work_time = work_time;
        }

        unsigned int get_work_time();

    private:
        unsigned int work_time;

};

#endif //TESTCLAS_TEACHER_H
