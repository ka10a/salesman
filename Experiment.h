//
// Created by Ekaterina on 29.04.2018.
//

#ifndef KOMMIVOYAGER_EXPERIMENT_H
#define KOMMIVOYAGER_EXPERIMENT_H

#include "MyGraph.h"
#include "DFS.h"
#include "BestAlgorithm.h"
#include <vector>
#include <map>


class CExperiment{
    MyGraph cur_gr; // граф для текущего эксперимента
    vector<double> MstResults; // массив результатов 2-приближения
    vector<double> BestResults; // массив результатов поиска перебором всех вариантов

public:
    CExperiment();

    // запускает эксперимент на размере gr_size и повторяет его repeat раз
    void run(int gr_size, int repeat);

    // сгенерировать граф определенного размера
    void generate_gr(int size);

    // считает среднее значение, на сколько больше путь находит 2-приближение
    double get_average();

    // считает стандартное отклонение 2-приближения от точного решения
    double get_deviation();
};


#endif //KOMMIVOYAGER_EXPERIMENT_H
