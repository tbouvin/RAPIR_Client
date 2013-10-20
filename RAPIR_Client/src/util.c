/*
 * util.c
 *
 *  Created on: Oct 20, 2013
 *      Author: tbouvin
 */
#include "util.h"

int connectToServer() {
	sock = socket(AF_INET, SOCK_STREAM, 0);
	if (sock < 0) {
		perror("Socket Failed");
		return -1;
	}

	clientAddr.sin_family = AF_INET;
	inet_pton(AF_INET, "10.0.1.10", &(clientAddr.sin_addr));
	clientAddr.sin_port = htons(5678);
	if(connect(sock, (struct sockaddr *) &clientAddr, sizeof(clientAddr)) < 0) {
			perror("Connect Failed");
			return -1;
	}

	return 0;
}

void parseStdOut(char* str) {

	char c;
	int i;
	for(i = 0; (c = getchar()) != '\n'; ++i) {
		str[i] = c;
	}
	str[i] = '\0';

//	printf("Typed Command: %s\n", str);
}

int sendCommand(char* command) {
	if(write(sock, command, sizeof(command)) < 0) {
		perror("Write to socket failed");
		return -1;
	}
	return 0;
}

