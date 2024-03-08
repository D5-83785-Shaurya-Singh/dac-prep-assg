
public class Table_cli 
{

	public static void main(String[] args) 
	{
		if(args.length != 2)
		{
			System.out.println("Command line argument missing!!");
		}
		
		int n = Integer.parseInt(args[1]);
		for(int i = 1; i <= 10; i++)
		{
			System.out.println((n*i));
		}

	}

}
