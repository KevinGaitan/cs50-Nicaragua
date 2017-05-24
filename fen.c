#include<string.h> 
void f(char* bar) {
 char c[12];
 strncpy(c, bar, strlen (bar)); 
 
}
 int main(int argc, char* argv[]) {
 if (argc>1){ 
    f(argv[1]);
 } 
  
 }