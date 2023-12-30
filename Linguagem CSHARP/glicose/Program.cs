//Fazer um programa para ler a quantidade de glicose no sangue de uma pessoa e depois
//mostrar na tela a classificação desta glicose de acordo com a tabela de referência ao lado.
//Normal = até 100mg/dl    Elevado = maior que 100 até 140mg/dl     Diabetes = maior de 140mg/dl.

using System.Globalization;

internal class Program
{
    private static void Main(string[] args)
    {

        CultureInfo CI = CultureInfo.InvariantCulture;

        double medidaGlicose;

        Console.Write("Digite a medida da glicose: ");
        medidaGlicose = double.Parse(Console.ReadLine(), CI);

        if (medidaGlicose <= 100)
        {
            Console.Write("Classificação: normal");
        }
        else if (medidaGlicose <= 140)
        {
            Console.Write("Classificação: elevada");
        }
        else
        {
            Console.Write("Classificação: diabetes");
        }
    }
}