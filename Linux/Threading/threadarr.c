#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void* f1(void * arg);

int main(int argc,char* argv[])
{
 char* msg[] = {"T1","T2","T3","T4","T5"};
 pthread_t tids[5];
 for(int i=0;i<5;i++)
 {
	pthread_create(&tids[i],NULL,f1,(void*)msg[i]);
	pthread_join(tids[i],NULL);
 }
 printf("main(): FASAK\n");
 exit(0);
}

void* f1(void* arg)
{
 printf("I am child %s\n",(char*)arg);
 return 0;
}
