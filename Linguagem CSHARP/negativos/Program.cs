//Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros e armazene-os em um vetor.
//Em seguida, mostrar na tela toddos os números negativos lidos.

internal class Program
{
    private static void Main(string[] args)
    {
        int quantNumeros;

        Console.Write("Quantos numeros voce vai digitar? ");
        quantNumeros = int.Parse(Console.ReadLine());

        int[] listaNumeros = new int[quantNumeros];

        for (int i = 0; i < quantNumeros; i++)
        {
            Console.Write("Digite um numero: ");
            listaNumeros[i] = int.Parse(Console.ReadLine());
        }

        Console.WriteLine("Numeros negativos:");
        for (int i = 0; i < quantNumeros; i++)
        {
            if (listaNumeros[i] < 0)
            {
                Console.WriteLine(listaNumeros[i]);
            }
        }

    }
}