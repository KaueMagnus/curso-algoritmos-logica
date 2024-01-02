'''Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N contendo números inteiros. 
Em seguida, mostrar a diagonal principal e a quantidade de valores negativos da matriz.'''

quantNegativos = int(0)

N = int(input("Qual a ordem da matriz? "))

matriz = [[0 for x in range(N)] for x in range(N)]

#Inserindo valores a matriz
for i in range(0, N):
    for j in range(0, N):
        matriz[i][j] = int(input(f"Elemento [{i},{j}]: "))


#Percorrendo a matriz e achando a diagonal
print("Diagonal principal:")

for i in range(0, N):
    print(f"{matriz[i][i]} ", end="")

print()

#Percorrendo a matriz para contar os numeros negativos.
for i in range(0, N):
    for j in range(0, N):
        if matriz[i][j] < 0:
            quantNegativos += 1

print(f"Quantidade de negativos: {quantNegativos}")