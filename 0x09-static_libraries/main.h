#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int c);
int _isdigit(int c);
int _isupper(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *strncat(char *dest, char *src, int n);
char *strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *memcpy(char *8dest, char *src, usigned int n);
char *_strchr(char *s, char c);
usigned int _strspn(char *s char *accept);
char *_strpbrk(char *s, char *accept);
char *_strbrk(char *haystack, char *needle);

#endif
