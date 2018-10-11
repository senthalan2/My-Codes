import java.io.*;
class Vote
{
	public static void main(String arg[]) throws IOException
	{
	int age;
	char ch;
	DataInputStream d=new DataInputStream(System.in);
	Demo d1=new Demo();
	do
	{
		System.out.println("Enter Your Age:");
		age=Integer.parseInt(d.readLine());
		try
		{
			d1.display(age);
		}
		catch(MyException e)
		{
			System.out.println(e);
		}
		finally
		{
			System.out.println("Thank You");
		}	
		System.out.println("Do You want to Continue:");
		ch=d.readLine().charAt(0);
	}while(ch=='y' || ch=='Y');
	}
}

import java.io.*;
class Demo
{
	public void display(int a)  throws MyException
	{
		if(a<18)
		{
			throw new MyException();
		}
		else
		{
			System.out.println("Eligible for Voting");
		}
	}
}


class MyException extends Exception
{
String s;
MyException()
{
s="Not Eligible for Voting";
}
public String toString()
{
return "My Exception "+s;
}
}
