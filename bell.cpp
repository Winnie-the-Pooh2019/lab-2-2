//
// Created by ivand on 2/21/2025.
//
#include "bell.h"

#include <iostream>

using namespace std;

void Bell::sound()  {
    if (is_ding)
        cout << "ding" << endl;
    else
        cout << "dong" << endl;

    is_ding = !is_ding;
}
