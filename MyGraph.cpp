#include "MyGraph.h"
#include <cmath>

MyGraph::MyGraph(int n) {
    g_size = n;
    edges.resize(g_size, vector<pair<int, double> > ());
}

int MyGraph::size() const {
    return g_size;
}

int MyGraph::get_INF() const {
    return INF;
}

vector<vector<pair<int, double > > >& MyGraph::get_edges() {
    return edges;
}

vector<pair<int, double > >& MyGraph::adjacent(int v) {
    return edges[v];
}

vector<Point>& MyGraph::get_vrtx() {
    return vertexes;
}

double MyGraph::dist(Point a, Point b) {
    return hypot(a.get_x() - b.get_x(), a.get_y() - b.get_y());
}

void MyGraph::add_edge(int a, int b) {
    edges[a].push_back({b, dist(vertexes[a], vertexes[b])});
    edges[b].push_back({a, dist(vertexes[a], vertexes[b])});
}

void MyGraph::inicialize() {
    int counter = 0;
    while (counter  < size()){
        double value1 = 2.0 * ((double)rand() / (RAND_MAX)) - 1.0;
        double value2 = 2.0 * ((double)rand() / (RAND_MAX)) - 1.0;
        double s = value1*value1 + value2*value2;
        if(s > 0 && s <= 1){
            counter++;
            double resValue1 = value1 * sqrt(-2*log(s)/s);
            double resValue2 = value2 * sqrt(-2*log(s)/s);
            vertexes.push_back(Point(resValue1, resValue2));
        }
    }

    for (int i = 0; i < size(); ++i)
        for (int j = i + 1; j < size(); ++j){
            add_edge(i, j);
        }
}

void MyGraph::set_size(int n) {
    g_size = n;
    edges.clear();
    edges.resize(g_size, vector<pair<int, double> > ());
    vertexes.clear();
}
