#ifndef PILHA_H
#define PILHA_H

class Pilha{
    private:
        static const int MAX_TAMANHO = 5;
        int* vetor; 
        int topo;

    public:
        Pilha();
        ~Pilha();
        bool taVazia();
        bool taCheia();
        void adicionar_valor(int valor);
        int remover_valor();
        void mostrar_pilha();

};

#endif