#include <stdio.h>
#include "myutils.h"

int main()
{
  /* int x=100; */
  /* char hi=x>>8; */
  /* char lo=x & 0xFF; */
	/* printf("%s : %s\n", "High byte", byte_to_binary(hi)); */
	/* printf("%s : %s\n", "Low byte", byte_to_binary(lo)); */
  int a = 0x12;
  int b = 0xFE;
  /* int b = 0b11100110; */
  printf("%s\n", byte_to_binary(a));
  printf("%s\n", byte_to_binary(b));
  printf("--------\n");

  int suma = a & b;
  printf("%s\n", byte_to_binary(suma));

  int alt = a | b;
  printf("%s\n", byte_to_binary(alt));

  return 0;
}
