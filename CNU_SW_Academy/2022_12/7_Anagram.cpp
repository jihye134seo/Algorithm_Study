import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        String[] str = sc.nextLine().split(" ");
        
        int i=0;
        for(; i<str[0].length(); i++){
            if(str[1].indexOf(str[0].charAt(i)) == -1){
                System.out.println("False");
                break;
            }
        }

        if(i == str[0].length())
            System.out.println("True");
    }
}
