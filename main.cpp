#include <iostream>

#include "bell.h"
#include "separator.h"
#include "table.h"

using namespace std;

int main()
{
    Table* table = new Table(5, 5);

    table->print();

    delete table;

    return 0;
}
