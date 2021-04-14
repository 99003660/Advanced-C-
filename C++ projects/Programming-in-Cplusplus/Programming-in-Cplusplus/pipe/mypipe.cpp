#include "mypipe.h"

mypipe::mypipe():wr_fds(COUT),rd_fds(CIN)
{
    int fds[2];
    int res = pipe(fds);
    if(SUCESS == res)
    {
        rd_fds = fds[0];
        wr_fds = fds[1];
    }
    else
    {
        /* TODO */
    }
    
    
}

mypipe::mypipe(mypipe::fdesc_t rd_desc, mypipe::fdesc_t wr_desc):rd_fds(rd_desc),wr_fds(wr_desc)
{

}

ssize_t mypipe::pread(void *buf, size_t count)
{
    if(NULL == buf)
        return -1;

    return read(rd_fds, buf, count);
}
ssize_t mypipe::pwrite(const void *buf, size_t count)
{
    if(NULL == buf)
        return -1;

    return write(wr_fds, buf, count);
}

int mypipe::pclose(mypipe::fds_t fd)
{
    return close(fd);
}
mypipe::~mypipe()
{
    close(wr_fds);
    close(rd_fds);
}
