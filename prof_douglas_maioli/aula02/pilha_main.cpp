#include <iostream>
#include "pilha.h"
using namespace std;

//algoritmo com interação com o usuário

int main(){
    Pilha pilhaA; //não se coloca parênteses em contrutores padrões
    int continuar_interno_add;
    int continuar_externo_loop;


    while(true){
        int opcao;
        cout << "Menu de opções: " << endl;
        cout << "[1] Adicionar valores" << endl;
        cout << "[2] Retirar valores" << endl;
        cout << "[3] Mostrar Pilha" << endl;
        cout << "[4] Sair do programa" << endl;
        cout << "Qual operação você deseja realizar?";
        cin >> opcao;

        if (opcao==1){
            while(true){
                int elemento;
                cout << "Adicione um número inteiro desejado: ";
                cin >> elemento;
                pilhaA.adicionar_valor(elemento);
                cout << "Deseja continuar?" << endl;
                cout << "Digite 0 para parar. Digite 1 para continuar:";
                cin >> continuar_interno_add;
                if(continuar_interno_add == 0){
                    cout << "Encerrando adições de valores" << endl;
                    break;
                }
            }
        }
        else if (opcao==2){
            int removido = pilhaA.remover_valor();
            if (removido != -1) { // Verifica se não estava vazia
                cout << "Elemento " << removido << " removido com sucesso!" << endl;
            }
        }
        else if (opcao==3){
            pilhaA.mostrar_pilha();
        }
        else if (opcao==4){
            cout << "Encerrando o programa..." << endl;
            break;
        }
    }

    pilhaA.mostrar_pilha();

    return 0;
}