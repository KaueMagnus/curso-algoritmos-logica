import java.util.Scanner;

public class matrizes {
    public static void main(String[] args){

        Scanner input = new Scanner(System.in);

        int M, N;

        System.out.print("Quantas linhas vai ter a matriz? ");
        M = input.nextInt();
        System.out.print("Quantas colunas vai ter a matriz? ");
        N = input.nextInt();

        int[][] mat = new int[M][N];

        for(int i = 0; i < M; i++) {
            for(int j = 0; j < N; j++) {
                System.out.print("Elemento [" + i + "," + j + "]: ");
                mat[i][j] = input.nextInt();
            }
        }
        System.out.println("MATRIZ DIGITADA:");

        for(int i = 0; i < M; i++) {
            for(int j = 0; j < N; j++) {
                System.out.print(mat[i][j] + " ");
            }
            System.out.println();
        }

        input.close();
    }
}
