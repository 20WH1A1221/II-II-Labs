#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
int main(){
int fd,fd1;
char buf[100] = "Hello Bvrit";
char buf1[100];
fd = open("Before_lseek.txt",O_RDWR|O_CREAT,0777);
fd1 = open("After_lseek.txt",O_RDWR|O_CREAT,0777);
write(fd,buf,strlen(buf));
lseek(fd,-5,SEEK_CUR);
write(fd1,buf1,read(fd,buf1,strlen(buf)));
close(fd);
close(fd1);
return 0;
} 
