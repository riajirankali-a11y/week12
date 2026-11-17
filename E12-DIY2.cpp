
#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;

    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 3) {
        cout << "Enter at least 3 numbers!";
        return 0;
    }

    cout << "Enter numbers:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> x;
        pq.push(x);
    }

    cout << "Top 3 largest numbers:" << endl;

    for (int i = 0; i < 3; i++) {
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}
