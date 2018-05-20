////same document identification
/*
 input: 6
        doc helo
        doc fskjf
        sheet style.xls
        doc jkfhjkhfkj
        doc helo
        sheet style.xls
 output:
        helo
        style.xls

*/
import java.util.*;
public class Hello {

    public static void main(String[] args) {
	    int n,i,j,k,l,m;
	    Scanner sc= new Scanner(System.in);
	    n=sc.nextInt();
	    String s[]=new String[n+1];
	    for(i=0;i<n+1;i++){
	        s[i]=sc.nextLine();
	    }
        for(i=1;i<n;i++){
            for(j=i+1;j<n+1;j++){            
                if(s[i].equals(s[j])){
                  String[] s1 = s[i].split(" ");
                   System.out.println(s1[1]);
               }
           }
       }	
   
        
    }
}
/*
 input: 6
        doc helo
        doc fskjf
        sheet style.xls
        doc jkfhjkhfkj
        doc helo
        sheet style.xls
 output:
        helo
        style.xls

*/
import java.util.*;
public class Hello {

    public static void main(String[] args) {
	    int n,i,j,k,l,m;
	    Scanner sc= new Scanner(System.in);
	    n=sc.nextInt();
	    String s[]=new String[n+1];
	    for(i=0;i<n+1;i++){
	        s[i]=sc.nextLine();
	    }
        for(i=1;i<n;i++){
            for(j=i+1;j<n+1;j++){            
                if(s[i].equals(s[j])){
                  String[] s1 = s[i].split(" ");
                   System.out.println(s1[1]);
               }
           }
       }	
   
        
    }
}