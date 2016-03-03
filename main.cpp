#include <iostream>
#include "students.h"

using namespace std;

int main() {
    string name = "Leonardo";
    string last_name = "Dicaprio";

    //    cout << "Name: ";
    //    getline(cin, name);
    //
    //    cout << "Last name: ";
    //    getline(cin, last_name);

    Students *student = new Students(name, last_name);

    student -> set_name(name);
    student -> set_last_name(last_name);

    int score[5];
    int sum = 0;

    for (int i = 0; i < 5; ++i) {
        cout << "Score " << i+1 << ": ";
        cin >> score[i];

        sum += score[i];

    }

    student -> set_scores(score);

    float average_ball = (float) (sum / 5.0);

    student -> set_average_ball(average_ball);

    cout << "Average ball for " << student -> get_name() << " " <<
            student -> get_last_name() << " is " << student -> get_average_ball() << endl;

    student -> save();

    delete student;
    return 0;
}