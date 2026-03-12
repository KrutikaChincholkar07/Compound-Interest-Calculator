import java.util.Scanner;

public class CompoundInterest {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Principal Amount: ");
        double P = sc.nextDouble();

        System.out.print("Enter Rate of Interest: ");
        double R = sc.nextDouble();

        System.out.print("Enter Time (in years): ");
        double T = sc.nextDouble();

        double A = P * Math.pow((1 + R/100), T);
        double CI = A - P;

        System.out.println("Compound Interest = " + CI);

        sc.close();
    }
}
