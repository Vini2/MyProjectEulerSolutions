
import java.io.File;
import java.util.Arrays;
import java.util.Scanner;

class Q22_Scan {

    static int sum = 0;
    static String letter[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};

    public static void main(String[] args) {

        try {
            
            File file = new File("D:\\Project Euler\\names.txt");
            Scanner scanner = new Scanner(file);

            String line = scanner.nextLine();
            String a[] = line.split(",");

            scanner.close();

            Arrays.sort(a);

            for (int i = 0; i < a.length; i++) {
                String b[] = a[i].split("");
                int name_score = 1;
                int place = 0;

                for (int j = 2; j < b.length - 1; j++) {

                    for (int k = 0; k < letter.length; k++) {
                        if (b[j].equals(letter[k])) {
                            place = place + k + 1;
                            break;
                        }
                    }

                }

                name_score = place * (i + 1);

                sum += name_score;

            }

            System.out.println("The total of all the name scores in the file is " + sum); //871198282
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
