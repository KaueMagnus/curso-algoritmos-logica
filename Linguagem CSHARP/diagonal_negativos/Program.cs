using System.Globalization;

internal class Program
{
    private static void Main(string[] args)
    {

        CultureInfo CI = CultureInfo.InvariantCulture;

        int ordemMatriz, contadorNegativos;


        Console.Write("Qual a ordem da matriz: ");
        ordemMatriz = int.Parse(Console.ReadLine());


        int[,] matriz = new int[ordemMatriz, ordemMatriz];


        for (int i = 0; i < ordemMatriz; i++)
        {
            for (int j = 0; j < ordemMatriz; j++)
            {
                Console.Write("Elemento [" + i + "," + j + "]: ");
                matriz[i, j] = int.Parse(Console.ReadLine());
            }
        }


        Console.WriteLine("Diagonal Principal:");

        for (int i = 0; i < ordemMatriz; i++)
        {
            Console.Write(matriz[i, i] + " ");  
        }

        Console.WriteLine();

        contadorNegativos = 0;

        for (int i = 0; i < ordemMatriz; i++)
        {
            for (int j = 0; j < ordemMatriz; j++)
            {
                if (matriz[i, j] < 0)
                {
                    contadorNegativos++;
                }
            }
        }

        Console.Write("Quantidade de negativos: " + contadorNegativos);
    }
}