import java.util.Locale;
import java.util.Scanner;

public class calculadora {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);

        int operacao;
        double numero1, numero2;
        int restart;

        do {

        System.out.println("==============BEM VINDO==============");
        System.out.println("Escolha a operação que deseja fazer:");
        System.out.println("1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão");
        System.out.print("Digite o numero correspondente: ");
        operacao = input.nextInt();

        switch (operacao) {
            case 1:
                System.out.println("----SOMA----");
                System.out.print("Insira o valor 1: ");
                numero1 = input.nextDouble();
                System.out.print("Insira o valor 2: ");
                numero2 = input.nextDouble();
                double soma = numero1 + numero2;
                System.out.println("A soma dos números é " + String.format("%.2f", soma));
                break;

                case 2:
                    System.out.println("----SUBTRAÇÃO----");
                    System.out.print("Insira o valor 1: ");
                    numero1 = input.nextDouble();
                    System.out.print("Insira o valor 2: ");
                    numero2 = input.nextDouble();
                    double sub = numero1 - numero2;
                    System.out.println("A subtração dos números é " + String.format("%.2f", sub));
                break;

                case 3:
                    System.out.println("----MULTIPLICAÇÃO----");
                    System.out.print("Insira o valor 1: ");
                    numero1 = input.nextDouble();
                    System.out.print("Insira o valor 2: ");
                    numero2 = input.nextDouble();
                    double mult = numero1 * numero2;
                    System.out.println("A multiplicação dos números é " + String.format("%.2f", mult));
                break;

                case 4:
                    System.out.println("----DIVISÃO----");
                    System.out.print("Insira o valor 1: ");
                    numero1 = input.nextDouble();
                    System.out.print("Insira o valor 2: ");
                    numero2 = input.nextDouble();
                    if (numero1 != 0 && numero2 != 0) {
                        double div = numero1 / numero2;
                        System.out.println("A divisão dos números é " + String.format("%.2f", div));
                    }
                    else {
                        System.out.println("IMPOSSIVEL DIVIDIR POR 0!");
                    }
                break;

                default:
                System.out.println("OPERAÇÃO INVÁLIDA!!");

            }

            System.out.println("Deseja calcular novamente?\n1 - Sim\t\t2 - Não ");
            restart = input.nextInt();

        } while (restart == 1);

        System.out.println("Obrigado por participar!");
        System.out.println("ENCERRANDO PROGRAMA...");

    }
}
