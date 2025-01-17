#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int main() {
	char buff[PATH_MAX + 1];
	getcwd(buff, PATH_MAX + 1);
	printf("Current Working Directory: %s\n", buff);
}
