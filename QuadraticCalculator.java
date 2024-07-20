import java.util.Scanner;


public class QuadraticCalculator {

	public static void main(String[] args) {
		float[] coefficients = GetCoefficients();
		
		CalculateRoots(coefficients);
	
	}
	
	public static float[] GetCoefficients() {
		
		float[] coefficients = new float[3];
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Please provide the roots of the quadratic equation:");
		
		System.out.print("a: ");
		coefficients[0] = scanner.nextFloat();
		
		scanner.nextLine();
		
		System.out.print("b: ");
		coefficients[1] = scanner.nextFloat();
		
		scanner.nextLine();
		
		System.out.print("c: ");
		coefficients[2] = scanner.nextFloat();
		
		scanner.nextLine();
		
		
		scanner.close();
		
		return coefficients;
	}
	
	public static void CalculateRoots(float[] coefficients) {
		
		// reassignment is not necessary; this just makes the code more readable
		float a = coefficients[0];
		float b = coefficients[1];
		float c = coefficients[2];
		
		double discriminant = Math.pow(b, 2) - (4 * a * c);
		
		// real and distinct roots
		if (discriminant > 0) {
			 double root1 = (-b + Math.sqrt(discriminant)) / (2 * a);
			 double root2 = (-b - Math.sqrt(discriminant)) / (2 * a);
			 
			 System.out.printf("\nThe roots of the equation are: %f and %f", root1, root2);
		}
		// complex roots
		else if (discriminant < 0) {
			double realPart = -b / (2 * a);
			double imagPart = Math.sqrt(Math.abs(discriminant)) / (2 * a);
			
			System.out.printf("\nThe roots of the equation are: %f + %fi and %f - %fi", realPart, imagPart, realPart, imagPart);
			
		}
		// real and equal roots
		else {
			double root = (-b + Math.sqrt(discriminant)) / (2 * a);
			 
			 System.out.printf("\nThe roots of the equation are: %f and %f", root, root);
			
		}
		
	}

}
