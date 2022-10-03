#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int
main (int argc, char *argv[])
{
  int num = argc;
  for (int i = 1; i < argc; i++)
    {
      if (i == (num - 1))
	{
	  printf ("%s", argv[num - 1]);
	  printf ("\n");
 	  return 0;
	}

      printf ("%s ", argv[i]);
    }


}
