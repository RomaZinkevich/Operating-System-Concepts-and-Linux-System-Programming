#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
using namespace std;

int main(){
        pid_t pid = fork();
	if (pid == 0) {
		char *const argv[] = { (char *)"ls", nullptr };
	        char *const envp[] = { nullptr };
		execve("/bin/ls", argv, envp);
	} else {
		int status;
		waitpid(-1, &status, 0);
	}

}
