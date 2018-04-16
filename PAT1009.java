import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class PAT1009 {
    public static void main(String[] args){

        Scanner scanner=new Scanner(System.in);
        String input=scanner.nextLine();
        String []words=input.split("\\s+");
        for (int i=words.length-1;i>0;i--){
            System.out.print(words[i]+" ");
        }
System.out.println(words[0]);

    }
}
