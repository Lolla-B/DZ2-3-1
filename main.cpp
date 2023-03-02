#include <stdio.h>
void main ()
  {
  int x;
  int y;
  printf ("x:>");
  scanf ("%i", &x);
  printf ("y:>");
  scanf ("%i", &y);
  if ((x == 12345) && (y == 9876))
    printf ("OK");
  else
    printf ("ERROR");
  }
