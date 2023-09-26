import java.util.Locale;
import java.util.Scanner;
import static java.lang.Math.pow;
import static java.lang.Math.sqrt;

public class retangulo {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);

        double base, altura;

        System.out.print("Insira a base do retangulo: ");
        base = input.nextDouble();

        System.out.print("Insira a altura do retangulo: ");
        altura = input.nextDouble();

        double area, perimetro, diagonal;
        area = base * altura;
        perimetro = 2 * (base + altura);
        diagonal = sqrt((pow(altura,2) + pow(base,2)));

        System.out.println("Area: " + String.format("%.4f", area));
        System.out.println("Perimetro: " + String.format("%.4f", perimetro));
        System.out.println("Diagonal: " + String.format("%.4f", diagonal));

    }
}
