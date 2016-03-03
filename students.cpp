//
// Created by hunter on 03.03.16.
//

#include "students.h"
#import <fstream>

using namespace std;

Students::Students(string name, string last_name) {
    Students::set_name(name);
    Students::set_last_name(last_name);
}

Students::~Students() {
    Students::save();
}


void Students::set_name(string student_name) {
    Students::name = student_name;
}


string Students::get_name() {
    return Students::name;
}


void Students::set_last_name(string student_last_name) {
    Students::last_name = student_last_name;
}


string Students::get_last_name() {
    return Students::last_name;
}


void Students::set_scores(int scores[]) {
    for (int i = 0; i < 5; ++i) {
        Students::scores[i] = scores[i];
    }
}

void Students::set_average_ball(float ball) {
    Students::average_ball = ball;
}

float Students::get_average_ball() {
    return Students::average_ball;
}

void Students::save() {
    //app (eng. append)
    ofstream fout("students.txt", ios::app);

    fout << Students::get_name() << " " << Students::get_last_name() << " ";

    for (int i =0; i < 5; ++i) {
        fout << Students::scores[i] << " ";
    }

    fout << endl;
    fout.close();

}
