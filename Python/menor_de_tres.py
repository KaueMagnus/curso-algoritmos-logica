'''Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três números lidos. 
Em caso de empate, mostrar apenas uma vez.'''

num1 = int(input("Primeiro valor: "))
num2 = int(input("Segundo valor: "))
num3 = int(input("Terceiro valor: "))

menor = 0

if num1 < num2 and num3:
    menor = num1

elif num2 < num1 and num3:
    menor = num2

else:
    menor = num3

print(f"Menor: {menor}")