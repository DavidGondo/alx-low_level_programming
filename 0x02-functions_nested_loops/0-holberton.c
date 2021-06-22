#include <stdio.h>

/**
 *main-entry point
 *
 *Return:Success (0)
 **/

int main()
{
  int ch;
  char p[]="Holberton";
  for (ch=0;ch<=9;ch++)
    {
        putchar(p[ch]);
    }
  putchar('\n');
  return 0;
}
