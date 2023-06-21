#include <stdio.h>
#include <string.h>
union abc{
    int a;
    char b;
    float c;
    char s[3];
}uAbc;

int main(){

    uAbc.a = 1;
    uAbc.b = 'b';
    uAbc.c = 1.2;
    strcpy(uAbc.s, "abc");

    int sizeA = sizeof(uAbc.a);
    int sizeB = sizeof(uAbc.b);
    int sizeC = sizeof(uAbc.c);
    int sizeS = sizeof(uAbc.s);
    int sizeABC = sizeof(uAbc);

    printf("the size of A is %d\n", sizeA);
    printf("the size of B is %d\n", sizeB);
    printf("the size of C is %d\n", sizeC);
    printf("the size of S is %d\n", sizeS);
    printf("the size of union ABC is %d\n", sizeABC);


return 0;}
