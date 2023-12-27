using System.Globalization;

internal class Program
{
    private static void Main(string[] args)
    {
        CultureInfo CI = CultureInfo.InvariantCulture;

        double basee, altura, area, perimetro, diagonal;

        Console.Write("Digite a base do retangulo: ");
        basee = double.Parse(Console.ReadLine(), CI);
        Console.Write("Digite a altura do retangulo: ");
        altura = double.Parse(Console.ReadLine(), CI);

        area = basee * altura;
        perimetro = (2 * basee) + (2 * altura);
        diagonal = Math.Sqrt(Math.Pow(altura, 2) + (Math.Pow(basee, 2)));


        Console.WriteLine("Area: " + area.ToString("F4", CI));
        Console.WriteLine("Perimetro: " + perimetro.ToString("F4", CI));
        Console.WriteLine("Diagonal: " + diagonal.ToString("F4", CI));
    }
}