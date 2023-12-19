 #include <stdio.h>
 #include <assert.h>
 #include <stdlib.h>

 int foo(int a, int b, int c) {
 if(a == c) {
     a = b;
 b = c;
 assert(a == 1);
 return 1;
 }
 assert(a > 4);
 return 0;
 }

 int main(int argc, char** argv) {
 int a = 1, b = 2, c = 3;
 if(argc > 1) {
 a = atoi(argv[1]);
 b = atoi(argv[2]);
 }
 printf("%d\n", foo(a, b, c));
 return 0;

 }
