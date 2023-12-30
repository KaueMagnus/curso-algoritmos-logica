//Escreva um programa para ler as coordenadas (X, Y) de uma quantidade indeterminada de pontos no sistema cartesiano.
//Para cada ponto escrever o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4).
//O algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem escrever mensagem alguma).


using System.Globalization;

internal class Program
{
    private static void Main(string[] args)
    {

        CultureInfo CI = CultureInfo.InvariantCulture;

       double x, y;

        Console.WriteLine("Digite os valores das coordenadas X e Y: ");
        x = double.Parse(Console.ReadLine(), CI);
        y = double.Parse(Console.ReadLine(), CI);

        while(x != 0 && y != 0)
        {
            string quadrante;
            quadrante = "";

            if (x > 0 && y > 0)
            {
                quadrante = "Q1";
            }
            else if (x < 0 && y > 0)
            {
                quadrante = "Q2";
            }
            else if (x < 0 && y < 0)
            {
                quadrante = "Q3";
            }
            else if (x > 0 && y < 0)
            {
                quadrante = "Q4";
            }

            Console.Write("Quadrante: " + quadrante);

            Console.WriteLine(); //QUEBRA LINHA

            Console.WriteLine("Digite os valores das coordenadas X e Y:");
            x = double.Parse(Console.ReadLine(), CI);
            y = double.Parse(Console.ReadLine(), CI);

        }
        Console.Write("Numero 0 inserido! Programa encerrado...);
    }
}