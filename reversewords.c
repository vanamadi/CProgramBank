#include<stdio.h>
#include<string.h>
int main(){
    
    char string[]="    vanamadi    venkata    kumar  ";
    char *ptr1=NULL,*ptr2=NULL,*str;
	void strrstr(char *ptr1);
	int flag=0;
    str=&string[0];
    printf("%s\n",str);
    
    while(*str!='\0'){
        if(*str!=' '&&flag==0)//skip spaces
		{
			ptr1=str;
			flag=1;
		}
        if((*str == ' ')&&(flag==1)){
            ptr2=str;
            *ptr2='\0';
            strrstr(ptr1);
            *ptr2=' ';            
			flag=0;
        }
        str++;        
    }
	if(flag==1)
	strrstr(ptr1);
    printf("%s\n",string);
    return 0;
}
/*
void strrstr(char *ptr1){//string reverse
    int len=strlen(ptr1);
    char *p=ptr1+len;
    char *ptr2=ptr1+len-1;	
    while(ptr1 < ptr2){
        *p=*ptr1;
        *ptr1=*ptr2;
        *ptr2=*p;
        ptr1++;
        ptr2--;
    }
	*/
	void strrstr(char *ptr1){//string reverse
    int len=strlen(ptr1);
    //char *p=ptr1+len;
    char *ptr2=ptr1+len-1;
    
    while(ptr1 < ptr2){
     *ptr1=*ptr2+*ptr1;
     *ptr2=*ptr1-*ptr2;
     *ptr1=*ptr1-*ptr2;
     ptr1++;
     ptr2--;
    }
}
