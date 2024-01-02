'''Fazer um programa para ler as medidas da base e altura de um retângulo. 
Em seguida, mostrar o valor da area, perimetro e diagonal deste retangulo, com quatro casas decimais, conforme exemplos.'''

import math

base = float(input("Base do retangulo: "))
altura = float(input("Altura do retangulo: "))

area = float(base * altura)
perimetro = float((2 * base) + (2 * altura))
diagonal = float(math.sqrt(base**2 + altura**2))

print(f"Area: {area:.4f}")
print(f"Perimetro: {perimetro:.4f}")
print(f"Diagonal: {diagonal:.4f}")
