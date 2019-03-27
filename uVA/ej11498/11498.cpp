//
// Created by luisfer on 26/3/2019.
//

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main11498() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k, n, m;
    cin >> k;
    while (k != 0) {
        cin >> n >> m;
        for (int i = 0; i < k; ++i) {
            int x, y;
            cin >> x >> y;
            if (x == n || x == m || y == n || y == m) {
                cout << "divisa" << "\n";
            } else if (y > m) {
                //north
                if (x > n) {
                    //east
                    cout << "NE"<<"\n";
                } else {
                    cout << "NO"<<"\n";

                }
            } else {
                //south
                if (x > n) {
                    //east
                    cout << "SE"<<"\n";
                } else {
                    cout << "SO"<<"\n";
                }
            }
        }
        cin >> k;
    }
    return 0;
}