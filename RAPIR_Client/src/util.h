/*
 * util.h
 *
 *  Created on: Oct 20, 2013
 *      Author: tbouvin
 */

#ifndef UTIL_H_
#define UTIL_H_

#include <stdio.h>
#include <unistd.h>
#include <arpa/inet.h>

int sock;
struct sockaddr_in clientAddr;

int connectToServer();
void parseStdOut(char* str);
int sendCommand(char* command);

#endif /* UTIL_H_ */
