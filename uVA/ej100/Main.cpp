//
// Created by luisfer on 25/3/2019.
//
/*
 * Ejercicio 100 uVA
 */
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    // lines for faster reading
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, j, maximociclo = 0;
    while (cin >> i >> j) {
        maximociclo=0;
        int ogi=i,ogj=j;
        if(i>j){
            int aux=j;
            j=i;
            i=aux;
        }
        for (int k = i; k <= j; ++k) {
            int numero = k;
            int cont = 1;
            while (numero > 1) {
                if (numero % 2 == 0) {
                    numero = numero / 2;
                } else {
                    numero = numero * 3 + 1;
                }
                cont++;
            }
            if (cont > maximociclo) {
                maximociclo = cont;
            }
        }
        cout << ogi << " " << ogj << " " << maximociclo << endl;
    }

    return 0;
}

