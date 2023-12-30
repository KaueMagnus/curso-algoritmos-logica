//No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir.
//Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual foi a maior.

using System.Globalization;

internal class Program
{
    private static void Main(string[] args)
    {

        CultureInfo CI = CultureInfo.InvariantCulture;

        double tentativa1, tentativa2, tentativa3, maior;

        Console.WriteLine("Digite as três distâncias:");
        tentativa1 = double.Parse(Console.ReadLine(), CI);
        tentativa2 = double.Parse(Console.ReadLine(), CI);
        tentativa3 = double.Parse(Console.ReadLine(), CI);

        if (tentativa1 > tentativa2 && tentativa1 > tentativa3)
        {
            maior = tentativa1;
        }
        else if (tentativa2 > tentativa1)
        {
            maior = tentativa2;
        }
        else
        {
            maior = tentativa3;
        }

        Console.Write("Maior distância: " + maior.ToString("F2", CI));

    }
}