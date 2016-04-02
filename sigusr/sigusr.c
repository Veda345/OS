#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void my_handler(int signal, siginfo_t* si, void* ignore) {
    if(signal == SIGUSR1)
        printf("SIGUSR1 from %d\n", si->si_pid);
    else
        printf("SIGUSR2 from %d\n", si->si_pid);
}

int main() {
    struct sigaction act;
    act.sa_sigaction = my_handler;
    act.sa_flags = SA_SIGINFO;
    
    sigaction(SIGUSR1, &act, NULL);
    sigaction(SIGUSR2, &act, NULL);
    
    if (!sleep(10)) {
        printf("No signals were caught\n");
    }
    return 0;
}
