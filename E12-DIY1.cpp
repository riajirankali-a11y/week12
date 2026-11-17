
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<pair<string, int>> v = {
        {"Ria", 85},
        {"Anu", 70},
        {"Priya", 95},
        {"Sneha", 80}
    };

    sort(v.begin(), v.end(),
        [](pair<string, int> a, pair<string, int> b) {
            return a.second < b.second;
        });

    cout << "Sorted pairs:" << endl;

    for (auto p : v) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
