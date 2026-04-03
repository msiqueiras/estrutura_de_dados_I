/*
Crie um algoritmo em c++ em que o usuário informa a idade de N pessoas, calcula a média 
de idade e depois informa se cada pessoa está abaixo, acima ou na média da média de idades
*/

#include <iostream>
#include <cstddef>
using namespace std;

int main(){
    int tamanho;
    int* idades = new int[tamanho]; //alocação dinâmica
    float soma = 0;
    float media;

    cout << "Digite quantas pessoas você deseja incluir na lista: ";
    cin >> tamanho;
    for(int i=0; i < tamanho; i++){
        cout << "Idade da " << i+1 << "ª pessoa: ";
        cin >> idades[i];
        cout << endl;
        soma = soma + idades[i];
    }

    cout << "Lista das idades: [";
    for(int i=0; i < tamanho; i++){
        if(i != tamanho-1){
            cout << idades[i] << ", ";
        }
        else{
            cout << idades[i] << "]" << endl;
        }
    }

    media = soma/tamanho;
    cout << "Média de idade: " << media << endl;

    for(int i=0; i < tamanho; i++){
        if (idades[i] < media){
            cout << "Pessoa " << i+1 << " está abaixo da média de idade" << endl;
        }
        else if(idades[i] > media){
            cout << "Pessoa " << i+1 << " está acima da média de idade" << endl; 
        }
        else {
            cout << "Pessoa " << i+1 << " está exatamente na média de idade" <<endl;
        }
    }

    return 0;
}