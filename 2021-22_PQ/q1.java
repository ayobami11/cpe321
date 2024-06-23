import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("First number: ");
        float number1 = scanner.nextFloat();
        scanner.nextLine();

        System.out.print("Second number: ");
        float number2 = scanner.nextFloat();
        scanner.nextLine();

        System.out.print("What arithmetic operation do you want to perform? ");
        char operator = scanner.nextLine().charAt(0);

        switch (operator) {
            case '+':
                System.out.printf("%f + %f = %f", number1, number2, number1 + number2);
                break;
            case '-':
                System.out.printf("%f - %f = %f", number1, number2, number1 - number2);
                break;
            case '*':
                System.out.printf("%f * %f = %f", number1, number2, number1 * number2);
                break;
            case '/':
                System.out.printf("%f / %f = %f", number1, number2, number1 / number2);
                break;
            default:
                System.out.println("Invalid operation.");
        }
    }
}