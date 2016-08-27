import java.math.BigInteger;
import java.util.ArrayList;
import java.util.List;

class A {

    static List<String> l = new ArrayList<String>();
    static int in = 0;
    static BigInteger i = BigInteger.ONE;

    public static void main(String[] args) {

        BigInteger a = new BigInteger("2");
        System.out.println(a);

        for (int j = 1; j < 1001; j++) {
            i = i.multiply(a);
            
            //System.out.println(i);
        }

        System.out.println("2^1000 = " + i);

        String p = i + "";

        for(String r : p.split("", p.length()+1)) {
            l.add(r);
        }

        for (int j = 1; j < l.size(); j++) {
            in = in + Integer.parseInt(l.get(j));
            System.out.println(l.get(j));
        }

        System.out.println("Sum of the digits in the number 2^1000 = " + in); //1366

    }
}