//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner x = new Scanner(System.in);

        double name = x.nextDouble();
        System.out.println(name);

        String s1 = "Pasindu";
        String s2 = "Imalsha";

        System.out.println(s1.concat(" ").concat(s2));
    }
}

