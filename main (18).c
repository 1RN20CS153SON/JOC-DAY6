/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{    char s[1000];  
    int i;
 
    printf("Enter  the string in lower case: ");
    gets(s);
    
    printf("string in lowercase ='%s'\n",s);
 
     
    for(i=0;s[i];i++)  
    {
        if(s[i]>=97 && s[i]<=122)
         s[i]-=32;
 	}
 	
     
    printf("string in uppercase ='%s'\n",s);
    printf("Enter the string:");
    gets(s);
    for(i=0; s[i]!='\0'; i++);
    printf("Length of '%s' = %d",s,i);
 return 0;
}
 
    
 
