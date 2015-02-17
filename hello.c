#include <string.h>
#include "hello.h"
#include <stdlib.h>
#include <stdio.h>

const char * hellotemplate = "Hello, %s!\n";
const wchar_t * wcshellotemplate = L"Hello, %ls!\n";

int hello(const char * who)
{
  return printf(hellotemplate, who);
}

int snhello(char * dest, size_t size, const char * who)
{
  return snprintf(dest, size, hellotemplate, who);
}

size_t hellolen(const char * who)
{
  return strlen(who) + HELLO_TEMPLATE_OVERHEAD;
}

int whello(const wchar_t * who)
{
  return wprintf(wcshellotemplate, who);
}

int swhello(wchar_t * dest, size_t size, const wchar_t * who)
{
  return swprintf(dest, size, wcshellotemplate, who);
}

size_t whellolen(const wchar_t * who)
{
  return wcslen(who) + HELLO_TEMPLATE_OVERHEAD;
}
