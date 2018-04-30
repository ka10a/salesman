#ifndef KOMMIVOYAGER_BESTALGORITHM_H
#define KOMMIVOYAGER_BESTALGORITHM_H

#include "MyGraph.h"

class BestAlgo{
private:
    vector<int> vrtx; // текущий путь

public:
    BestAlgo(MyGraph& g);

    // считает длину текущего пути
    double count_way(MyGraph& g);

    // считает длину самого лучшего пути
    double count_min_way(MyGraph& g);
};

#endif //KOMMIVOYAGER_BESTALGORITHM_H
