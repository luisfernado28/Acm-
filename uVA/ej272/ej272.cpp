//
// Created by luisfer on 26/3/2019.
//
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string linea;
    bool cont = true;
    while (getline(cin, linea)) {
        string lineaConv = "";
        for (int i = 0; i < linea.length(); ++i) {
            char carac = '"';
            if (carac == linea[i]) {
                if (cont) {
                    lineaConv = lineaConv + "``";
                } else {
                    lineaConv = lineaConv + "''";
                }
                cont = !cont;
            } else {
                lineaConv = lineaConv + linea[i];
            }
        }
        cout << lineaConv << "\n"  ;

    }

    return 0;
}