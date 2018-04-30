#include "DFS.h"

DFS::DFS(MyGraph& gr) {
    used.resize(gr.size(), false);
    algo.solve(gr);
}

void DFS::dfs(int v) {
    used[v] = true;
    order.push_back(v);
    for (int u : algo.get_ostov()[v]) {
        if (!used[u]) {
            dfs(u);
        }
    }
}

double DFS::count_way(MyGraph& gr) {
    double way = 0;
    for (int i = 0; i < order.size() - 1; ++i) {
        int cur = order[i], next = order[i + 1];
        way += gr.dist(gr.get_vrtx()[cur], gr.get_vrtx()[next]);
    }
    way += gr.dist(gr.get_vrtx()[order[order.size() - 1]], gr.get_vrtx()[0]);
    return way;
}