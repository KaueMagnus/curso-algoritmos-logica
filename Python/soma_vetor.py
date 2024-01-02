'''Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida: - Imprimir todos os elementos do vetor
- Mostrar na tela a soma e a média dos elementos do vetor'''

soma = float(0)
media = float(0)

quantidadeNumeros = int(input("Quantos numeros voce vai digitar? "))

vetor = [0 for x in range(quantidadeNumeros)]

for i in range(0, quantidadeNumeros):
    vetor[i] = float(input("Digite um numero: "))

print()
print("Valores: ", end="")

for i in range(0, quantidadeNumeros):
    print(f"{vetor[i]:.1f} ", end="")

print()
#CALCULANDO A SOMA DO VETOR
for i in range(quantidadeNumeros):
    soma += float(vetor[i])

#CALCULANDO A MEDIA DO VETORt
for i in range(quantidadeNumeros):
    media = float(soma / quantidadeNumeros)

print(f"Soma: {soma:.2f}")
print(f"Média: {media:.2f}")    
