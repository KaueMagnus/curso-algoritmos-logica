import java.util.Locale;
import java.util.Scanner;

public class soma_vetor {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);

        int limite;
        double soma, media;
        soma = 0;
        media = 0;

        System.out.println("Quantos numeros voce vai digitar? ");
        limite = input.nextInt();

        double[] vet = new double[limite];

        for (int i = 0; i < limite; i++) {
            System.out.println("Digite um numero: ");
            vet[i] = input.nextDouble();
        }

        for (int i = 0; i < limite; i++) {
            soma += vet[i];
        }

        media = soma / limite;

        System.out.print("VALORES = ");
        for (int i = 0; i < limite; i++) {
            System.out.print("\t  " + String.format("%.1f", vet[i]));
        }

        System.out.println("\nSOMA = " + String.format("%.2f", soma));
        System.out.println("MEDIA = " + String.format("%.2f", media));

        input.close();
    }
}
