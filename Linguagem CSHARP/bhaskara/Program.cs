//Fazer um programa para ler os três coeficientes de uma equação do segundo grau.
//Usando a fórmula de Baskara, calcular e mostrar os valores das raízes x1 e x2 da equação com quatro casas decimais, conforme exemplo.
//Se a equação não possuir raízes reais, mostrar uma mensagem.


using System.Globalization;

internal class Program
{
    private static void Main(string[] args)
    {

        CultureInfo CI = CultureInfo.InvariantCulture;

        double coefA, coefB, coefC, delta, raiz, x1, x2;

        Console.Write("Coeficiente a: ");
        coefA = double.Parse(Console.ReadLine());
        Console.Write("Coeficiente b: ");
        coefB = double.Parse(Console.ReadLine());
        Console.Write("Coeficiente c: ");
        coefC = double.Parse(Console.ReadLine());

        delta = (coefB * coefB) - (4 * coefA * coefC);

        if (delta >= 0)
        {
            raiz = Math.Sqrt(delta);

            x1 = (double)((-(coefB)) + raiz) / (2 * coefA);
            x2 = (double)((-(coefB)) - raiz) / (2 * coefA);

            Console.Write("X1 = " + x1.ToString("F4", CI));
            Console.WriteLine();
            Console.Write("X2 = " + x2.ToString("F4", CI));
        }
        else
        {
            Console.WriteLine("Essa equaçao nao possui raizes reais");
        }
        
    }
}