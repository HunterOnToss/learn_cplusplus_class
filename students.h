//
// Created by hunter on 03.03.16.
//

#ifndef TESTCLAS_STUDENTS_H
#define TESTCLAS_STUDENTS_H
#pragma once
#include <string>
#include <iostream>

using namespace std;

class Students {

    public:

        Students(std::string, std::string);

        ~Students();

        void set_name(string student_name );

        string get_name();

        void set_last_name(string student_last_name);

        string get_last_name();

        void set_scores(int student_scores[]);

        void set_average_ball(float ball);

        float get_average_ball();

        void save();

    private:
        int scores[5];
        float average_ball;
        string name;
        string last_name;
};

#endif //TESTCLAS_STUDENTS_H
