#include "center.h"
int main() {
    std::vector<int> w = {0, 1, 1, 1};
    std::vector<int> e = {0, 4, 2, 4};
    CycleGraph graph(w, e);
    graph.printCenter();
}