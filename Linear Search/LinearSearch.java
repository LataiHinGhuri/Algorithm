package algorithm.mamun;

import java.util.Scanner;

public class LinearSearch {
	
	static Scanner keyboard=new Scanner(System.in);
	
	public static void main(String[] args) {
		
		int i,j,n,m;
		int[] arr=new int[100];
		
		System.out.println("Enter Size of array: ");
		n=keyboard.nextInt();
		System.out.println("Enter all number of the array:");
		for(i=1;i<=n;i++)
		{
			arr[i]=keyboard.nextInt();
		}
		
		System.out.println("Enter the number to search: ");
		m=keyboard.nextInt();
		
		j=-1;
		for(i=0;i<=n;i++)
		{
			if(arr[i]==m)
				j=i;
		}
		
		if(j==-1)
			System.out.println(m + " not found");
		else
			System.out.println(m + " found in position: "+ j);
		
	}
}
