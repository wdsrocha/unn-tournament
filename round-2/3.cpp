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

int selection_sort(vector<int>& v) {
    int selection_sort_changes = 0;
    int min_index;
    for(int i=0; i < v.size() - 1; ++i) {
        min_index = i;
        for(int j = i + 1; j < v.size(); ++j) {
            if(v[j] < v[min_index])  {
                min_index = j;
            }
        }
        swap(v[i], v[min_index]);
        selection_sort_changes++;
    }
    return selection_sort_changes;
}

void create_case(vector <int>& v) {
    v.push_back(10);
    v.push_back(8);
    v.push_back(6);
    v.push_back(4);
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);
}

int main() {
    vector<int> v1, v2;
    create_case(v1);
    create_case(v2);
    cout << "---- BubbleSort ----" << endl;
    cout << "Changes: " << bubble_sort(v1) << endl;;
    cout << endl << endl;
    cout << "---- SelectionSort ----" << endl;
    cout << "Changes: " << selection_sort(v2) << endl;;

    return 0;
}