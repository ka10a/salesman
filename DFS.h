#ifndef KOMMIVOYAGER_DFS_H
#define KOMMIVOYAGER_DFS_H

#include "Prima.h"
#include "MyGraph.h"

class DFS{
private:
    vector<int> order; // список вершин в порядке их обхода
    vector<bool> used; // были ли уже в вершине
    Prima algo; // считает минимальное остовное дерево

public:
    DFS(MyGraph& gr);

    // обходит граф
    void dfs(int v);

    // считает длину пути
    double count_way(MyGraph& gr);

};

#endif //KOMMIVOYAGER_DFS_H
