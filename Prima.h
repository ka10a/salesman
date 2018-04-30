#ifndef KOMMIVOYAGER_PRIMA_H
#define KOMMIVOYAGER_PRIMA_H

#include "MyGraph.h"
#include <set>

class Prima{
private:
    set<pair<double, pair<int, int> > > d; // ребра, торчащие из той части остова,
                                           // которая у нас есть (вес, откуда, куда)
    vector<bool> vrtx; // вершина уже в остове или еще нет
    vector<vector<int> > ostov; // граф остова

public:
    Prima();

    // Ищет минимальный остов
    void solve(MyGraph& gr);

    // Возвращает указатель на граф остова
    vector<vector<int> >& get_ostov();
};


#endif //KOMMIVOYAGER_PRIMA_H
