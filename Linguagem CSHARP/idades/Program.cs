﻿using System.Globalization;

internal class Program
{
    private static void Main(string[] args)
    {

        CultureInfo CI = CultureInfo.InvariantCulture;

        string nome1, nome2;
        int idade1, idade2;
        double media;

        Console.WriteLine("Dados da primeira pessoa:");

        Console.Write("Nome: ");
        nome1 = Console.ReadLine();
        Console.Write("Ïdade: ");
        idade1 = int.Parse(Console.ReadLine());

        Console.WriteLine("Dados da segunda pessoa:");

        Console.Write("Nome: ");
        nome2 = Console.ReadLine();
        Console.Write("Ïdade: ");
        idade2 = int.Parse(Console.ReadLine());

        media = (idade1 + idade2) / 2.0;

        Console.WriteLine();
        //CONTINUAR AQUI...

    }
}