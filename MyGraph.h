#ifndef KOMMIVOYAGER_MYGRAPH_H
#define KOMMIVOYAGER_MYGRAPH_H

#include <vector>
#include <iostream>
#include "Point.h"

using  namespace std;

class MyGraph {
private:
    int g_size; // Количество вершин в графе
    int edges_count; // Количество ребер в графе
    const int INF = 1e9+7; // Очень большая константа, принимаемая за бесконечноть
    vector<Point> vertexes; // Массив вершин-точек
    vector<vector<pair<int, double> > > edges; // Граф в виде списков смежности

public:
    MyGraph(int n = 0);

    // Возвращает количество вершин в графе
    int size() const;

    // Возвращает константу бесконечность
    int get_INF() const;

    // Возвращает ссылку на весь граф
    vector<vector<pair<int, double> > >& get_edges();

    // Возвращает ссылку на список достижимых по 1 ребру вершин из v
    vector<pair<int, double> >& adjacent(int v);

    // Возвращает ссылку на список вершин-точек
    vector<Point>& get_vrtx();

    // Считает расстояние между точками
    double dist(Point a, Point b);

    // Добавляет ребро в граф
    void add_edge(int a, int b);

    // Генерирует полный граф
    void inicialize();

    // Устанавливает нужный размер графа
    void set_size(int n);
};


#endif //KOMMIVOYAGER_MYGRAPH_H
