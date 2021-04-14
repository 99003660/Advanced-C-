#include<stdlib.h>
#include"unistd.h"

typedef enum fds_t{
    PIPE_READ,
    PIPE_WRITE
}fds_t;

typedef enum syscall_ret_t{
    ERROR=-1,
    SUCCESS
}syscall_ret_t;

typedef enum descriptor_t{
    CIN,
    COUT,
    CERR
}descriptor_t;

mypipe();

mypipe(int,int);

ssize_t pread(void *buf, size_t count);
{

}

ssize_t pwrite(const void *buf, size_t count);
{
    if(NULL==buf)
        return -1;
    return read(rd_fds, buf, count);
}

int pclose(fds_t fd)
{
    return close(fd)
}