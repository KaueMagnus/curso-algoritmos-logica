using System.Globalization;

internal class Program
{
    private static void Main(string[] args)
    {

        CultureInfo CI = CultureInfo.InvariantCulture;

        int quantNumeros;
        

        Console.Write("Quantos numeros voce vai digitar? ");
        quantNumeros = int.Parse(Console.ReadLine());

        double[] vetor = new double[quantNumeros];

        for (int i = 0; i < quantNumeros; i++)
        {
            Console.Write("Digite um numero: ");
            vetor[i] = double.Parse(Console.ReadLine(), CI);

        }

        Console.WriteLine("Numeros digitados:");

        for (int i = 0; i < quantNumeros; i++)
        {
            Console.WriteLine(vetor[i].ToString("F1", CI));
        }

}
}