#include <iostream>
#include "pilha.h"
using namespace std;

Pilha::Pilha(){ //Construtor
    topo = -1;
    vetor = new int[MAX_TAMANHO];
}

Pilha::~Pilha(){ //Destrutor
    delete[] vetor;
}

bool Pilha::taVazia(){
    return (topo==-1);
}

bool Pilha::taCheia(){
    return (topo==MAX_TAMANHO-1);
}

void Pilha::adicionar_valor(int valor){
    if (taCheia()){
        cout << "A pilha está cheia no momento!" << endl;
    }
    else{
        topo++;
        vetor[topo] = valor;
    }
}

int Pilha::remover_valor(){
    if (taVazia()){
        cout << "A pilha está vazia!" << endl;
        return -1;
    }
    else{
        int valor = vetor[topo];
        topo--;
        return valor;
    }
}

void Pilha::mostrar_pilha(){
    if (taVazia()){
        cout << "[ ]" << endl;
    }
    else{
        cout << "[";
        for(int i=0; i<=topo; i++){
            cout << vetor[i] << " "; 
        }
        cout << "]" << endl;
    }
}