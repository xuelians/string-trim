#ifndef STRTRIM_H_
#define STRTRIM_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>

extern int strrtrim(char* s, char* trim);
extern int strltrim(char* s, char* trim);
extern int strtrim(char* s, char* trim);

#ifdef __cplusplus
}
#endif

#endif /* STRTRIM_H_ */
