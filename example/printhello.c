#include "hello.h"
#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>


int main(int argc, char * argv[])
{
  if (argc > 1)
    hello(argv[1]);
  else
    hello("World");
  return 0;
}
