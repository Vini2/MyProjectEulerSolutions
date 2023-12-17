
import java.math.BigInteger;

class Q56 {

    static int max = 0;

    public static void main(String[] args) {

        for (int i = 1; i < 100; i++) {
            for (int j = 1; j < 100; j++) {

                String i1 = i + "";
                BigInteger a = new BigInteger(i1);
                BigInteger a_pow = a.pow(j);                    //Calculate i^j

                String[] num1 = a_pow.toString().split("");

                int sum = 0;

                for (int k = 0; k < num1.length; k++) {
                    int n = Integer.parseInt(num1[k]);          //Calculate the digit sum
                    sum += n;
                }

                if (sum > max) {                                  //Determine the maximum digit sum
                    max = sum;
                }

            }
        }

        System.out.println("The maximum digital sum = " + max);

    }
}
