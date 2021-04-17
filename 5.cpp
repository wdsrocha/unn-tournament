#include <iostream>
using namespace std;

int count(string& s, int value) {
    int n = s.size();
    int frequency = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == value) {
            frequency++;
        }
    }

    return frequency;
}

int main() {
    string dna = "AGCTTTTCATTCTGACTGCAACGGGCAATATGTCTCTGTGTGGATTAAAAA ";
    int n = dna.size();

    cout << "A: " << count(dna, 'A') << endl;
    cout << "C: " << count(dna, 'C') << endl;
    cout << "G: " << count(dna, 'G') << endl;
    cout << "T: " << count(dna, 'T') << endl;

    cout << "Tamanho da cadeia: " << n << endl;

    return 0;
}