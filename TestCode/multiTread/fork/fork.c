#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(int argc,char *argv[]){
pid_t pid=fork();
if(pid==0)
	{//child process
		printf("my pid is %d\n",pid);
		printf("This is a child process\n");

	}
else
	{
		printf("My pid is %d\n",pid);
		printf("This is a parent process.\n");
	}
return 0;
}
