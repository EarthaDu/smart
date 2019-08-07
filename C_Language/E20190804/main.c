#include<stdio.h>
struct Student
{
		int NO;
		char Name[100];
		float score;
};
void printStudent(struct Student* s)
{
	printf("%d,%s,%f\n",s->NO,s->Name,s->score);	
}
int main(int argc, const char *argv[])
{
	struct Student s;
	scanf("%d%s%f",&s.NO,s.Name,&s.score);
	printf("%d,%s,%f\n",s.NO,s.Name,s.score);	
	return 0;
}
