/*
Crie um algoritmo em C++ em que o usuário informa a dimensão de duas matrizes e os elementos elementos
e depois realiza a matriz soma entre ambas. Imprima todas as matrizes.
*/

#include <iostream>
using namespace std;

int main(){
    int i=0;
    int j=0;
    int soma_ij=0;
    
    cout << "========== Dimensões matriciais ==========" << endl;
    cout << "Digite o número de linhas i: ";
    cin >> i;
    cout << "Digite o número de colunas j: ";
    cin >> j;
    int** matriz_A = new int*[i];
    int** matriz_B = new int*[i];
    int** matriz_SOMA = new int*[i];

    for (int k=0; k < i; k++){
        matriz_A[k] = new int[j];
        matriz_B[k] = new int[j];
        matriz_SOMA[k] = new int[j];
    }

    cout << "========== Elementos matriz A ==========" << endl;
    for (int m=0; m < i; m++){
        for(int n=0; n < j; n++){
            cout << "Digite o elemento [" << m+1 <<"][" << n+1 << "]: ";
            cin >> matriz_A[m][n];
        }
    }
    
    cout << "========== MATRIZ A ==========" << endl;
    for (int m=0; m < i; m++){
        for(int n=0; n < j; n++){
            cout << matriz_A[m][n] << " ";
        }
        cout << endl;
    }

    cout << "========== Elementos matriz B ==========" << endl;
    for (int m=0; m < i; m++){
        for(int n=0; n < j; n++){
            cout << "Digite o elemento [" << m+1 <<"][" << n+1 << "]: ";
            cin >> matriz_B[m][n];
        }
    }
    
    cout << "========== MATRIZ B ==========" << endl;
    for (int m=0; m < i; m++){
        for(int n=0; n < j; n++){
            cout << matriz_B[m][n] << " ";
        }
        cout << endl;
    }
    
    //matiz soma
    for (int m=0; m < i; m++){
        for(int n=0; n < j; n++){
            matriz_SOMA[m][n] = matriz_A[m][n] + matriz_B[m][n];
        }
    }

    cout << "========== MATRIZ SOMA ==========" << endl;
    for (int m=0; m < i; m++){
        for(int n=0; n < j; n++){
            cout << matriz_SOMA[m][n] << " ";
        }
        cout << endl;
    }

    return 0;
}