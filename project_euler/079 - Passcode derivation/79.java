
import java.util.HashSet;

class Q79 {

    static HashSet before_0 = new HashSet();
    static HashSet before_1 = new HashSet();
    static HashSet before_2 = new HashSet();
    static HashSet before_3 = new HashSet();
    static HashSet before_4 = new HashSet();
    static HashSet before_5 = new HashSet();
    static HashSet before_6 = new HashSet();
    static HashSet before_7 = new HashSet();
    static HashSet before_8 = new HashSet();
    static HashSet before_9 = new HashSet();
    static HashSet after_0 = new HashSet();
    static HashSet after_1 = new HashSet();
    static HashSet after_2 = new HashSet();
    static HashSet after_3 = new HashSet();
    static HashSet after_4 = new HashSet();
    static HashSet after_5 = new HashSet();
    static HashSet after_6 = new HashSet();
    static HashSet after_7 = new HashSet();
    static HashSet after_8 = new HashSet();
    static HashSet after_9 = new HashSet();

    public static void main(String[] args) {

        int a[] = {319, 680, 180, 690, 129, 620, 762, 689, 762, 318, 368, 710, 720, 710, 629, 168, 160, 689, 716, 731, 736, 729, 316, 729, 729, 710, 769, 290, 719, 680, 318, 389, 162, 289, 162, 718, 729, 319, 790, 680, 890, 362, 319, 760, 316, 729, 380, 319, 728, 716};

        HashSet s = new HashSet();



        for (int i = 0; i < a.length; i++) {
            s.add(a[i]);
        }

        System.out.println(s.size());

        System.out.println(s);

        Object bb[] = s.toArray();

        String b[] = new String[33];

        for (int i = 0; i < b.length; i++) {
            b[i] = bb[i].toString();
        }

        for (int i = 0; i < b.length; i++) {

            String num[] = b[i].split("");

            for (int j = 1; j < num.length; j++) {
                
                afterNum(num[1], num[2]);
                afterNum(num[2], num[3]);
                beforeNum(num[1], num[2]);
                beforeNum(num[2], num[3]);
                
            }

        }
        
        System.out.println("before 0 - "+before_0);
        System.out.println("before 1 - "+before_1);
        System.out.println("before 2 - "+before_2);
        System.out.println("before 3 - "+before_3);
        System.out.println("before 4 - "+before_4);
        System.out.println("before 5 - "+before_5);
        System.out.println("before 6 - "+before_6);
        System.out.println("before 7 - "+before_7);
        System.out.println("before 8 - "+before_8);
        System.out.println("before 9 - "+before_9);
        System.out.println("after 0 - "+after_0);
        System.out.println("after 1 - "+after_1);
        System.out.println("after 2 - "+after_2);
        System.out.println("after 3 - "+after_3);
        System.out.println("after 4 - "+after_4);
        System.out.println("after 5 - "+after_5);
        System.out.println("after 6 - "+after_6);
        System.out.println("after 7 - "+after_7);
        System.out.println("after 8 - "+after_8);
        System.out.println("after 9 - "+after_9);

    }

    static void afterNum(String a, String b) {

        if (a.equals("0")) {after_0.add(b);
        } else if (a.equals("1")) {after_1.add(b);
        } else if (a.equals("2")) {after_2.add(b);
        } else if (a.equals("3")) {after_3.add(b);
        } else if (a.equals("4")) {after_4.add(b);
        } else if (a.equals("5")) {after_5.add(b);
        } else if (a.equals("6")) {after_6.add(b);
        } else if (a.equals("7")) {after_7.add(b);
        } else if (a.equals("8")) {after_8.add(b);
        } else if (a.equals("9")) {after_9.add(b);
        }

    }
    
    static void beforeNum(String a, String b) {

        if (b.equals("0")) {before_0.add(a);
        } else if (b.equals("1")) {before_1.add(a);
        } else if (b.equals("2")) {before_2.add(a);
        } else if (b.equals("3")) {before_3.add(a);
        } else if (b.equals("4")) {before_4.add(a);
        } else if (b.equals("5")) {before_5.add(a);
        } else if (b.equals("6")) {before_6.add(a);
        } else if (b.equals("7")) {before_7.add(a);
        } else if (b.equals("8")) {before_8.add(a);
        } else if (b.equals("9")) {before_9.add(a);
        }

    }
    
}
