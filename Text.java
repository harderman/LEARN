class test 
{
    public String name ;
     public static String country = "中国";
    public void  Infor()
    {
        System.out.println(name+country);
    }
}


public class Text
 {
    public  static void main (String [] args)
    {
        test man = new test();
       man.name = "张三";
       man.Infor();
        test persons = new test();
        persons.name = "李四";
        persons.Infor();
    }
 }