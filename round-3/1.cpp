#include<iostream>
#include<vector>

using namespace std;

void bubble_sort(vector <int>& vet) {
    int aux;
    int TAM = vet.size();

    for (int i = 0; i < TAM; i++) {
        bool isSorted = true;
        for (int j = 0; j < TAM - 1; j++) {
            if (vet[j] > vet[j + 1]) {
                aux = vet[j + 1];
                vet[j + 1] = vet[j];
                vet[j] = aux;

                isSorted = false;
            }
        }

        if (isSorted) {
            return;
        }
    }
}