#include <iostream>

#include "bell.h"
#include "separator.h"

using namespace std;

int main()
{
    OddEvenSeparator separator;

    separator.add_number(12);
    separator.add_number(13);
    separator.add_number(14);
    separator.add_number(15);
    separator.add_number(16);
    separator.add_number(17);
    separator.add_number(18);
    separator.add_number(19);

    separator.even();
    separator.odd();

    return 0;
}
