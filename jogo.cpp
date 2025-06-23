#include <iostream>
#include <time.h>
using namespace std;

#define TAM 4
#define DEV_MODE true

int main() {
    srand(time(0));

    int matriz[TAM][TAM]={1,4,5,2,7,2,8,7,3,6,1,4,6,5,3,8}, matrizGabarito[TAM][TAM], matrizJogo[TAM][TAM], i, j, k=0, l, primeiroPalpiteLinha, primeiroPalpiteColuna,
        segundoPalpiteLinha, segundoPalpiteColuna;


    // impressao matriz principal
    cout << "Matriz Principal:" << endl;
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    
    if(DEV_MODE) {
        cout << "DEV MODE!!!" << endl;
    }

    switch(rand() % 4 + 1) {
        case 1:
            // matriz original (CERTA)
            if(DEV_MODE) {
            cout << "Matriz Original:" << endl;    
            }
            
            for (i = 0; i < TAM; i++) {
                for (j = 0; j < TAM; j++) {
                    matrizGabarito[i][j] = matriz[i][j];
                }
            }
            break;
        case 2:
            // matriz transposta (CERTA)
            if(DEV_MODE) {
            cout << "Matriz Transposta:" << endl;    
            }
            
            for (i = 0; i < TAM; i++) {
                for (j = 0; j < TAM; j++) {
                    matrizGabarito[j][i] = matriz[i][j];
                }
            }
            break;
        case 3:
            // invertida por linha (CERTA)
            if(DEV_MODE) {
            cout << "Matriz Invertida por Linha:" << endl;    
            }
            
            for (i = TAM - 1; i >= 0 ; i--) {
                for (j = 0; j < TAM; j++) {
                    matrizGabarito[i][j] = matriz[k][j];
                }
                k++;
            }
            break;
        case 4:
            // invertida por coluna
            if(DEV_MODE) {
            cout << "Matriz Invertida por Coluna:" << endl;    
            }
            
            for (i = 0; i < TAM; i++) {
                k=TAM -1;
                for (j = 0; j < TAM; j++) {
                    matrizGabarito[i][j] = matriz[i][k];
                    k--;
                }
            }
            break;
    }
    
    // Printa a matriz gabarito no modo dev_mode
    if(DEV_MODE) {
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            cout << matrizGabarito[i][j] << '\t';
        }
    cout << endl;
    }
    }
    
    
    // Início do jogo
    do {
    // Obtém a primeira coordenada do palpite
    cout << "Digite a primeira coordenada: " << endl << "X x X: ";
    cin >> primeiroPalpiteLinha;
    cout << primeiroPalpiteLinha << " x X: ";
    cin >> primeiroPalpiteColuna;
    cout << primeiroPalpiteLinha << " x " << primeiroPalpiteColuna << endl;
    
    // Obtém a segunda coordenada do palpite
    cout << "Digite a segunda coordenada: " << endl << "X x X: ";
    cin >> segundoPalpiteLinha;
    cout << segundoPalpiteLinha << " x X: ";
    cin >> segundoPalpiteColuna;
    cout << segundoPalpiteLinha << " x " << segundoPalpiteColuna << endl << endl;
    
    // Printa a matriz com as coordenadas escolhidas
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            if((primeiroPalpiteLinha == (i + 1)  and primeiroPalpiteColuna == (j + 1)) or (segundoPalpiteLinha == (i + 1) and segundoPalpiteColuna == (j + 1))) {
            cout << matrizGabarito[i][j] << '\t';    
            } else {
            cout << "X" << '\t';
            }
        }
    cout << endl;
    }
    } while(true);
    
    return 0;
}