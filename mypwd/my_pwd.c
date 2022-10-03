#include <unistd.h>
#include <string.h>
#include <stdio.h>
int main(int argc, char* argv[]){
	char* current_dir[100] = {"\0"};
	char* ret;
	ret = getcwd(current_dir, 100);
	if(ret){
		printf("%s\n", ret);
	}

}
