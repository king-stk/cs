#include<stdio.h>
#include<string.h>

int main()
{
    char buff[25];
    int pass=0;
    printf("Enter the password\n");
    gets(buff);
    if(strcmp(buff,"manoj1999"))
    {
        printf("\nwrong password\n");

    }
    else
    {
        printf("\ncorrect password\n");
        pass = 1;

    }
    if(pass)
    {
        printf("\nroot privilages given to user\n");
    }
    return 0;
}