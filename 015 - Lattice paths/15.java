import java.math.BigInteger;

class A {

    static BigInteger i1 = BigInteger.ONE;
    static BigInteger i2 = BigInteger.ONE;

    public static void main(String[] args) {

        BigInteger a = new BigInteger("40");
        for (int j = 0; j < 40; j++) {
            i1 = i1.multiply(a);
            a = a.subtract(BigInteger.ONE);
        }

        BigInteger b = new BigInteger("20");
        for (int j = 0; j < 20; j++) {
            i2 = i2.multiply(b);
            b = b.subtract(BigInteger.ONE);
        }

        BigInteger k = (i1.divide(i2)).divide(i2);
        
        System.out.println("40! = "+i1);
        System.out.println("20! = "+i2);
        
        System.out.println("No. of routes in a 20×20 grid = "+k); //137846528820

    }
}