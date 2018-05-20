//reverse till underscore without using inbuilt functions.

import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		int n,m,i,j,k,l,h=0;
		String s= sc.nextLine();
		String s1[]=s.split("_");
		//System.out.println(s1[0]+" "+s1[1]);
		if(s1.length==2 && s1[0]==""){
		    System.out.println(s1[1]+"_");
		}
		else if(s1.length==1){
            m=s.length()-1;
            if(s.charAt(m)=='_'){
               m-=1;
            h=1; }
		    for(i=m;i>=0;i--)
		    System.out.print(s.charAt(i));
            if(h==1)
                 System.out.print("_");
		}
		else{ 
		    String c=new String(s1[0]);
		    for(i=c.length()-1;i>=0;i--)
		        System.out.print(c.charAt(i));
		    System.out.println("_"+s1[1]);
		}

	} 
}