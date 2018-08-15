import java.util.Scanner;
public class test2{
public static void main(String[] args){

Scanner s=new Scanner(System.in);
System.out.println("Enter the sno");
int sno=s.nextInt();
System.out.println("Enter the value of s1:");
int s1=s.nextInt();
System.out.println("Enter the value of s2:");
int s2=s.nextInt();
int tot=s1+s2;
float avg=(s1+s2)/2;
System.out.println("sno ="+sno);
System.out.println("s1 ="+s1);
System.out.println("s2 ="+s2);
System.out.println("tot ="+tot);
System.out.println("avg ="+avg);
}
}

