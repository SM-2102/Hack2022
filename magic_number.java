import java.util.*;

//each row, column or diagonal adds to n(n^2 + 1)/2
public class magic_number {

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        int n;

        //user prompt
        System.out.print("Enter the order of the Magic Square: ");
        n = sc.nextInt();
        System.out.println("The " + n + " * " + n + " Magic Square is: ");

        //checking whether the magic square is even or odd
        if (n % 2 == 0) {
            even_magic(n);
        }        else {
            odd_magic(n);
        }
        sc.close();

    }

    //for even magic number square
    public static void even_magic(int n) {
        int k = 1;
        int temp = 0;
        
        //declaring a double dimension array
        int a[][] = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = k;
                k++;
            }
        }
        for (int i = 0; i < (n / 2); i++) {
            temp = a[i][n - 1 - i];
            a[i][n - 1 - i] = a[n - 1 - i][i];
            a [n - 1 - i][i] = temp;
        }
        for (int i = 0; i < (n / 2); i++) {
            temp = a[i][i];
            a[i][i] = a[n - 1 - i][n - 1 - i];
            a [n - 1 - i][n - 1 - i] = temp;
        }

        //printing the square
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.printf("%2d", a[i][j]);
                System.out.print("\t");
            }
            System.out.println();
        }

    }

    //for odd magic number square
    public static void odd_magic(int n) {
        int k = 1;
        int c = 1;
        
        //declaring a double dimension array
        int a[][] = new int[n][n];
        int i = n + 1;
        int j = (n / 2) - 1;
        while (k < ((n * n) + 1)) {
            if (c == (n + 1)) {
                i = (i + 1) % n;
                c = 1;
            }            else {
                i = (i - 1) % n;
                j = (j + 1) % n;
            }
            if (i == -1) {
                i = n - 1;
            } 
            a[i][j] = k;
            k++;
            c++;
        }

        //printing the square
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                System.out.printf("%2d", a[i][j]);
                System.out.print("\t");
            }
            System.out.println();
        }


    }
}