/*
Crie um Algoritmo em C++, que tenha uma função recebe dois ponteiros e
troca o valor de referência entre os dois.
*/
#include <iostream>
using namespace std;

void troca_ponteiro(int* ptr1, int* ptr2){
    int sentinela;
    sentinela = *ptr1;
    *ptr1 = *ptr2; 
    *ptr2 = sentinela;
}

int main(){
    int numero1;
    int numero2;
    cout << "Digite o 1º número: ";
    cin >> numero1;
    cout << "Digite o 2º número: ";
    cin >> numero2;
    int* ptr1 = &numero1;
    int* ptr2 = &numero2;

    troca_ponteiro(ptr1, ptr2);
    cout << "APÓS A TROCA..." << endl; 
    cout << "Ponteiro 1: " << *ptr1 << endl;
    cout << "Ponteiro 2: " << *ptr2 << endl;
    return 0;
}