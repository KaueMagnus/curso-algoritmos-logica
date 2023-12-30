//Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de uma disciplina anual.
//Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no ano juntamente com um texto explicativo.
//Caso a nota final do aluno seja inferior a 60.00, mostrar a mensagem "REPROVADO", conforme exemplos.


using System.Globalization;

internal class Program
{
    private static void Main(string[] args)
    {

        CultureInfo CI = CultureInfo.InvariantCulture;

        double nota1, nota2, soma;

        Console.Write("Digite a primeira nota: ");
        nota1 = double.Parse(Console.ReadLine());
        Console.Write("Digite a segunda nota: ");
        nota2 = double.Parse(Console.ReadLine());

        soma = (double)nota1 + nota2;

        if (soma >= 60)
        {
            Console.WriteLine("Nota final: " + soma.ToString("F1", CI));
        }
        else
        {
            Console.WriteLine("Nota final: " + soma.ToString("F1", CI));
            Console.WriteLine("Reprovado!");
        }
    }
}