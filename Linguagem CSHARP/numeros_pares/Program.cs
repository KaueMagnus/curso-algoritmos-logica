//Faça um programa que leia N números inteiros e armazene-os em um vetor.
//Em seguida, mostre na tela toddos os números pares, e também a quantidade de números pares.

internal class Program
{
    private static void Main(string[] args)
    {
        int quantNumeros, contadorPares;
        contadorPares = 0;

        Console.Write("Quantos numeros voce vai digitar? ");
        quantNumeros = int.Parse(Console.ReadLine());



        int[] listaNumeros = new int[quantNumeros];



        for (int i = 0; i < quantNumeros; i++)
        {
            Console.Write("Digite um numero: ");
            listaNumeros[i] = int.Parse(Console.ReadLine());
        }



        Console.WriteLine("Numeros Pares:");

        for (int i = 0; i < quantNumeros; i++)
        {
            if (listaNumeros[i] % 2 == 0)
            {
                contadorPares++;
                Console.Write(listaNumeros[i] + " ");
            }
        }

        Console.WriteLine();

        Console.Write("Quantidade de pares: " + contadorPares);
    }
}