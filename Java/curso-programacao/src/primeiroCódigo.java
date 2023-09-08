import java.util.Locale;

public class primeiroCódigo {

    public static void main(String[] args) {
        Locale.setDefault(Locale.US);

        int idade;
        double salario;
        String nome;
        char sexo;

        idade = 19;
        salario = 9850.90;
        nome = "Kaue Magnus";
        sexo = 'M';

        System.out.printf("O funcionário " + nome + ", sexo " + sexo + ", ganha " + String.format("%.2f", salario) + " e tem " + idade + " anos");


        }
}
