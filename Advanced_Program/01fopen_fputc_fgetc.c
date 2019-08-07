#include<stdio.h>
int main(int argc, const char *argv[])
{
	FILE *fp = fopen("./test.txt","r");
	if(NULL == fp)
	{
			printf("error!\n");
			return 1;
	}
/*
 	fputc('H',fp);
	fputc('e',fp);
	fputc('l',fp);
	fputc('l',fp);
	fputc('o',fp);
	fputc(' ',fp);
	fputc('w',fp);
	fputc('o',fp);
	fputc('r',fp);
	fputc('l',fp);
	fputc('d',fp);
	fputc('!',fp);
	fputc('\n',fp);
*/
	int c;
	c = fgetc(fp);
	printf("%c",c);
	c = fgetc(fp);;
	printf("%c",c);
	c = fgetc(fp);
	printf("%c",c);
	c = fgetc(fp);
	printf("%c",c);
	c = fgetc(fp);
	printf("%c",c);
	c = fgetc(fp);
	printf("%c",c);
	c = fgetc(fp);
	printf("%c",c);
	c = fgetc(fp);
	printf("%c",c);
	c = fgetc(fp);
	printf("%c",c);
	c = fgetc(fp);
	printf("%c",c);
	c = fgetc(fp);
	printf("%c",c);
	printf("\n");
	fclose(fp);
	return 0;
}
