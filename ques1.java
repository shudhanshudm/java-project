import java.util.Scanner;
public class ques1 {
	public static void main(String arg[])
	{
Scanner sc=new Scanner(System.in);
int a,b,c;
System.out.println("Enter three Numbers");
a=sc.nextInt();
b=sc.nextInt();
c=sc.nextInt();
if(a>b&&a>c)
{
	System.out.println(""+a+" is largest");
}
else if(b>a&&b>c)
{
	System.out.println(""+b+" is largest");
}
else
{
	System.out.println(""+c+" is largest");
}
sc.close();
}
}
