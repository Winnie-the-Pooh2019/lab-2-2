//
// Created by ivand on 2/28/2025.
//

#ifndef TABLE_H
#define TABLE_H

#include <string>

class Table {
    int rows;
    int cols;
    int** data;

public:

    Table(int rows, int cols);

    ~Table();

    int get_value(int row, int col);

    void set_value(int row, int col, int value);

    int n_rows();

    int n_cols();

    void print();

    std::string to_string();

    double average();
};

#endif //TABLE_H
