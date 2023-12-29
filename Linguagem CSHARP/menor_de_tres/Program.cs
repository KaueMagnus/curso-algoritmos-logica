using System;
using System.Globalization;

internal class Program
{
    private static void Main(string[] args)
    {

        CultureInfo CI = CultureInfo.InvariantCulture;

        int num1, num2, num3;
        int menor = 0;

        Console.WriteLine("Digite o primeiro valor: ");
        num1 = int.Parse(Console.ReadLine());
        Console.WriteLine("Digite o segundo valor: ");
        num2 = int.Parse(Console.ReadLine());
        Console.WriteLine("Digite o terceiro valor: ");
        num3 = int.Parse(Console.ReadLine());

        if (num1 < num2 && num1 < num3)
        {
            menor = num3
        }
        else if (num2 > num1 &&)
        {
            //CONTINUAR AQUI
        }

    }
}