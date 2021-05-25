#include<stdio.h>
 int rev(int n)
{
    int  reverse=0, rem;
  while(n!=0)
  {
     rem=n%10;
     reverse=reverse*10+rem;
     n/=10;
  }
  return reverse;
}
void main()
{
    int n;
printf("Enter a number: ");
  scanf("%d", &n);
  printf("Rev = %d", rev(n));
}
