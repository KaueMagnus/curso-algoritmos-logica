import java.util.Locale;
import java.util.Scanner;

public class idades {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);

        String nome1, nome2;
        int idade1, idade2;

        System.out.println("Dados da primeira pessoa:");
        System.out.print("Nome: ");
        nome1 = input.nextLine();
        System.out.print("Idade: ");
        idade1 = input.nextInt();

        System.out.println("Dados da segunda pessoa:");
        System.out.print("Nome: ");
        nome2 = input.nextLine();
        System.out.print("Idade: ");
        idade2 = input.nextInt();

        float media;
        media = (idade1 + idade2) / 2;

        System.out.print("A idade média de " + nome1 + " e " + nome2 + " é de " + String.format("%.1f", media) + " anos");

    }
}
