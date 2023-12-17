import java.math.BigInteger;

class Q57 {

    public static void main(String[] args) {
        
        int count = 0;

        BigInteger a = new BigInteger("3");
        BigInteger b = new BigInteger("2");
        
        for (int i = 1; i < 1000; i++) {
            
            BigInteger c = a;
            a = a.add(b.multiply(new BigInteger("2")));
            b = b.add(c);
            
            String[] a1 = a.toString().split("");
            String[] b1 = b.toString().split("");
            
            if(a1.length>b1.length){
                ++count;
            }
            
        }
        
        System.out.println("The number of fractions that contain a numerator with more digits than denominator - "+count);
        
    }
}
