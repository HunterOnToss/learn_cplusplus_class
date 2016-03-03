//
// Created by hunter on 03.03.16.
//

#ifndef TESTCLAS_HUMAN_H
#define TESTCLAS_HUMAN_H

#include <string>
#include <sstream>

using namespace std;

class human {
    public:
        human(string last_name, string name, string second_name);
        string get_full_name();

    private:
        string name;
        string last_name;
        string second_name;
};
#endif //TESTCLAS_HUMAN_H
