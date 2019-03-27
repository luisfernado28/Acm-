//
// Created by luisfer on 27/3/2019.
//

#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

int main10963() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cases,columns, north, south;;
    cin >> cases;
    for (int i = 0; i < cases; ++i) {
        bool canbeclosed = true;
        cin >> columns >> north >> south;
        int differencia = north - south;
        for (int j = 1; j < columns; ++j) {
            cin >> north >> south;
            int nuevadiff = north - south;
            if (nuevadiff != differencia) {
                canbeclosed = false;
            }
        }
        if (i > 0) {
            cout << "\n";
        }
        if (canbeclosed) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
    return 0;
}

