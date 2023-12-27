internal class Program
{
    private static void Main(string[] args)
    {


        int linhas, colunas;

        Console.Write("Quantas linhas vai ter a matriz? ");
        linhas = int.Parse(Console.ReadLine());

        Console.Write("Quantas colunas vai ter a matriz? ");
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

        Console.WriteLine();
        Console.WriteLine("Matriz Digitada:");

        for (int i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                Console.Write(matriz[i, j] + " ");
            }
            Console.WriteLine();
        }
}
}