/*
  portres1: loc65_fractal1.c by MM
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <sys/types.h>

int
out_range(void)
{
  perror("out checking!");
  exit(EXIT_FAILURE);
}

int
main(int argc, char** argv) 
{

  uint32_t kind, i, count, oflag;

  printf("Programming.\n_\n\n\n\n\n\n\n");

  /* input number 1~100 (bounds-checking exists) */
  scanf("%u", &count);
  kind = (count <= 1 || count > 100) ? out_range() : -1;
  if (kind == -1) {

  }
 
  --count;
  count *= 2;

/*
  In a loop, initial i variable set by 1  
  And ### $$$ ### $$ ### <- print all requested 
  BY user interact. SCANF!
*/

  for (i = 1; i <= count; i++) { /* if input is 10={1 .. 18} */
    if ((i % 2) != 0) { 
      printf("###\n");
    } else if ((i % 2) == 0) {
      printf("$$$\n");
      oflag = 1;
    }

    if ((oflag == 1) && (i == count)) goto exot;
    else oflag = 0;
  }
 
  goto outro;
 
exot:
  printf("###\n");

outro:
  return 1;

}

/* EoC */
/* EoF */

