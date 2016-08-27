class Q36 {

    static long n, num_begin, num_end;
    static int sum1=0, num;
    static boolean finale, palin, base_ten_palindromic, base_two_palindromic;

    public static void main(String[] args) {

        int sum = 0;

        for (int i = 1; i < 1000000; i++) {
            
            base_ten_palindromic = isPalindromicBase10(i);
            base_two_palindromic = isPalindromicBase2(i);

            if (base_ten_palindromic && base_two_palindromic) {
                sum = sum + i;
                System.out.println("Palindromic in base 10 and 2 --> " + i + "      Sum = "+sum);
            }
            
            System.gc();

        }

        System.out.println("Final Sum = "+sum);
        //Answer = 872187

    }

    static boolean isPalindromicBase10(long i1) {

        String ibin2 = i1+"";
        String a[] = ibin2.split("");
        
        for (int i = 1; i < a.length / 2 + 1; i++) {
            
            if (a[i].equals(a[a.length - i])) {
                palin = true;
            } else {
                palin = false;
                break;
            }
            
            
        }
        
        if (palin) {
            //System.out.println("Palindromic in base 10 --> "+ibin2);
            return true;
        }else{
            return false;
        }

    }

    static boolean isPalindromicBase2(long ibin1) {
        
        String ibin2 = Long.toBinaryString(ibin1);
        String a[] = ibin2.split("");
        
        for (int i = 1; i < a.length / 2 + 1; i++) {
            
            if (a[i].equals(a[a.length - i])) {
                palin = true;
            } else {
                palin = false;
                break;
            }
            
            
        }
        
        if (palin) {
            //System.out.println("Palindromic in base 2 --> "+ibin2);
            return true;
        }else{
            return false;
        }
        
        
        
    }
}
