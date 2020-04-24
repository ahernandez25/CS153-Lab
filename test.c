#include "types.h"
#include "stat.h"
#include "user.h"
int main(int argc, char *argv[])
{
    //hello();

    int pid = fork();
    int status;
    if(pid == 0){

        printf(1, "child process -%d", getpid());
        exit2(0);

    } else{
        pid = waitpid(pid, &status, 0);
        printf(1, "\n\nstatus from child - %d \tPID parent: %d\n\n", status, pid);
    }


    exit();
}