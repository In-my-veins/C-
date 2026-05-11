#include <stdio.h>
int main(){

enum Command { CMD_START, CMD_STOP,
CMD_PAUSE, CMD_RESTART };

void startHandler() {
    printf("Action: System Started\n");
}

void stopHandler() {
    printf("Action: System Stopped\n");
}

void pauseHandler() {
    printf("Action: System Paused\n");
}

void restartHandler() {
    printf("Action: System Restarted\n");
}

void executeCommand(enum Command cmd){
    switch (cmd)
    {
    case constant expression:
        /* code */
        break;
    
    default:
        break;
    }te
}

    return 0;
}