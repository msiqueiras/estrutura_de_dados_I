/*
Implementação de uma fila linear simples. Essa fila é descartável,
os índices só andam pra direita, não há como usar o espaço de memória
quando os índices atingem o fim do vetor.
*/

#include <iostream>
using namespace std;
#define M 5

struct Queue{
    int vector[M] = {0};
    int head;
    int rear;
};

void init(Queue &q){
    q.head = 0;
    q.rear = 0;
}

bool isFull(Queue &q){
    if (q.rear==M-1){
        return true;
    } else{
        return false;
    }
}

bool isEmpty(Queue &q){
    if (q.head == q.rear){
        return true;
    } else{
        return false;
    }
}

void enqueue(Queue &q, int value){
    if (isFull(q) == true){
        cout << "ERROR. Queue is full!" << endl;
    } else{
        q.vector[q.rear] = value;
        cout << "The value " << value << " was enqueue in " << q.rear << " position" << endl;
        q.rear++;
    }
}

int dequeue(Queue &q){
    if (isEmpty(q) == true){
        cout << "ERROR. Queue is empty";
    } else{
        int v = q.vector[q.head];
        q.vector[q.head] = 0;
        q.head++;
        cout << "The value " << v << " was dequeue" << endl;
        return v;
    }
}

void print(Queue &q){
    cout << "[";
    for (int i = 0; i < M; i++){
        cout << q.vector[i] << ", ";
    }
    cout << "]";
}

int main() {
    Queue q;
    init(q);
    int option, value;

    do {
        cout << "\n--- MENU LINEAR QUEUE [NO 0]---" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Print queue" << endl;
        cout << "0. Exit" << endl;
        cout << "Choice: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Valor: "; cin >> value;
                enqueue(q, value);
                break;
            case 2:
                dequeue(q);
                break;
            case 3:
                print(q);
                break;
        }
    } while (option != 0);

    return 0;
}
