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
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

int main(void) {
	int sock;
	if(sock = socket(AF_INET, SOCK_STREAM, 0) < 0)
	  {
	    perror("Socket Failed");
	    exit(1);
	  }


}
