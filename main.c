/*
    A program to edit text files
*/

#include<stdio.h>

int
process_commands(char command) {
    return 0;
} 

int
main(int argc, char *argv[]) {
   
    if (argc == 1) {
	printf("Please specify a file to edit. If you don't have a file, use \n$ touch <filename> to create a file.\n");
    }
    if (argc == 2) {
	printf("filename: %s\n", argv[1]);
    }

    return 0;
}
