#include <iostream>
#include <fcntl.h>
#include <unistd.h>
using namespace std;

int main (int argc, char *argv[]) {
	int fd = open("3.txt", O_RDONLY);
	if (fd == -1){
		perror("Error opening file");
		return 1;
	}
	char buffer[1];
	int res = read(fd, buffer, sizeof(buffer));
	if (res == -1){
		perror("Error reading the file");
		return 1;
	}
	cout << buffer << endl;
	int res2 = close(fd);
	if (res2 == -1){
		perror("Error closing the file");
		return 1;
	}
	return 0;
}

