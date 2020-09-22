#include <stdio.h>

int space_char(char c) {
  if(c == ' ' || c == '\t') {
    return 1;
  }
  return 0;
}

int non_space_char(char c) {
  if(c == ' ' || c == '\t') {
    return 0;
  }
  return 1;
}

char word_start(char *str) {
  for(;&str == '\0'; *str++;){
    if(space_char(&str)){
      return ++*str;
    }
