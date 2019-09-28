#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc,char *argv[])
{
 if(argc != 2)
 {
  fprintf(stderr,"Incorrect no of args\n");
  return 1;
 } 

 pid_t cpid;
 int n = atoi(argv[1]);
 int i;
 for(i = 1;i<=n;i++)
 {
  //if(fork() !=0)
  //{
	fork();
  //}
 }
 fprintf(stderr,"PID: %d ,PPID: %d\n",(long)getpid(),
(long)getppid());
 while(1);
 return 0;
} 
 
 
