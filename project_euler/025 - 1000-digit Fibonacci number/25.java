import java.math.BigInteger;

class A {

    public static void main(String[] args) {

        BigInteger a = new BigInteger("1");
        BigInteger b = new BigInteger("1");
        BigInteger c = new BigInteger("1");
        BigInteger max = new BigInteger("10");
        max = max.pow(999);

        for (int i = 3; i > 0; i++) {

            c = a.add(b);
            a = b;
            b = c;

            if (c.compareTo(max) < 0) {
                //System.out.println(i+" - "+c);
            } else {
                //System.out.println(i+" - "+c);
                System.out.println("First term in the Fibonacci sequence to contain 1000 digits = "+i);
                break;
            }
        }
    }
}
