#include "FerrisWheel.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
    int nFilhos, pesoMax, contador = 0;
    cin >> nFilhos >> pesoMax;
    vector<int> pesos(nFilhos);

    // Adiciona o peso de cada criança no vetor "pesos"
    for (int i = 0; i < nFilhos; i++) {
        cin >> pesos[i];
    }

    sort(pesos.begin(), pesos.end());
    for (int j = 0; j < pesos.size(); j++) {
        for (int k = pesos.size() - 1; k > j; k--) {
            if (pesos[j] + pesos[k] <= pesoMax) {
                contador += 1;
                break;
            }
        }
    }
    cout << contador << endl;
    return 0;
}
