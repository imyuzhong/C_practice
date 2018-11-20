/*************************************************************************
	> File Name: cmdlib.c
	> Author: amoscykl
	> Mail: amoscykl@163.com 
	> Created Time: Sun 18 Nov 2018 09:15:01 PM DST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <pwd.h>

int help(){
	printf("This program are designed to help me duilt a engineer thinking.\n");
	printf("So, is any thing stupid may help me become better, please contact me.\n");
	return 0;
}

int whoami(int is_error_occur){
	uid_t this_uid;
	struct passwd * ptr_passwd;
	this_uid = getuid();
	ptr_passwd = getpwuid(this_uid);
	if (ptr_passwd == NULL){
		is_error_occur = 1;
		printf("[*] get UID fails.\n");
		return is_error_occur;
	}
	printf("%s\n", ptr_passwd->pw_name);
	return EXIT_SUCCESS;
}
