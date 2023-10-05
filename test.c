#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>
#include<unistd.h>
int main(){
	char buff[10];
	int fd;
	fd = open("test.txt", O_RDONLY);
	
	read(fd, buff, 10);
	
	write(1, buff, 10);

	
	close(fd);
}
