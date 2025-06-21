#include <iostream>
#include <time.h>
using namespace std;

#define TAM 4

int main() {
    srand(time(0));

    int matriz[TAM][TAM]={1,4,5,2,7,2,8,7,3,6,1,4,6,5,3,8}, matrizGabarito[TAM][TAM], matrizJogo[TAM][TAM], i, j, k=0, l;


    // impressao matriz principal

    cout << "Matriz Principal:" << endl;
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    switch(rand() % 4 + 1) {
        case 1:
            // matriz original (CERTA)
            cout << "Matriz Original:" << endl;
            for (i = 0; i < TAM; i++) {
                for (j = 0; j < TAM; j++) {
                    matrizGabarito[i][j] = matriz[i][j];
                }
            }
            break;
        case 2:
            // matriz transposta (CERTA)
            cout << "Matriz Transposta:" << endl;
            for (i = 0; i < TAM; i++) {
                for (j = 0; j < TAM; j++) {
                    matrizGabarito[j][i] = matriz[i][j];
                }
            }
            break;
        case 3:
            // invertida por linha (CERTA)
            cout<< "Matriz Invertida por Linha:" << endl;
            for (i = TAM - 1; i >= 0 ; i--) {
                for (j = 0; j < TAM; j++) {
                    matrizGabarito[i][j] = matriz[k][j];
                    
                }
                k++;
            }
            break;
        case 4:
            // invertida por coluna
            cout << "Matriz Invertida por Coluna:" << endl;
            for (i = 0; i < TAM; i++) {
                k=TAM -1;
                for (j = 0; j < TAM; j++) {
                    matrizGabarito[i][j] = matriz[i][k];
                    k--;
                }
    }

    cout << "Matriz Gabarito:" << endl;
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            cout << matrizGabarito[i][j] << " ";
        }
        cout << endl;
    } 
    
    

    return 0;
}