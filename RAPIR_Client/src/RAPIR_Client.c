/*
 ============================================================================
 Name        : RAPIR_Client.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util.h"

int main(void) {
	printf("Client Started\n");
	if(connectToServer() < 0)
		exit(1);

	printf("Connected to Server\n");

	while(1) {
		char* str;
		str = (char*) malloc(16);
		parseStdOut(str);
		sendCommand(str);
//		printf("Command Sent\n");
		free(str);
	}
	return 0;
}
