#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#define max 16
#define Th_max 4

int a[max]={1,5,7,10,12,14,15,18,20,22,25,27,300,64,110,220};
//Array to store max of threads
int max_num[Th_max]={0};
int thread_no =0;

//Fn to find maximum
void maximum(void* arg)
{
 int i,num = thread_no++;
 int maxs = 0;
 for(i = num*(max/4);i<(num+1)*(max/4);i++)
 {
  if(a[i]>maxs)
    maxs =a[i];
 }
 max_num[num] = maxs;
}

/*int g = 0;
void *myThread(void *vargp)
{
 sleep(300);
 int *myid = (int*)vargp;
 static int s = 0;
 ++s, ++g;
 printf("Thread ID: %d,Static: %d, Global: %d\n",*myid,++s,++g);
// sleep(300);
// printf("Printing Thread\n");
// return NULL;
}
*/
//Driver Code
int main()
{
 int maxs = 0;
 int i;
 pthread_t threads[Th_max];
//Creating threads
 for(i=0;i<Th_max;i++)
  pthread_create(&threads[i],NULL,maximum,(void*)NULL);
//Joining threads
 for(i=0;i<Th_max;i++)
  pthread_join(threads[i],NULL);
//Finding max element in array
 for(i=0;i<Th_max;i++)
 {
  if(max_num[i]>maxs)
   maxs = max_num[i];
 }
 printf("Max Element is: %d\n",maxs);
 return 0;
}
/*
 pthread_exit(NULL);
 return 0;
 pthread_t thread_id;
 printf("Before Thread\n");
 pthread_create(&thread_id,NULL,myThread,NULL);
 pthread_join(thread_id,NULL);
 printf("After Thread\n");
 exit(0);*/


