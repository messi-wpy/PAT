import java.util.Scanner;

public class PAT1004 {
    static class Student{
        String name;
        String num;
        int grade;
    }
    public static void main(String[]args){
        Scanner scanner=new Scanner(System.in);
        int n;
        boolean ifwork=false;
        n=scanner.nextInt();
        Student[] students=new Student[n];
        for(int i=0;i<n;i++){
            students[i]=new Student();
            students[i].name=scanner.next();
            students[i].num=scanner.next();
            students[i].grade=scanner.nextInt();
        }
        for (int i=0;i<n-1;i++){
            for (int j=1;j<n;j++){
                if(students[i].grade<students[j].grade){
                    int grade=students[j].grade;
                    students[j].grade=students[i].grade;
                    students[i].grade=grade;
                    ifwork=true;
                }
            }
            if(ifwork)
                ifwork=false;
            else
                break;
        }
        System.out.println(students[0].name+" "+students[0].num);

        System.out.println(students[n-1].name+" "+students[n-1].num);
    }
}
