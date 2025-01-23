#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]){
        pid_t pid = fork();
	if (pid == 0) {
		execvp(argv[1], &argv[1]);
	} else {
		int status;
		waitpid(-1, &status, 0);
	}

}
