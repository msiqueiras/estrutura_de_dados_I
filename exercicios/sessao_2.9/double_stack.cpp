/*
2.7 Criar algoritmos de inserção e remoção para duas pilhas armazenadas em alocação sequencial que compartilham a
memória de dimensão M.
*/

#include <iostream>
#define MAX 5 //Tamanho máximo de memória
using namespace std;



struct DoubleStack{
    int vector[MAX];
    int size;
    int top1;
    int top2;
};

void init(DoubleStack &d){
    d.top1 = -1;
    d.top2 = MAX;
    d.size = 0;
}

bool isFull(DoubleStack &d){
    if (d.top1 == d.top2-1){
        return true;
    } else{
        return false;
    }
}

void insertTop1(DoubleStack &d, int value){
    if (isFull(d) == true){
        cout << "This deque is full now" << endl;
    } else{
        d.top1++;
        d.vector[d.top1] = value;
        cout << value << " was inserted in " << d.top1 << " position" << endl;
        d.size++;
    }
}

void insertTop2(DoubleStack &d, int value){
    if (isFull(d) == true){
        cout << "ERROR. This deque is full." << endl;
    } else{
        d.top2--;
        d.vector[d.top2] = value;
        cout << value << " was inserted in " << d.top2 << " position" << endl;
        d.size++;
    }
}

int removeTop1(DoubleStack &d){
    if (d.top1 == -1){
        cout << "ERROR. This deque is empty in frontside." << endl;
        return -1;
    } else{
        int v = d.vector[d.top1];
        d.top1--;
        d.size--;
        return v;
    }
}

int removeTop2(DoubleStack &d){
    if (d.top2 == MAX){
        cout << "ERROR. This deque is empty in backside." << endl;
        return -1;
    } else{
        int v = d.vector[d.top2];
        d.top2++;
        d.size--;
        return v;
    }
}

int size_stack(DoubleStack &d){ 
    return d.size;
}

void print(DoubleStack &d){
    cout << "[ ";
    for (int i = 0; i < MAX; i++){
        if (i <= d.top1 || i >= d.top2) {
            cout << d.vector[i];
        } else {
            cout << "?"; // Indica espaço vazio/disponível
        }
        
        if (i < MAX - 1) cout << ", ";
    }
    cout << " ]" << endl;
}

int main() {
    DoubleStack d;
    init(d);
    int option, value;

    do {
        cout << "\n--- MENU DOUBLE-STACK ---" << endl;
        cout << "1. Insert Front (E1)" << endl;
        cout << "2. Insert Back (E2)" << endl;
        cout << "3. Remove Front" << endl;
        cout << "4. Remove Back" << endl;
        cout << "5. Print Deque" << endl;
        cout << "0. Exit" << endl;
        cout << "Choice: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Value: "; cin >> value;
                insertTop1(d, value);
                break;
            case 2:
                cout << "Value: "; cin >> value;
                insertTop2(d, value);
                break;
            case 3:
                value = removeTop1(d);
                if (value != -1) cout << "Removed: " << value << endl;
                break;
            case 4:
                value = removeTop2(d);
                if (value != -1) cout << "Removed: " << value << endl;
                break;
            case 5:
                print(d);
                break;
        }
    } while (option != 0);

    return 0;
}