//Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de telefone.
//Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00.
//Fazer um programa para ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago.

using System;
using System.Globalization;

internal class Program
{
    private static void Main(string[] args)
    {

        CultureInfo CI = CultureInfo.InvariantCulture;

        int quantMinutos;
        double preco, taxaMinutos, minutosExcedentes;
        minutosExcedentes = 0;
        preco = 50;
        taxaMinutos = 2;

        Console.Write("Digite a quantidade de minutos: ");
        quantMinutos = int.Parse(Console.ReadLine());

        if (quantMinutos <= 100)
        {
            preco = 50;
        }
        else
        {
            minutosExcedentes = quantMinutos - 100;
            preco = 50 + (minutosExcedentes * taxaMinutos);
        }

        Console.Write("Valor a pagar: R$ " + preco.ToString("F2", CI));
    }
}