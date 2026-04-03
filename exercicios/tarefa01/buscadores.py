import random

def gerador_lista_aleatoria(qnt):
    return [random.randrange(0, 100) for x in range(0, qnt)]



# =============================================================
# ALGORITMO DE BUSCA SEQUENCIAL 1
# Ele tem duas verificações:
# a) A verificação se o iterador é menor ou igual ao tamanho da
#  lista em que ele procura
# b) se o item da lista é o item que ele procura
# ==============================================================
def buscador_de_indice1(numero_procurado, l):
    i = 0
    buscador = -1
    iteracao = 0
    while i <= len(l) - 1:
        if l[i] == numero_procurado:
            buscador = i
            i = len(l) + 1 #para sair do laço
        else:
            i += 1
        iteracao +=1 
        
    return buscador, iteracao # retorna índice que se achou número escolhido na lista (1a ocorrência)


# =============================================================
# ALGORITMO DE BUSCA SEQUENCIAL 2
# Ele tem somente a verificação se o iterador está na posição do
# número procurado 
# ==============================================================
def buscador_de_indice2(numero_procurado, l):
    l.append(numero_procurado) #adiciona um elemento ao final da fila
    i = 0
    while l[i] != numero_procurado:
        i += 1
    if i != len(l)-1:
        buscador = i
    else:
        buscador = -1 #elemento não existente na lista
    l.pop()

    return buscador, i+1
