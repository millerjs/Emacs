
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
    
    if (argc <= 2)
	exit(1);

    char* type = strdup(argv[1]);
    char* cmd = strdup(argv[2]);
    char* p = cmd;

    int first_count = 0;
    int second_count = 0;
    char offset = 'a'-1;
    char first, second;
    second = '\0';
    int linepos = 0;
    int colpos = 0;

    first = *p++;
    linepos = first - offset;
    if ((first > 122) || (first < 97)){
	linepos = 0;
    }

    while (*p){
	if (*p == first){
	    first_count++;
	    linepos += 26;
	} else {
	    first = 0;
	    colpos = (*p - offset)*5-5;

	}


	p++;
    }

    if (*type == '0')
	printf("%d", linepos);
    else
	printf("%d", colpos);
    

}

