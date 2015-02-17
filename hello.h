#ifndef _hello_h_
#define _hello_h_

#include <wchar.h>

#define HELLO_TEMPLATE_OVERHEAD 9

int hello(const char * who);
int snhello(char * dest, size_t size, const char * who);
size_t hellolen(const char * who);

int whello(const wchar_t * who);
int swhello(wchar_t * dest, size_t size, const wchar_t * who);
size_t whellolen(const wchar_t * who);

#endif
