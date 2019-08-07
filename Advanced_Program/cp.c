#include<stdio.h>
FILE *fileCopy(FILE *dest,FILE *src)
{
		FILE *ret = dest;
		while(1)
		{
			int c = fgetc(src);
			if(EOF == c)
				  break;
			fputc(c,dest);
		}
		return ret;
}
int main(int argc, const char *argv[])
{
	FILE *fp1 = fopen("/etc/passwd","r");
	FILE *fp2 = fopen("./passwd","w");
	if(NULL == fp1 || NULL == fp2)
	{
			printf("error\n");
			return 1;
	}
	fileCopy(fp2,fp1);
	fclose(fp1);
	fclose(fp2);
	return 0;
}
