//
// Created by hunter on 03.03.16.
//

#include "human.h"

human::human(string last_name, string name, string second_name) {
    this -> last_name = last_name;
    this -> name = name;
    this -> second_name = second_name;
}

string human::get_full_name() {
    ostringstream full_name;
    full_name << this -> last_name << " "
    << this -> name << " "
    << this -> second_name;

    return full_name.str();
}
