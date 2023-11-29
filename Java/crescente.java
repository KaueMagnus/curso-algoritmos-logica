import java.util.Locale;
import java.util.Scanner;

public class crescente {
    public static void main(String[] args) {


        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);

        int num1, num2;

        System.out.println("Digite dois números: ");
        num1 = input.nextInt();
        num2 = input.nextInt();

        while (num1 != num2) {
            if (num1 < num2) {
                System.out.println("CRESCENTE");
            } else {
                System.out.println("DECRESCENTE");
            }
            System.out.println("Digite outros dois numeros: ");
            num1 = input.nextInt();
            num2 = input.nextInt();
        }

        System.out.println("Programa encerrado!");

        input.close();
    }
}
