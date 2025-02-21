//
// Created by ivand on 2/21/2025.
//
#include "separator.h"

#include <iostream>

void OddEvenSeparator::even() {
    cout << "\neven numbers: ";

    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] % 2 == 0)
            cout << numbers[i] << " ";
    }
}

void OddEvenSeparator::odd() {
    cout << "\neven numbers: ";

    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] % 2 != 1)
            cout << numbers[i] << " ";
    }
}

void OddEvenSeparator::add_number(int number) {
    numbers.push_back(number);
}

