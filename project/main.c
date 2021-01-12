#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct contact
{
long phone;
char name[20],address[20],email[30];
}list;

char q[20],name[20];
FILE *fp, *ft;
int i,n,ch,l,found;

int main()
{main:
printf("main menu\n\t\n[1] Add a new Contact\n[2] List all Contacts\n[3] Search for contact\n[4] Edit a Contact\n[5] Delete a Contact\n[0] Exit\n");
printf("enter your choice:");
scanf("%d",&ch);

switch(ch)
{
case 0:
break;
case 1:
fp=fopen("contact.txt","a");
for (;;)
{fflush(stdin);
printf("To exit enter blank space in the name input\n enter the name:");
scanf("%[^\n]",&list.name);
if(strcmp(list.name,"")==0 || strcmp(list.name," ")==0)
break;
printf("enter phone number:");
scanf("%ld",&list.phone);
printf("enter the address:");
scanf("%s",&list.address);
printf("enter the email address:");
scanf("%s",list.email);
printf("\n");
fwrite(&list,sizeof(list),1,fp);
}
fclose(fp);
break;
case 2:
printf("\nlist of contacts\n");
for(i=97;i<=122;i=i+1)
{
fp=fopen("contact.txt","r");
found=0;
while(fread(&list,sizeof(list),1,fp)==1)
{
if(list.name[0]==i || list.name[0]==i-32)
{
printf("\nname: %s\nphone: %ld\naddress: %s\nemail : %s\n",list.name,list.phone,list.address,list.email);
found++;
}
}
fclose(fp);
}
break;
case 3:
{found=0;
printf("\nsearching contacts\n enter the name you want search: ");
scanf("%s",&q);
l=strlen(q);
fp=fopen("contact.txt","r");
printf("\n Search result for '%s' \n",q);
while(fread(&list,sizeof(list),1,fp)==1)
{
for(i=0;i<=l;i++)
name[i]=list.name[i];
name[l]='\0';
if(stricmp(name,q)==0)
{
printf("\nname\t: %s\nphone\t: %ld\naddress\t: %s\nemail\t:%s\n",list.name,list.phone,list.address,list.email);
found++;
}
}
if(found==0)
printf("\nno match found!\n");
else
printf("\n%d match(s) found!\n",found);
fclose(fp);
printf("[0] exit\n");
scanf("%d",&ch);
};
break;
case 4:
fp=fopen("contact.txt","r");
ft=fopen("temp.txt","w");
printf("editing contacts\n enter the name of the contact that you want to edit:");
scanf("%s",name);
while(fread(&list,sizeof(list),1,fp)==1)
{
if(strcmp(name,list.name)!=0)
fwrite(&list,sizeof(list),1,ft);
}
printf("\nediting '%s'\n",name);
printf("enter the name:");
scanf("%s",&list.name);
printf("enter phone number:");
scanf("%ld",&list.phone);
printf("enter the address:");
scanf("%s",&list.address);
printf("enter the email address:");
scanf("%s",list.email);
printf("\n");
fwrite(&list,sizeof(list),1,ft);
fclose(fp);
fclose(ft);
remove("contact.txt");
rename("temp.txt","contact.txt");
break;
case 5:
printf("\ndeleting contact\n enter the name of the contact that you want to delete:");
scanf("%s",&name);
fp=fopen("contact.txt","r");
ft=fopen("temp.txt","w");
while(fread(&list,sizeof(list),1,fp)!=0)
if (strcmp(name,list.name)!=0)
fwrite(&list,sizeof(list),1,ft);
fclose(fp);
fclose(ft);
remove("contact.txt");
rename("temp.txt","contact.txt");
break;
default:
printf("invalid choice");
break;
}
printf("\n[1] main menu\n");
scanf("%d",&ch);
switch (ch)
{
case 1:
goto main;
default:
printf("Invalid choice");
break;
}

return 0;
}
