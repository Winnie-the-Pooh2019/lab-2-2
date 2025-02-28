#include <iostream>

#include "bell.h"
#include "separator.h"
#include "table.h"

using namespace std;

int main()
{
    srand(time(nullptr));

    Table* table = new Table(5, 5);

    for (int i = 0; i < table->n_rows(); i++) {
        for (int j = 0; j < table->n_cols(); j++) {
            table->set_value(i, j, rand() % 1000);
        }
    }

    table->print();

    delete table;

    return 0;
}
