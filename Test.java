 abstract class Person 
{
	public abstract  void IDcardnumber();

}
class Student extends Person 
{
	public  void IDcardnumber()
    {
        System.out.println(123456789);
    }
	public void Studentage()
	{
	    System.out.println(15);
	}
}
public class Test
{    
public static void main(String[] args)
	{  
        Person per = new Student(); 
        per.IDcardnumber();  
 	} 
 }
 