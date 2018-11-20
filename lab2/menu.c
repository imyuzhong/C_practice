/*************************************************************************
	> File Name: menu.c
	> Author: amoscykl
	> Mail: amoscykl@163.com 
	> Created Time: Sun 18 Nov 2018 07:11:06 PM DST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "cmdlib.h"

/*
 * receive cmd and execute corespondent code
 * accessable cmd are 'quit' 'help' 'dir' 'touch' 'cp' 'sort' 'pwd' 'whoami'
 * upcoming cmd include 'ping' 'shutdown'
 */
int main(){
	char cmd[128];
	int is_error_occur = 0;
	while (1){
		scanf("%s", cmd);
		// if cmd equals to string "help"
		if (strcmp(cmd, "help") == 0){
			// help() will be here
			help();
		}
		else if (strcmp(cmd, "quit") == 0){
			// quit this proc
			exit(is_error_occur);
		}
		else if (strcmp(cmd, "dir") == 0){
			// dir goes here
		}
		else if (strcmp(cmd, "touch") == 0){
			// touch goes here
		}
		else if (strcmp(cmd, "cp") == 0){
			// cp goes here
		}
		else if (strcmp(cmd, "sort") == 0){
			// sort goes here
		}
		else if (strcmp(cmd, "pwd") == 0){
			// pwd goes here
		}
		else if (strcmp(cmd, "whoami") == 0){
			// whoami goes here
			return whoami(is_error_occur);
		}
		else {
			// if cmd is Not supportted, give tip and quit
			printf("cmd %s NOT found, please rerun and type cmd \"help\".\n", cmd);
			exit(is_error_occur);
		}
	}
}
