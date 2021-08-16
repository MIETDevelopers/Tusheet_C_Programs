// Name: Tusheet Pal Singh
// Program: To understand Global and local variable 
#include <stdio.h> 
/* global variable declaration */ 
int Tusheet; 
int main () { 
  /* local variable declaration */ 
  int a, b; 
  /* actual initialization */ 
  a = 10; 
  b = 20; 
  Tusheet= a + b; 
  printf ("value of a = %d, b = %d and g = %d\n", a, b, Tusheet); 
  return 0; 
}

