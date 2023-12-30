
using System.Globalization;

internal class Program
{
    private static void Main(string[] args)
    {

        CultureInfo CI = CultureInfo.InvariantCulture;

        int num1, num2, troca, soma;
        soma = 0;

        Console.WriteLine("Digite dois numeros:");
        num1 = int.Parse(Console.ReadLine());
        num2 = int.Parse(Console.ReadLine());

        if (num1 > num2)
        {
            troca = num1;
            num1 = num2;
            num2 = troca;
        }

        for (int i = num1 + 1; i < num2; i++)
        {
            if (i % 2 != 0)
            {
                soma = soma + i;
            }
        }

        Console.WriteLine("Soma dos impares: " + soma);
    }
}