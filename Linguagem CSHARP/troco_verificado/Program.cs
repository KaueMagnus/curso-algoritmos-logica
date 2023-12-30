//Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
//O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto, e o valor em dinheiro dado pelo cliente.
//Seu programa deve mostrar o valor do troco a ser devolvido ao cliente.
//Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o valor restante conforme exemplo.


using System.Globalization;

internal class Program
{
    private static void Main(string[] args)
    {

        CultureInfo CI = CultureInfo.InvariantCulture;

        double precoProduto, dinheiroRecebido, troco, precoTotal,faltaDinheiro;
        int quantidadeProdutos;

        Console.Write("Preço unitário do produto: ");
        precoProduto = double.Parse(Console.ReadLine());

        Console.Write("Quantidade comprada: ");
        quantidadeProdutos = int.Parse(Console.ReadLine());

        Console.Write("Dinheiro recebido: ");
        dinheiroRecebido = double.Parse(Console.ReadLine());

        precoTotal = (double)precoProduto * quantidadeProdutos;

        troco = (double)dinheiroRecebido - precoTotal;

        if (troco > 0)
        {
            Console.Write("Troco: R$" + troco.ToString("F2", CI));
        }
        else if (troco == 0)
        {
            Console.Write("Sem necessidade de troco!");
        }

        else
        {
            faltaDinheiro = (double)precoTotal - dinheiroRecebido;
            Console.Write("Dinheiro insuficiente, faltou R$" + faltaDinheiro.ToString("F2", CI));
        }

    }
}