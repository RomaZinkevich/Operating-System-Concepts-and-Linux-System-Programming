#include <iostream>
#include <fcntl.h>
#include <unistd.h>
using namespace std;

int main (int argc, char *argv[]) {
	int fd = creat("3.txt", 1);
	if (fd == -1){
		perror("Error creating file");
		return 1;
	}
	char ch;
	cin >> ch;
	int res = write(fd, &ch, sizeof(ch));
	if (res == -1){
		perror("Error writing in file");
		return 1;
	}
	int res2 = close(fd);
	if (res2 == -1){
		perror("Error closing the file");
		return 1;
	}
	return 0;
}

