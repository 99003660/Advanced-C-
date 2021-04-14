#include<iostream>
#include<stdlib.h>
#include"unistd.h"
//#include<fstream>
using namespace std;

typedef enum fds_t{
    PIPE_READ,
    PIPE_WRITE
}fds_t;

typedef enum syscall_fd_t{
    PIPE_READ,
    PIPE_WRITE
}syscall_fd_t;

typedef enum descriptor_t{
    CIN,
    COUT,
    CERR
}descriptor_t;

class mypipe
{
    //data
private:
    int rd_fds;
    int wr_fds;
public:
    mypipe();
    ssize_t pread(void *buf, size_t count);
    ssize_t pwrite(const void *buf, size_t count);
    int pclose();
    ~mypipe();
};

ssize_t pread(void *buf, size_t count);
{
    return read(rd_fds, buf, count);
}

ssize_t pwrite(const void *buf, size_t count);
{
    if(NULL==buf)
        return -1;
    return write(rd_fds, buf, count);
}

int pclose(fds_t fd)
{
    return close(fd);
}

mypipe::mypipe()  
{
    rd_fds
    wr_fds
}

mypipe::~mypipe()
{

}