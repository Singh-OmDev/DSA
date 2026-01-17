#include <iostream> 
#include <vector>
using namespace std;

int gasstation(vector<int>& gas, vector<int>& cost) {

    int startgas = 0;
    int costgas = 0;
    int totalgas = 0;
    int currentgas = 0;

    for (int i = 0; i < gas.size(); i++) {

        currentgas += gas[i] - cost[i];
        totalgas += gas[i];
        costgas += cost[i];

        if (currentgas < 0) {
            startgas = i + 1;
            currentgas = 0;
        }
    }

    return (totalgas < costgas) ? -1 : startgas;
}link

int main() {
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};

    cout << gasstation(gas, cost);
    return 0;
}
