#include<string.h>
#include<stdlib.h>
#include <stdio.h>

void Sender(char *str)
{
    int l;
    int i;
    char flag[] = "01111110";
    char newstr[100] = "";
    l = strlen(str);
    strcat(newstr,flag);
    int count=0;
    for(i=0;i<l;i++){
        if(str[i]=='1'){
            count++;
        }
        else{
            count = 0;
        }
        strncat(newstr,&str[i],1);
        if(count==5){
            strcat(newstr,"0");
            count=0;
        }
    }
    strcat(newstr,flag);
    printf("%s",newstr);
  
   
}
int main()
{
    int i;
    char str[100];
    printf("Enter the string for Bit stuffing:");
    scanf("%s",str);
    printf("%s",str);
    printf("\n");
    Sender(str);
    return 0;
}

