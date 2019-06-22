//
// Created by luisfer on 29/3/2019.
//
#include <bits/stdc++.h>
#include <map>

using namespace std;

int main11340() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<char, double> mapaPrecios;
    map<char, double >::iterator it;
    int casos;
    cin >> casos;
    while (casos--) {
        int cantDeCaracteres=0, precio=0;
        cin >> cantDeCaracteres;
        for (int i = 0; i < cantDeCaracteres; ++i) {
            char c;
            int valor;
            cin >> c;
            cin >> valor;
            mapaPrecios[c] = valor;
        }
        int cantLineas;
        cin >> cantLineas;
        cin.ignore();
        for (int j = 0; j < cantLineas; ++j) {
            string linea="";
            getline(cin, linea);
            for (int i = 0; i < linea.size(); i++) {
                it = mapaPrecios.find(linea[i]);
                if (it != mapaPrecios.end()) {
                        precio += it->second;
                }
            }
        }
        double resto= (double)precio/100;

        printf("%0.2lf$\n", resto);
        mapaPrecios.clear();
    }

    return 0;
}


