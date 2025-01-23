#include <iostream>
#include <unistd.h>
#include <cstring>

int main(){
	char *const argv[] = { (char *)"ls", nullptr };
    	char *const envp[] = { nullptr }; 
        execve("/bin/ls", argv, envp);
}

