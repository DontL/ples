#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#define APP "./hello"
#define SLEEP 10
int main(int argc, char *argv[])
{
    pid_t app,appstatus;
    int status;

    while(1)
    {
        app = fork();
        if(app == -1)
        {   perror("cannot fork , app not run");
            exit(EXIT_FAILURE);
        }
        
        if(app == 0)
        {
            execl(APP, "");
            sleep(SLEEP);
        }
        else {
            appstatus = waitpid(app, &status, 0);
            printf("process exited with %d status,restarting ...\n",status);
        }
}
}
