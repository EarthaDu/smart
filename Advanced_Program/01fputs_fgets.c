#include<stdio.h>
int main(int argc, const char *argv[])
{
	FILE *fq = fopen("./hello.txt","w");
	if(NULL == fq)
	{
			printf("error!\n");
			return 1;
	}
	char h[] = "hello world!\n";
	int ret = fputs(h,fq);
	if(EOF == ret)
	{
			printf("error!\n");
	}
	fclose(fq);
	FILE *fp = fopen("./hello.txt","r");
	if(NULL == fp)
	{
			printf("error!\n");
			return 1;
	}
	while(1)
	{
		char p[10];	
		char *ret = fgets(p,10,fp);
		if(NULL == ret)
			  break;
		printf("%s",p);
	}
	fclose(fp);
	return 0;
}
