#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "strtrim.h"

int strrtrim(char *s, char *trim) {
	int l = s ? strlen(s) : 0;
	char *p;
	if( !s || !trim || l <= 0 ) return -1;
	for( p = &s[l - 1]; p != s; p-- ) {
		if( strchr(trim, *p) ) *p = '\0';
		else break;
	}
	return strlen(s);
}

int strltrim(char *s, char *trim) {
	char *p;
	if( !s || !trim ) return -1;
	for( p = s; *p != '\0'; p++ ) {
		if( !strchr(trim, *p) ) break;
	}
	if( *p != '\0' ) {
		int l = strlen(p);
		memmove(s, p, l);
		s[l] = '\0';
	} else {
		*s = '\0';
	}
	return strlen(s);
}

int strtrim(char *s, char *trim) {
	if( !s || !trim ) return -1;
	strltrim(s, trim);
	strrtrim(s, trim);
	return strlen(s);
}
