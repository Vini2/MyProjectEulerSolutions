
import java.util.HashSet;

class Q87 {

    public static void main(String[] args) {

        int b, i, j, k, n, m = 1;
        int a[] = new int[908];
        HashSet nums = new HashSet();

        a[0] = 2;

        for (b = 3; b <= 7071; b += 2) {

            if (isPrime(b)) {
                a[m] = b;
                ++m;
            }

        }

        for (i = 0; i < 908; i++) {

            for (j = 0; j < 908; j++) {

                if ((a[i] * a[i]) + (a[j] * a[j] * a[j]) >= 50000000) {
                    break;
                }

                for (k = 0; k < 908; k++) {

                    n = (a[i] * a[i]) + (a[j] * a[j] * a[j]) + (a[k] * a[k] * a[k] * a[k]);


                    if (n >= 50000000) {
                        break;
                    } else {
                        nums.add(n);
                    }



                }

            }

        }

        System.out.println("How many numbers below fifty million can be expressed as the sum of a prime square, prime cube, and prime fourth power? "+nums.size());

    }

    static boolean isPrime(int num) // Function to check whether a number is prime
    {
        boolean prime = true;

        if (num == 2) {
            prime = true;
        } else {
            for (int j = 2; j <= Math.sqrt(num); j++) {
                if (num % j == 0) {
                    prime = false;
                    break;
                }
            }
        }
        return prime;
    }
}
