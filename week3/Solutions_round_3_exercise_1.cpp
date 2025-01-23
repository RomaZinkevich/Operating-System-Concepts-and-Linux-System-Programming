#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
        cout << endl << "Number of command line arguments: " << argc-1 << endl;
	cout << "And they are:" << endl;
	for (int i=1; i<=argc; i++) {
		cout << argv[i] << endl;
	}
}
