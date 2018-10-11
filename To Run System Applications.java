import java.io.*;
import java.util.*;


class OpenNotepad extends Thread
{
	int choice;
	OpenNotepad(int ch1)
	{	
		choice=ch1;
		Runtime app=Runtime.getRuntime();
		if(ch1==1)
		{
			System.out.println("Opening Notepad...");
			try
			{
				Thread.sleep(2000);
				app.exec("notepad");
			}
			catch(Exception e)
			{
				System.out.println("Error");
			}
		}
		else if(ch1==2)
		{
			System.out.println("Opening Calculator...");
			try
			{
				Thread.sleep(2000);
				app.exec("calc");
			}
			catch(Exception e)
			{
				System.out.println("Error");
			}
		}
		else if(ch1==3)
		{
			System.out.println("Opening MS Paint...");
			try
			{
				Thread.sleep(2000);
				app.exec("mspaint");
			}
			catch(Exception e)
			{
				System.out.println("Error");
			}
		}
		else if(ch1==4)
		{
			System.out.println("Closing...");
			System.exit(0);
		}
		else
		{
			System.out.println("Invalid Input...Leaving...");
		}
	}
}


class AMain
{
	public static void main(String arg[]) throws IOException
	{
		DataInputStream d=new DataInputStream(System.in);
		System.out.println("1.Notepad");
		System.out.println("2.Calculator");
		System.out.println("3.MS Paint");
		System.out.println("4.Exit");
		System.out.println("Enter Your Choice...");
		int ch=Integer.parseInt(d.readLine());		
		OpenNotepad o=new OpenNotepad(ch);
		
	}
}
