//
// Created by luisfer on 21/6/2019.
//


#include <bits/stdc++.h>

using namespace std;

int main541() {
    int cases=0;
    cin >> cases;
    while (cases >0){
        int matrix[cases][cases];
        for (int i = 0; i < cases; ++i) {
            for (int j = 0; j < cases; ++j) {
                cin >>matrix[i][j];
            }
        }

        int rowsinconflict=0, rowNumber=0;
        for (int i = 0; i < cases; ++i) {
            int cont=0;
            for (int j = 0; j < cases; ++j) {
                cont += matrix[i][j];
            }
            if(cont%2!=0){
                rowsinconflict++;
                rowNumber=i+1;
            }
        }

        int columnsinconflict=0, columnNumber=0;
        for (int j = 0; j < cases; ++j) {
            int cont=0;
            for (int i = 0; i < cases; ++i) {
                cont += matrix[i][j];
            }
            if(cont%2!=0){
                columnsinconflict++;
                columnNumber=j+1;
            }
        }

        if(columnsinconflict>1 || rowsinconflict >1){
            cout << "Corrupt\n" ;
        } else if(columnsinconflict==0 && rowsinconflict==0){
            cout << "OK\n";
        } else{
            cout << "Change bit (" << rowNumber << "," << columnNumber << ")\n";
        }
        cin >> cases;
    }
}