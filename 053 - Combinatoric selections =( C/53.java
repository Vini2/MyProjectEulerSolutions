
import java.math.BigInteger;

class Q53 {

    static int count1 = 0;

    public static void main(String[] args) {


        for (int i = 1; i < 101; i++) {

            for (int j = 1; j < 101; j++) {

                int n = i;
                int r = j;

                if (r > (n - r)) {
                    int a = r + 1;
                    BigInteger fac = BigInteger.ONE;
                    while (a <= i) {
                        fac = fac.multiply(new BigInteger(a + ""));
                        ++a;
                    }

                    int a1 = n - r;
                    BigInteger fac1 = BigInteger.ONE;
                    while (a1 > 0) {
                        fac1 = fac1.multiply(new BigInteger(a1 + ""));
                        --a1;
                    }

                    BigInteger result = fac.divide(fac1);

                    if (result.compareTo(new BigInteger("1000000")) == 1) {
                        ++count1;
                    }

                } else {

                    int a = n - r + 1;
                    BigInteger fac = BigInteger.ONE;
                    while (a <= i) {
                        fac = fac.multiply(new BigInteger(a + ""));
                        ++a;
                    }

                    int a1 = r;
                    BigInteger fac1 = BigInteger.ONE;
                    while (a1 > 0) {
                        fac1 = fac1.multiply(new BigInteger(a1 + ""));
                        --a1;
                    }

                    BigInteger result = fac.divide(fac1);

                    if (result.compareTo(new BigInteger("1000000")) == 1) {
                        ++count1;
                    }
                }

            }

        }

        System.out.println("The number of not necessarily distinct, values of  nCr, for 1 <= n <= 100, which are greater than one-million = " + count1);

    }
}
