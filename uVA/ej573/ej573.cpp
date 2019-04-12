//
// Created by luisfer on 27/3/2019.
//

#include <bits/stdc++.h>

using namespace std;

int main573() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double h, u, d, f, PosicionActual = 0, PorcentajeCansancio;
    cin >> h >> u >> d >> f;
    while (h != 0) {
        bool succes = false;
        int dia = 1;
        PosicionActual = u;
        if (PosicionActual > h) {
            cout << "success on day " << dia << "\n";
        } else {
            PosicionActual = PosicionActual - d;
            PorcentajeCansancio = u * (f * 0.01);
            u = u - PorcentajeCansancio;
            while (PosicionActual >= 0 && PosicionActual <= h) {
                dia++;
                PosicionActual = PosicionActual + u;
                if (PosicionActual > h) {
                    succes = true;
                    break;
                }
                PosicionActual = PosicionActual - d;
                u = u - PorcentajeCansancio;
                if (u < 0) {
                    u = 0;
                }
            }
            if (succes) {
                cout << "success on day " << dia << "\n";
            } else {
                cout << "failure on day " << dia << "\n";
            }
        }
        cin >> h >> u >> d >> f;
    }
    return 0;
}
