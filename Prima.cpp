#include "Prima.h"

Prima::Prima() {}

void Prima::solve(MyGraph& gr) {
    for (int i = 0; i < gr.adjacent(0).size(); ++i) {
        d.insert({gr.adjacent(0)[i].second, {0, gr.adjacent(0)[i].first}});
    }

    vrtx.resize(gr.size(), true);
    vrtx[0] = false;
    int n = gr.size(), cnt = 1;
    ostov.resize(n, vector<int>());

    // Пока найден не весь остов
    while (cnt < n) {
        pair<double , pair<int, int> > cur = *d.begin();
        d.erase(d.begin());

        // Если ребро инцидентное
        if (vrtx[cur.second.second]) {
            for (auto p : gr.adjacent(cur.second.second)) {
                if (vrtx[p.second])
                    d.insert({p.first, {cur.second.second, p.second}});
            }
            ostov[cur.second.first].push_back(cur.second.second);
            vrtx[cur.second.second] = false;
            cnt++;
        }
    }
}

vector<vector<int> >& Prima::get_ostov(){
    return ostov;
};