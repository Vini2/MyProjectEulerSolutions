
import java.math.BigInteger;

class Q43 {

    public static void main(String[] args) {

        BigInteger sum = BigInteger.ZERO;
        BigInteger i = new BigInteger("4100000000");
        
        while (i.compareTo(new BigInteger("9876543210")) == -1) {

            BigInteger i1 = i;

            String[] i_array = i1.toString().split("");

            if (Q43.isPandigital(i_array)) {

                BigInteger a = i1.mod(new BigInteger("1000"));

                if (a.mod(new BigInteger("17")) == BigInteger.ZERO) {
                    i1 = i1.divide(BigInteger.TEN);
                    BigInteger b = i1.mod(new BigInteger("1000"));

                    if (b.mod(new BigInteger("13")) == BigInteger.ZERO) {
                        i1 = i1.divide(BigInteger.TEN);
                        BigInteger c = i1.mod(new BigInteger("1000"));

                        if (c.mod(new BigInteger("11")) == BigInteger.ZERO) {
                            i1 = i1.divide(BigInteger.TEN);
                            BigInteger d = i1.mod(new BigInteger("1000"));

                            if (d.mod(new BigInteger("7")) == BigInteger.ZERO) {
                                i1 = i1.divide(BigInteger.TEN);
                                BigInteger e = i1.mod(new BigInteger("1000"));

                                if (e.mod(new BigInteger("5")) == BigInteger.ZERO) {
                                    i1 = i1.divide(BigInteger.TEN);
                                    BigInteger f = i1.mod(new BigInteger("1000"));

                                    if (f.mod(new BigInteger("3")) == BigInteger.ZERO) {
                                        i1 = i1.divide(BigInteger.TEN);
                                        BigInteger g = i1.mod(new BigInteger("1000"));

                                        if (g.mod(new BigInteger("2")) == BigInteger.ZERO) {
                                            i1 = i1.divide(BigInteger.TEN);
                                            System.out.println(i);
                                            sum = sum.add(i);
                                        }
                                    }
                                }
                            }
                        }

                    }


                }

            }
            
            i=i.add(BigInteger.ONE);

        }


        System.out.println("Sum = "+sum);


    }

    static boolean isPandigital(String[] num) {

        int n = 0;
        int[] a1 = {0,0,0,0,0,0,0,0,0,0};

        for (int i = 1; i < num.length; i++) {
            ++a1[Integer.parseInt(num[i])];
        }

        for (int i = 0; i < a1.length; i++) {
            if (a1[i]==1) {
                ++n;
            }
        }
        
        if (n==10) {
            return true;
        }else{
            return false;
        }
        
        
        
    }
}
