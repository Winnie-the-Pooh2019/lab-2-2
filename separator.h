//
// Created by ivand on 2/21/2025.
//

#ifndef SEPARATOR_H
#define SEPARATOR_H

#include <vector>

using namespace std;

class OddEvenSeparator {
    vector<int> numbers;

public:
    void add_number(int number);

    void even();

    void odd();
};

#endif //SEPARATOR_H
