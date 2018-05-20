import java.util.*;

public class Capitalize {
 
   public static void main(String[] args) {
       Scanner sc= new Scanner(System.in);
       int i;
        String t;
      String str1=sc.nextLine();
       str1 = str1.substring(0, str1.length()-1);
       String [] s=str1.split(" ");
      //char[] chars = str1.toCharArray();
    for( i=0;i<s.length;i++){
        for(int j=0;j<s.length-i-1;j++){
            if(s[j].length()>s[j+1].length()) {
            t=s[j];
            s[j]=s[j+1];
         s[j+1]=t;
            }
        }
    }
       String str2=s[0];
       str2=str2.concat(" ");
       for(i=1;i<s.length;i++){
          str2=str2.concat(s[i]);
           str2=str2.concat(" ");
       }
        str2 = str2.substring(0, str2.length()-1);
       str2=str2.concat(".");
     // chars[0] = Character.toUpperCase(chars[0]);
 char[] chars = str2.toCharArray();
   chars[0] = Character.toUpperCase(chars[0]);
 
      String str3 = new String(chars);
 
    //  System.out.println(str1);
     System.out.println(str3);
   }
}