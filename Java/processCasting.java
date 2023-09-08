import java.util.Locale;
import java.util.Scanner;

public class processCasting {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        String nome1, nome2;
        double salario1, salario2;
        int idade1, idade2;
        char sexo1, sexo2;

        System.out.print("Digite o nome da primeira pessoa: ");
        nome1 = sc.nextLine();
        System.out.print("Digite o salario da primeira pessoa: ");
        salario1 = sc.nextDouble();
        System.out.print("Digite a idade da primeira pessoa: : ");
        idade1 = sc.nextInt();
        System.out.print("Digite o sexo (F/M): ");
        sexo1 = sc.next().charAt(0);

        System.out.print("Digite o nome da segunda pessoa: ");
        sc.nextLine();
        nome2 = sc.nextLine();
        System.out.print("Digite o salario da segunda pessoa: ");
        salario2 = sc.nextDouble();
        System.out.print("Digite a idade da segunda pessoa: ");
        idade2 = sc.nextInt();
        System.out.print("Digite o sexo (F/M): ");
        sexo2 = sc.next().charAt(0);

        System.out.println("Nome 1: " + nome1);
        System.out.println("Salario 1: " + String.format("%.2f", salario1));
        System.out.println("Idade 1: " + idade1);
        System.out.println("Sexo 1: " + sexo1);
        System.out.println("===============================");
        System.out.println("Nome 2: " + nome2);
        System.out.println("Salario 2: " + String.format("%.2f", salario2));
        System.out.println("Idade 2: " + idade2);
        System.out.println("Sexo 2: " + sexo2);

        sc.close();
    }
}