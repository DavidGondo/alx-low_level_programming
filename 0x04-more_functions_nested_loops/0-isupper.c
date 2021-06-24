#include "holberton.h"
#include <stdio.h>
/**
*int _isupper(int c): Function prototype
*
*Return :Upper case(1)
*Return : otherwise(0)
*
*/

int _isupper(int c)
{
  int i;
  if(i>64 && i<91)
    {
      _putchar(i);
      return (1);
    }else
    {
      return (0);
    }

}
