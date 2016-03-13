#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 32

int main(int argc, char** argv)
{
    char buf[BUF_SIZE];
    int n;
    while ( (n=read(0, buf, BUF_SIZE))>0 )
        {
            int sum = 0, m = 0;
            while (sum != n &&  (m = write(1, buf, n)) != -1) {
                sum += m;
            }
            if (sum != n)
                printf("%s", "Error");
                
        }
    
    
    return 0;
}