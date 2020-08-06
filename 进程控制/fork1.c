
/*
进程创建 fork()

*/
#include "apue.h"
#include <unistd.h>

int gloab = 6;
int main(void)
{
    int var = 88;
    pid_t pid;
    printf("fork before\n");
    if((pid = fork()) < 0)
    {
        err_sys("make fork fail ");
    }
    /*
    pid = 0 说明是在子进程里面返回的
    调用fork成功后会在父进程里面返回子进程的ID号，在子进程中返回0
    */
    else if (pid == 0)
    {
        var++;
        gloab++;
    }
    else 
    {
        sleep(2);
    }
    
    printf("pid  = %d  gloab = %d  var = %d \n",getpid(),gloab, );
    return 0;
}
