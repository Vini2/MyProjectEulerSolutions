
import java.math.BigInteger;


class Q65 {

    public static void main(String[] args) {

        BigInteger a[] = new BigInteger[101];
        
        int sum = 0;
        
        for (int i = 0; i < 101; i++) {
            a[i] = BigInteger.ZERO;
        }

        a[0] = new BigInteger("2");
        a[1] = new BigInteger("3");
        
        BigInteger m = new BigInteger("2");

        for (int i = 2; i < 99; i += 3) {

            a[i] = m.multiply(a[i - 1]).add(a[i - 2]);
            a[i + 1] = a[i].add(a[i - 1]);
            a[i + 2] = a[i + 1].add(a[i]);

            m = m.add(new BigInteger("2"));

        }
        

        for (int i = 0; i < 101; i++) {
            System.out.println((i+1)+" - "+a[i]);
        }
        
        System.out.println("\nThe 100th convergent = "+a[a.length-2]);
        
        String nums[] = a[a.length-2].toString().split("");
        
        for (int i = 1; i < nums.length; i++) {
            sum+=Integer.parseInt(nums[i]);
        }
        
        System.out.println("\nThe sum of the digits of the 100th convergent = "+sum);

    }
}
