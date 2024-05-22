#include<stdio.h>
int main()
{
    FILE * data;
    char name[100]

    data = fopen("file.txt","w");
    gets(name);
    fprintf(data,"%s",name);
}