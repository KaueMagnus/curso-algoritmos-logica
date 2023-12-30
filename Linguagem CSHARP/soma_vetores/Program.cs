using System.Globalization;

internal class Program
{
    private static void Main(string[] args)
    {

        CultureInfo CI = CultureInfo.InvariantCulture;

        int quantNumeros;
        double soma, media;
        soma = 0;
        media = 0;

        Console.Write("Quantos numeros você vai digitar: ");
        quantNumeros = int.Parse(Console.ReadLine());

        double[] vetor = new double[quantNumeros];

        for (int i = 0; i < quantNumeros; i++)
        {
            Console.Write("Digite um numero: ");
            vetor[i] = double.Parse(Console.ReadLine(), CI);
        }


        //CALCULO DA SOMA
        for (int i = 0; i < quantNumeros; i++)
        {
            soma += vetor[i];
        }


        //CALCULO DA MEDIA
        for (int i = 0; i < quantNumeros; i++)
        {
            media = (double) soma / quantNumeros;
        }

        //EXIBIR VALORES
        Console.WriteLine("Valores: ");
        for (int i = 0; i < quantNumeros; i++)
        {
            Console.Write(vetor[i] + " ");
        }

        Console.WriteLine();
        //EXIBIR A SOMA
        Console.Write("Soma: " + soma.ToString("F2", CI) + " ");
        

        Console.WriteLine();
        //EXIBIR A MÉDIA
        Console.Write("Média: " + media.ToString("F2", CI) + " ");
        

    }
}