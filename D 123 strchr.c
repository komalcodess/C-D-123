#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

{
    char str[20];
    printf("Enter the string name: ");
    scanf("%s",str);
    char ch;
    printf("Enter the character you want to find: ");
    scanf("%c",ch);
    char *flag;
    flag=strchr(str,ch);
    if(flag==NULL)
        printf("Character does not exist,");
    else
    {

        int index=flag-str;

        printf("Character exist at position: %d",index);
    }
    return 0;
}
