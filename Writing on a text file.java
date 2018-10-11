import java.io.*
class File
{
	String name;
	String reg;
	String dept;
	String clg;
	int ans; 
	//File(/*String name,String reg,String dept,String clg,int ans*/)
	public static void main(String args[]) throws IOException
	{		
		name="Senthalan";
		reg="17cs039";
		dept="CSE";
		clg="Akshaya";
		ans=6;
		byte b1[]=name.getBytes();
		byte b2[]=reg.getBytes();
		byte b3[]=dept.getBytes();
		byte b4[]=clg.getBytes();		
		FileOutputStream f=new FileOutputStream("t1.txt");
		f.write(b1);
		f.write(b2);
		f.write(b3);
		f.write(b4);
		f.close();
	}
}
		
			
