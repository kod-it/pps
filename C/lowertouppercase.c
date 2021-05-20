 #include<stdio.h>
 #include<string.h>
 int main()
 {
     char s[100];
     int i = 0;
     printf("String: ");
     gets(s);
     while( s[i] != '\0' )
     {
        if( s[i] >= 'a' && s[i] <= 'z' )
        {
           s[i] = s[i] - 32;
        }
        i++;
     }
     printf("UpperCase: ");
     puts(s);
     return 0;
 }
