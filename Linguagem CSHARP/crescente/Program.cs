using System.Globalization;

internal class Program
{
    private static void Main(string[] args)
    {

        CultureInfo CI = CultureInfo.InvariantCulture;

        int num1, num2;

        Console.WriteLine("Digite dois numeros:");
        num1 = int.Parse(Console.ReadLine());

        num2 = int.Parse(Console.ReadLine());

        while (num1 != num2)
        {

            if (num1 > num2)
            {
                Console.WriteLine("Decrescente!");
            }
            else
            {
                Console.WriteLine("Crescente!");
            }

            Console.WriteLine("Digite outros dois numeros:");
            num1 = int.Parse(Console.ReadLine());
            num2 = int.Parse(Console.ReadLine());

        }

        Console.WriteLine("Numeros iguais, programa encerrado!");

    }
}