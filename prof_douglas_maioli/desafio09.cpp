/*
Crie um Algoritmo em C++ utilizando apenas ponteiros, em que o usuário 
informa a idade de duas pessoas, e o algoritmo informa a média destas duas 
idades.
*/

#include <iostream>
using namespace std;

int main(){
    int* idade1 = new int;
    int* idade2 = new int;
    float media;
    cout << "Digite a 1ª idade:";
    cin >> *idade1;
    cout << "Digite a 2ª idade:";
    cin >> *idade2;

    media= (*idade1+*idade2)/(2.0);
    cout << "Média das idades:" << media;

    return 0;
}