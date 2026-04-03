import buscadores
import random
import time

continuar = 1
while continuar != 0:
    qnt_elementos = int(input('Digite a quantidade de elementos desejados na lista [1000-1000000]:'))
    lista = buscadores.gerador_lista_aleatoria(qnt_elementos)
    numero_procurado = random.randrange(0, 100)
    print('Número a ser procurado:', numero_procurado)

    # ----------------------------------------
    # APLICAÇÃO DO 1º ALGORITMO 
    # ----------------------------------------
    inicio1 = time.perf_counter()
    tupla_resultado1 = buscadores.buscador_de_indice1(numero_procurado, lista)
    fim1 = time.perf_counter()
    print('========== APLICAÇÃO DO 1º ALGORITMO ==========')
    print(f'A primeira ocorrência do número {numero_procurado} foi na posição {tupla_resultado1[0]}')
    print('Número de iterações até encontrar o número:', tupla_resultado1[1])
    print(f'Tempo para rodar o algoritmo 1: {(fim1-inicio1):.9f} s')


    # ----------------------------------------
    # APLICAÇÃO DO 2º ALGORITMO 
    # ----------------------------------------

    inicio2 = time.perf_counter()
    tupla_resultado2 = buscadores.buscador_de_indice2(numero_procurado, lista)
    fim2 = time.perf_counter()
    print('========== APLICAÇÃO DO 2º ALGORITMO ==========')
    print(f'A primeira ocorrência do número {numero_procurado} foi na posição {tupla_resultado2[0]}')
    print('Número de iterações até encontrar o número:', tupla_resultado2[1])
    print(f'Tempo para rodar o algoritmo 1: {(fim2-inicio2):.9f} s')

    continuar = int(input('Digite 0 para parar:'))

# ====================================================
# DISCUSSÕES
# O algoritmo 1 normalmente demora mais tempo,em
# questão de nanossegundos por causa das duas con-
# dicionais (uma do while e outra do if/else) que
# o 2º algoritmo, que realiza somente uma condicional
# =====================================================
