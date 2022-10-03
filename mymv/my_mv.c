#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>


int main(int argc, char* argv[]){

	char* source = argv[1];
	char* dist = argv[2];
	
	int source_dis = open(source,O_RDONLY, 0644);
	char* buf[100];
	if(source_dis > 0){
	int read_ret = 0;
		while((read_ret = (read(source_dis, buf, 100))) != 0){
			
				
			int dist_dis = open(dist, O_CREAT | O_WRONLY, 0644);
			int write_ret = write(dist_dis, buf, read_ret);
			int remove_ret = remove(source);

		}
	
	
	}	

	

}
