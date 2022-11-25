/*
This challenge is one of the pwn challenges at HKCERT CTF 2022
Organiser's writeup at https://hackmd.io/@blackb6a/hkcert-ctf-2022-i-en-3f8a9ef6
Source code is copied from the video : https://www.youtube.com/watch?v=YODluCDBf5I&t=7937s

This is the original source code.

Compile : gcc -o echo echo.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int can_leave = 0;

void init() {
	setvbuf(stdout, 0, 2, 0);
	alarm(60);
}

void get_shell() {
	system("/bin/sh");
}

void vuln_func() {
	char buf[100];
	printf("Welcome to echo service v1.07, I will print all of your input.  Input:\n");
	scanf("%s", buf);
	while (strcmp(buf, "--") != 0 || !can_leave) {   // the original code has logical error
//	while (strcmp(buf, "--") != 0 && !can_leave) {   // this code is better but still has logical error as "can_leave" is useless
//	while (strcmp(buf, "--") != 0) {                 // modified code
		printf(buf);
		printf("\nInput:\n");
		scanf("%s", buf);
	}
}

int main(int argc, char const *arg[]) {
	init();
	vuln_func();
	return 0;
}

