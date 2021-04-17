#include<iostream>
#include<vector>

using namespace std;

int bubble_sort(vector<int>& v) {
    int bubble_sort_changes = 0;
    int n = v.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 1; j < n - i; ++j) {
            if (v[j - 1] > v[j]) {
                bubble_sort_changes++;
                swap(v[j - 1], v[j]);
            }
        }
    }
    return bubble_sort_changes;
}

int main() {
    vector <int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(6);
    v.push_back(5);
    v.push_back(8);
    v.push_back(7);
    v.push_back(10);
    v.push_back(9);

    cout << "Trocas: " << bubble_sort(v) << endl;

    return 0;
}