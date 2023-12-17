
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.List;

class A {

    static List<String> l = new ArrayList<String>();
    static int in = 0;
    static BigInteger i = BigInteger.ONE;

    public static void main(String[] args) {

        BigInteger a = (BigInteger.TEN).multiply(BigInteger.TEN);
        System.out.println(a);

        for (int j = 1; j < 101; j++) {
            i = i.multiply(a);
            a = a.subtract(BigInteger.ONE);
            System.out.println(a);
        }

        System.out.println("100! = " + i);

        String p = i + "";

        for (String r : p.split("", p.length())) {
            l.add(r);
        }

        for (int j = 1; j < l.size(); j++) {
            in = in + Integer.parseInt(l.get(j));
        }

        System.out.println("Sum of the digits in the number 100! = " + in);

    }
}