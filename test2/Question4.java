// logarithmic base 8 function in radians

// no need to explicitly import any classes. The Math library required is included in Java by default
// import java.lang.Math;

// no need to define any PI variable since one is already provided by Java

public class Question4 {

    // custom function for converting degrees to radians
    public static double convertDegreesToRadians(double x) {
        return Math.PI * x / 180;
    }

    /*
     * custom function for finding logarithmic base 8 of a number
     * I had to create one because there was no log base 8 function provided by Java
     */
    public static float log8(double x) {
        return (float) (Math.log(x) / Math.log(8));
    }

    public static void main(String[] args) {

        for (int i = 0; i < 13; i++) {
            double degreesInRadians = convertDegreesToRadians(i);

            // print out the calculated results
            System.out.printf("%d degrees => %f radians:\n", i, degreesInRadians);

            System.out.printf("lig %f => %f\n", degreesInRadians, log8(degreesInRadians));
        }
    }

}
