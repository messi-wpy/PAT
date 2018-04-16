import java.util.*;

public class Main {
    public static void main(String []args){
        List<Student> students=new ArrayList<>();
        List<Student>list=new ArrayList<>();
        List<Student>result=new ArrayList<>();
        int N,L,H;
        Scanner sc=new Scanner(System.in);
        N=sc.nextInt();
        L=sc.nextInt();
        H=sc.nextInt();
        while (N>0){
            Student student=new Student();
            student.setNum(sc.next());
            student.setD(sc.nextInt());
            student.setC(sc.nextInt());
            students.add(student);
            N--;
        }
        

        for (int n=0;n<students.size();n++){
            Student student=students.get(n);
            if (student.getD()<L||student.getC()<L)
                list.add(student);
        }

        students.removeAll(list);
        list.clear();
        


        for (Student stu:students)
        {
            if (stu.getD()>=H&&stu.getC()>=H) {
                list.add(stu);

            }
        }

        students.removeAll(list);
        Collections.sort(list);
        result.addAll(list);


        list.clear();

        for (Student s:students
             ) {
            if (s.getD()>=H&&s.getC()<=H)
                list.add(s);

        }

        Collections.sort(list);
        students.removeAll(list);
        result.addAll(list);
        list.clear();


        /*for (int i=0;i<list.size()-1;i++){
            i++;
            boolean sort=false;
            for (int j=0;j<list.size()-i;j++){
                if (list.get(j).getD()+list.get(j).getC()
                       >list.get(j+1).getC()+list.get(j+1).getD())
                {
                    Student student=list.get(j);
                    list.set(j,list.get(j+1));
                    list.set(j+1,student);
                    sort=true;
                    System.out.println(j);
                }
            }
            if (sort){
                break;
            }
        }*/


        for (Student s:students
             ) {
            if (s.getC()<=H&&s.getD()<=H&&s.getD()>=s.getC())
                list.add(s);
        }

        Collections.sort(list);

        result.addAll(list);
        students.removeAll(list);


        list.clear();

        list.addAll(students);
        Collections.sort(list);
        result.addAll(list);
        System.out.println(result.size());
        for (Student s:result
             ) {
            System.out.print(s.getNum()+" "+s.getD());
            System.out.println(" "+s.getC());
        }




    }


}
class Student implements Comparable<Student>{
    private String num;
    private int d;
    private int c;

    public String getNum() {
        return num;
    }

    public void setNum(String num) {
        this.num = num;
    }

    public int getD() {
        return d;
    }

    public void setD(int d) {
        this.d = d;
    }

    public int getC() {
        return c;
    }

    public void setC(int c) {
        this.c = c;
    }


    @Override
    public int compareTo(Student o) {
        if (o.getC()+o.getD()==d+c) {
            if (o.getD()!=d)
                return o.getD()-d;
            else
            return Integer.parseInt(num) - Integer.parseInt(o.getNum());
        }
       return (o.getC()+o.getD())-(d+c);
    }
}
