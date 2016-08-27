class A {

    static int i, a;
    static long sum = 0;

    public static void main(String[] args) {
        for (int n = 3; n < 2000000; n += 2) {

            for (i = 3; i < n; i += 2) {
                if (n % i == 0) {
                    System.out.println("Not a prime number..................... " + n);
                    break;
                }
            }
            if (i == n) {
                System.out.println("Prime Number " + n);
                sum += n;
            }
        }
        System.out.println("Sum : "+(sum+2));
    }
}