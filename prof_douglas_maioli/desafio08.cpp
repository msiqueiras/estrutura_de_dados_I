/*
Crie um Algoritmo em C++, que o usuário informa o tamanho de um vetor,
e seus elementos. O Algoritmo deve imprimir este vetor e logo após, perguntar 
ao usuário se ele quer imprimir outro vetor. Utilize o delete após a impressão do vetor.
*/

#include <iostream>
using namespace std;

int main(){
    int tamanho;
    bool continuar = 1;
    while (continuar==1){
        cout << "Digite o tamanho do vetor: ";
        cin >> tamanho; 
        float* vetor = new float[tamanho];
        for (int i=0; i < tamanho; i++){
            cout << "Digite o " << i+1 << "º termo:";
            cin >> vetor[i];
        }
        cout << "[";
        for (int i=0; i < tamanho; i++){
          cout << vetor[i];
          if(i != tamanho-1){
            cout << ", ";
          }
        }
        cout << "]" << endl;

        cout << "Deseja continuar? [Digite 0 para parar]: ";
        cin >> continuar;
        delete[] vetor;
    }

    return 0;
}