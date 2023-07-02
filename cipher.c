#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

int main()
{
    char plain[10],cipher[10];
    int key,i,length;

    printf("enter the plain text\n");
    scanf("%s",&plain);
    printf("enter the key\n");
    scanf("%d",&key);
    printf("the plain text is %s\nh",plain);

    printf("Encrypted text\n");
    for(i=0,length=strlen(plain);i<length;i++)
    {
        cipher[i]=plain[i]+key;
        if(isupper(plain[i]&&cipher[i]>'Z'))
        cipher[i]=cipher[i]-26;
        if(islower(plain[i]&&cipher[i]>'z'))
        cipher[i]=cipher[i]-26;

        printf("%c",cipher[i]);

        
    }

    printf("\n After Decryption ");
     for(i=0;i<length;i++)
    {
        cipher[i]=plain[i]+key;
        if(isupper(plain[i]&&cipher[i]>'A'))
        cipher[i]=cipher[i]+26;
        if(islower(plain[i]&&cipher[i]>'a'))
        cipher[i]=cipher[i]+26;

        printf("%c",plain[i]);
    }



}