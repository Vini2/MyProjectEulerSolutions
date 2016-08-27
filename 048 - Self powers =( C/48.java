
import java.math.BigInteger;

class Q48 {

    static BigInteger sum = new BigInteger("0");

    public static void main(String[] args) {

        for (int i = 1; i < 1001; i++) {
            String i1 = i+"";
            BigInteger a = new BigInteger(i1);
            BigInteger a_pow = a.pow(i);
            
            sum = sum.add(a_pow);
        }

        System.out.println(sum);

        String last = sum.toString();
        
        String[] last_array = last.split("");
        
        int last_array_length = last_array.length;
        
        System.out.print("Last ten digits of the series - ");
        
        for (int i = last_array_length-10; i < last_array_length; i++) {
            System.out.print(last_array[i]);
        }
        System.out.println("");
    }
}
