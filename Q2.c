#include <stdio.h>

union abc{
    int a;
    int b;
    struct StructJob{
        char name[20];
        int salary;
        int IDnumber;
    }job;
};

int main(){

    union abc uAbc;
    struct StructJob job;

    int arr[] = {1,2,3,4,5};

    uAbc.a = 1;
    uAbc.b = 2;

        strcpy(uAbc.job.name, "John");
        uAbc.job.salary = 2000;
        uAbc.job.IDnumber = 12345;

    printf("%d\n", uAbc.a);
    printf("%d\n", uAbc.b);
    system("cls");
    printf("%s\n", uAbc.job.name);
    printf("%d\n", uAbc.job.salary);
    printf("%d\n", uAbc.job.IDnumber);

return 0;}