//
// Created by hunter on 03.03.16.
//

#include "student.h"

float student::get_average_score() {

    // Общее количество оценок
    unsigned int count_scores = (unsigned int) this -> scores.size();
    // Сумма всех оценок студента
    unsigned int sum_scores = 0;

    float average_score;

    for (unsigned int i = 0; i < count_scores; ++i) {
        sum_scores += this -> scores[i];
    }

    average_score = (float) sum_scores / (float) count_scores;

    return average_score;
}
