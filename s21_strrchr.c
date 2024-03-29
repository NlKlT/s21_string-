/*Searches for the last occurrence of the character c (an unsigned char) in the
 * string pointed to by the argument str.*/
#include "s21_string.h"

char *s21_strrchr(const char *str, int c) {
  char *res = s21_NULL;
  for (s21_size_t i = 0; i < s21_strlen(str) + 1; i++) {
    if (str[i] == c) {
      res = ((char *)str) + i;
    }
  }
  return res;
}