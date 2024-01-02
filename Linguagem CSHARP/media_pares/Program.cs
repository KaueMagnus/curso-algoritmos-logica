//Fazer um programa para ler um vetor de N números inteiros.
//Em seguida, mostrar na tela a média aritmética somente dos números pares lidos, com uma casa decimal.
//Se nenhum número par for digitado, mostrar a mensagem "NENHUM NUMERO PAR"

using System.Globalization;

internal class Program
{
    private static void Main(string[] args)
    {

        CultureInfo CI = CultureInfo.InvariantCulture;

        int quantNumeros;
        double media, soma;
        soma = 0;
        media = 0;

        Console.Write("Quantos elementos vai ter o vetor? ");
        quantNumeros = int.Parse(Console.ReadLine());

        int[] vetor = new int[quantNumeros];

        for (int i = 0; i < quantNumeros; i++)
        {
            Console.Write("Digite um numero: ");
            vetor[i] = int.Parse(Console.ReadLine());
        }

        for (int i = 0; i < quantNumeros; i++)
        {
            if (vetor[i] % 2 == 0)
            {
                soma += vetor[i];
            }
            else
            {
                Console.Write("Nenhum numero par!");
            }
        }

    }
}