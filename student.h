//
// Created by hunter on 03.03.16.
//

#ifndef TESTCLAS_STUDENT_H
#define TESTCLAS_STUDENT_H

#include "human.h"
#include <string>
#include <vector>

class student : public human {

    public:
        student(string last_name, string name, string second_name, vector<int> scores) : human (last_name, name, second_name) {
            this -> scores = scores;
        }

        float get_average_score();

    private:
        vector<int> scores;
};


#endif //TESTCLAS_STUDENT_H
