'''Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números impares entre eles.'''

print("Digite dois numeros:")
x = int(input())
y = int(input())

soma = int(0)

if x > y:
    troca = x
    x = y
    y = troca

for i in range (x + 1, y):

    if i % 2 != 0:
        soma += i

print(f"Soma dos impares: {soma}")

