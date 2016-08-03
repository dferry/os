//Hello world - prints hello world message to terminal
//This version uses the write() system call
//David Ferry
//August 3, 2016

#include <unistd.h>

int main ( int argc, char* argv[] ){

	char* msg = "Hello world!\n";
	int msg_size = 14;

	write( STDOUT_FILENO, msg, msg_size );

	return 0;
}
