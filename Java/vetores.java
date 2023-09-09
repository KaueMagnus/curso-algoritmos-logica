import java.util.Locale;
import java.util.Scanner;

public class vetores {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);

        int N;

        System.out.print("Quantos numeros voce vai digitar? ");
        N = input.nextInt();

        double[] vet = new double[N];

        for (int i = 0; i < N; i++) {
            System.out.print("Digite um numero: ");
            vet[i] = input.nextDouble();
        }

        System.out.println("NUMEROS DIGITADOS:");
        for (int i = 0; i < N; i++) {
            System.out.println(String.format("%.2f", vet[i]));
        }

        input.close();
    }

}
