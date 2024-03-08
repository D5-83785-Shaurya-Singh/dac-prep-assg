

import java.util.Scanner;

public class Matrix 
{
	public static int[][] matrix_mul(int a[][], int b[][] )
	{
		
		
		int rows1 = a.length; //no. of rows of first matrix
		int column1 = a[0].length; //no. of columns of first matrix
		int column2 = b[0].length; //no. of columns of second matrix
		
		int c[][] = new int[rows1][column2];
		
		for(int i = 0; i < rows1; i++)
		{
			for(int j = 0; j < column2; j++)
			{
				for (int k = 0; k < column1; k++)
				{
					c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
				}
			}
		}
		
		return c;
		
	}

	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter number of rows and columns for matrix A: ");
		int row1 = sc.nextInt();
		int column1 = sc.nextInt();
		
		System.out.println("Enter number of rows and columns for matrix B: ");
		int row2 = sc.nextInt();
		int column2 = sc.nextInt();
		
		
		if(column1 != row2)
		{
			System.out.println("Number of columns in matrix A must be equals to number of rows in matrix B!!");
			return;
		}
		
		int matrixA[][] = new int[row1][column1];
		
		System.out.println("Enter elements of matrix A:");
		for(int i = 0; i < row1; i++)
		{
			for(int j = 0; j < column1; j++)
			{
				matrixA[i][j] = sc.nextInt();
			}
		}
		
		int matrixB[][] = new int[row2][column2];
		
		System.out.println("Enter elements of matrix B:");
		for(int i = 0; i < row2; i++)
		{
			for(int j = 0; j < column2; j++)
			{
				matrixB[i][j] = sc.nextInt();
			}
		}
		
		System.out.println("Matrix A:");
		for(int i = 0; i < row1; i++)
		{
			for(int j = 0; j < column1; j++)
			{
				System.out.print(matrixA[i][j]+" ");
			}
			System.out.println();
		}
		
		System.out.println("Matrix B:");
		for(int i = 0; i < row2; i++)
		{
			for(int j = 0; j < column2; j++)
			{
				System.out.print(matrixB[i][j]+" ");
			}
			System.out.println();
		}
		
		System.out.println("============================================================");
		
		int result[][] = matrix_mul(matrixA, matrixB);
		System.out.println("Printing the resultant matrix: ");
		for(int i = 0; i < row1; i++)
		{
			for(int j = 0; j < column2; j++)
			{
				System.out.print(result[i][j]+" ");
			}
			System.out.println();
		}

	}

}
