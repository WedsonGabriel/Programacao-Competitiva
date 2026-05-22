#include "Apartaments.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
    int nCandidatos, nApartamentos, difMaxima, contador = 0;
    cin >> nCandidatos >> nApartamentos >> difMaxima;
    vector<int> aptSizeDesejado(nCandidatos);
    vector<int> aptSizeOferecido(nApartamentos);

    for (int i = 0; i < nCandidatos; i++) {
        cin >> aptSizeDesejado[i];
    }

    for (int j = 0; j < nApartamentos; j++) {
        cin >> aptSizeOferecido[j];
    }

    sort(aptSizeDesejado.begin(), aptSizeDesejado.end());
    sort(aptSizeOferecido.begin(), aptSizeOferecido.end());

    for (int k = 0; k < aptSizeDesejado.size(); k++) {
        for (int l = 0; l < aptSizeOferecido.size(); l++) {
            if (abs(aptSizeDesejado[k] - aptSizeOferecido[l]) <= difMaxima) {
                contador += 1;
                aptSizeOferecido.erase(aptSizeOferecido.begin() + l);
                break;
            }
        }
    }
    cout << contador << endl;
    return 0;
}
