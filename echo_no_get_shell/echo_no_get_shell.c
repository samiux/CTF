/*
This challenge is one of the pwn challenges at HKCERT CTF 2022
Organiser's writeup at https://hackmd.io/@blackb6a/hkcert-ctf-2022-i-en-3f8a9ef6
Source code is copied from the video : https://www.youtube.com/watch?v=YODluCDBf5I&t=7937s

Modified by Samiux on Nov 23, 2022

Compile : gcc -o echo_no_get_shell echo_no_get_shell.c
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

void vuln_func() {
	char buf[100];
	printf("Welcome to echo service v1.07, I will print all of your input.  Input:\n");
	scanf("%s", buf);
	while (strcmp(buf, "--") != 0 || !can_leave) {
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
