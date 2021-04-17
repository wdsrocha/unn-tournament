#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    assert(5 <= n && n <= 10);

    int values[n];
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }


    int lowestValueIndex = 0;
    for (int i = 1; i < n; i++) {
        if (values[i] < values[lowestValueIndex]) {
            lowestValueIndex = i;
        }
    }
    swap(values[0], values[lowestValueIndex]);


    int greatestValueIndex = 0;
    for (int i = 1; i < n; i++) {
        if (values[i] > values[greatestValueIndex]) {
            greatestValueIndex = i;
        }
    }
    swap(values[n - 1], values[greatestValueIndex]);

    for (int i = 0; i < n; i++) {
        cout << values[i] << ' ';
    }
    cout << endl;

    return 0;
}