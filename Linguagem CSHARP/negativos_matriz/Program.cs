//Ler dois números M e N (máximo = 10), e depois ler uma matriz MxN de números inteiros, conforme exemplo.
//Em seguida, mostrar na tela somente os números negativos da matriz.

internal class Program
{
    private static void Main(string[] args)
    {
        int linhas, colunas;

        Console.Write("Qual a quantidade de linhas da matriz? ");
        linhas = int.Parse(Console.ReadLine());
        Console.Write("Qual a quantidade de colunas da matriz? ");
        colunas = int.Parse(Console.ReadLine());

        int[,] matriz = new int[linhas, colunas];

        for (int i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                Console.Write("Elemento [" + i + "," + j + "]: ");
                matriz[i, j] = int.Parse(Console.ReadLine());
            }
        }

        Console.WriteLine("Valores negativos: ");

        Console.WriteLine();

        for (int i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                if (matriz[i, j] < 0)
                {
                    Console.WriteLine(matriz[i, j]);
                }
            }
        }
    }
}