#include <stdio.h>
#include <unistd.h>

int main() {

    pid_t pid, ppid, uid, euid, gid, egid;

    pid = getpid();
    ppid = getppid();
    uid = getuid();
    euid = geteuid();
    gid = getgid();
    egid = getegid();

    printf("进程ID: %u\n", pid);
    printf("父进程ID: %u\n", pid);
    printf("用户ID: %u\n", uid);
    printf("有效用户ID: %u\n", euid);
    printf("组ID: %u\n", gid);
    printf("有效组ID: %u\n", egid);
};