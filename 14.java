import java.util.Scanner;

public class Palindrome 
{
	public static boolean palindrome(int n)
	{
	//1.We will take two int variables, we will initialize one variable with 0 and ultimately we are going to store the reversed number in this variable
		//2. 2nd variable int original will hold the original passed number as it is because we will perform reverse operation on int n
		int i = 0, original = n;      //space complexity will be O(1)
		//3. we will 
		while(n > 0)  //here time complexity will be O(n) as loop will iterate n times
		{
			//4. This logic will reverse the given number
			i = i * 10 + n%10;
			//5.this logic will update the n
			n = n/10;
			//palindrome(n);
			
		}
		//6.control will come out of loop and check if the reversed number(i) is equals to the original number 
		if(i == original)
			return true;
		else
			return false;
	}

	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Please enter a number: ");
		int n = sc.nextInt();
		
		boolean val = palindrome(n);
		if(val != false)
			System.out.println("Given number is a palindrome number");
		else
			System.out.println("Given number is not a palindrome number!!");

	}

}
