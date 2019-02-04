public class Text_2
{
public static void main(String [] args)
    {   
        Fibonacci feibo = new Fibonacci();
        for(int j = 1;j < 6;j++)
        {
        System.out.print(feibo.number(j));
        }
    }
}
class Fibonacci 
{
    public int number(int i)
    {
        if(i == 2 || i == 1)
       return 1;
        else
        {
         return number(i-1)+number(i-2);
        }

    }

}