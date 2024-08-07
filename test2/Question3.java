// exponential function base e in radians

// no need to explicitly import any classes. The Math library required is included in Java by default
// import java.lang.Math;

// no need to define any PI variable since one is already provided by Java

public class Question3 {

    // custom function for converting degrees to radians
    public static double convertDegreesToRadians(double x) {
        return Math.PI * x / 180;
    }

    public static void main(String[] args) {

        // counter for looping through the numbers (represented in degrees) within the
        // given range
        for (int i = 0; i < 13; i++) {
            double degreesInRadians = convertDegreesToRadians(i);

            // print out the calculated results
            System.out.printf("%d degrees => %f radians:\n", i, degreesInRadians);

            System.out.printf("exp %f => %f\n", degreesInRadians, Math.exp(degreesInRadians));
        }
    }

}
