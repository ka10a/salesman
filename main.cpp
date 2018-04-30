#include <bits/stdc++.h>
#include "Experiment.h"

using namespace std;

int main() {
    CExperiment experiment;
    for(int i = 2; i <= 10; ++i){
        cout << "The number of vertices: " << i << endl;
        experiment.run(i, 100);
        cout << "The average value of the quality of approximation: " << experiment.get_average() << endl;
        cout << "Mean squared deviation: " << experiment.get_deviation() << endl;
        cout << endl;
    }

    return 0;
}