#include "BestAlgorithm.h"
#include <algorithm>

using namespace std;

BestAlgo::BestAlgo(MyGraph& g) {
    for (int i = 0; i < g.size(); ++i)
        vrtx.push_back(i);
}

double BestAlgo::count_way(MyGraph& g) {
    double way = 0;
    for (int i = 0; i < vrtx.size() - 1; ++i) {
        int cur = vrtx[i], next = vrtx[i + 1];
        way += g.dist(g.get_vrtx()[cur], g.get_vrtx()[next]);
    }
    way += g.dist(g.get_vrtx()[vrtx[vrtx.size() - 1]], g.get_vrtx()[vrtx[0]]);
    return way;
}

double BestAlgo::count_min_way(MyGraph& g) {
    double res = count_way(g);
    while(next_permutation(vrtx.begin(), vrtx.end()))
        res = min(res, count_way(g));
    return res;
}