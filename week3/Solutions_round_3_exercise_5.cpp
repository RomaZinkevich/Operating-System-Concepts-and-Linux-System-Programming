#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#include <cstring>
#include <string>
using namespace std;

int main(){
	while (1) {
		string command;
		string parameters;
		string input;
		cout << "Enter a command: ";
		getline(cin, input);
		if (input.empty()) {
			cout << "Program run stops running" << endl;
			break;
		}
		size_t spacePos = input.find(' ');
		if (spacePos != string::npos) {
			command = input.substr(0, spacePos);
			parameters = input.substr(spacePos + 1); 
		} else {
			command = input;
		}
		if (fork()!=0){
			int status;
			waitpid(-1, &status, 0);
		} else {
			if (parameters.empty()) {
				const char *args[] = { command.c_str(), nullptr };
				execvp(command.c_str(), const_cast<char **>(args));
			} else {
				const char *args[] = { command.c_str(), parameters.c_str(), nullptr };
				execvp(command.c_str(), const_cast<char **>(args));
			}
		}
	}

}
