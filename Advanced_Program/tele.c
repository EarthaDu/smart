#include<stdio.h>
typedef struct
{
		char name[50];
		char phone[15];
		char add[100];
}TELE;
int main(int argc, const char *argv[])
{
	TELE liu,zjb;
	FILE *fp = fopen("./tele.txt","w");
	if(NULL == fp)
	{
			printf("error!\n");
			return 1;
	}
	fgets(liu.name,50,stdin);
	fgets(liu.phone,15,stdin);
	fgets(liu.add,100,stdin);
	fputs(liu.name,fp);
	fputs(liu.phone,fp);
	fputs(liu.add,fp);
	fgets(zjb.name,50,stdin);
	fgets(zjb.phone,15,stdin);
	fgets(zjb.add,100,stdin);
	fputs(zjb.name,fp);
	fputs(zjb.phone,fp);
	fputs(zjb.add,fp);
	fclose(fp);	
	return 0;
}
