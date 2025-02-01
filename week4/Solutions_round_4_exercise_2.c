#include <errno.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

int main(){
	int fd = open("example.txt", 0);
	if (fd == -1) {
		perror("Error opening file");
		printf("Error opening file: %s (errno: %d)\n", strerror(errno), errno);
		return 1;
	}
	return 0;
}

