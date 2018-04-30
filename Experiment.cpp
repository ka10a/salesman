#include <iostream>
#include <cmath>
#include "Experiment.h"

CExperiment::CExperiment() : cur_gr(0) {}

void CExperiment::generate_gr(int size) {
    cur_gr.set_size(size);
    cur_gr.inicialize();
}

void CExperiment::run(int gr_size, int repeat) {
    MstResults.clear();
    BestResults.clear();
    for(int i = 0; i < repeat; ++i){
        generate_gr(gr_size);
        DFS mst_algo1(cur_gr);
        mst_algo1.dfs(0);
        MstResults.push_back(mst_algo1.count_way(cur_gr));
        BestAlgo best_algo2(cur_gr);
        BestResults.push_back(best_algo2.count_min_way(cur_gr));
    }
}

double CExperiment::get_average() {
    if(MstResults.size() == 0)
        return 0;
    double sum = 0;
    for(int i = 0; i < MstResults.size(); ++i) {
        sum += (MstResults[i] / BestResults[i]);
    }
    return sum/MstResults.size();
}

double CExperiment::get_deviation() {
    if(MstResults.size() == 0)
        return 0;
    double result = 0;
    double average = get_average();
    for(int i = 0; i < MstResults.size(); ++i){
        result += pow(average - (MstResults[i] / BestResults[i]), 2);
    }

    return sqrt(result/MstResults.size());
}