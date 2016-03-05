#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 32

int main(int argc, char** argv)
{
    char buf[BUF_SIZE];
    int fd;
    
    if (argc == 1) {
        fd = 0;
        int n;
        while ((n=read(fd, buf, BUF_SIZE))>0)
        {
            write(1, buf, n);
        }
    } else {
        for (size_t i = 0; i < argc; i++)  {
            fd = open(argv[i], O_RDONLY);
            int n;
            while ((n=read(fd, buf, BUF_SIZE))>0)
            {
                write(1, buf, n);
            }
            close(fd);
        }
        
    }
    
    return 0;

}