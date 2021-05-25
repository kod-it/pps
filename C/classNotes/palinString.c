#include <stdio.h>

int main()
{
  char st[100];
  int s, m, e, l;

  gets(st);

  l=strlen(st);

  e = l - 1;
  m = l/2;

  for (s = 0; s < m; s++)
  {
    if (st[s] != st[e])
    {
      printf("Not a palindrome.\n");
      break;
    }
    e--;
  }
  if (s == m)
    printf("Palindrome.");
  return 0;
}
