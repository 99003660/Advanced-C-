/**
 * @file mypipe.h
 * @author Bharath.G (bharath.g@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-03-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __MYPIPE_H__
#define __MYPIPE_H__

#include <stdlib.h>
#include "unistd.h"

class mypipe
{
private:
    /* data */
    int rd_fds;
    int wr_fds;

public:
    typedef enum fds_t
    {
        PIPE_READ,
        PIPE_WRITE
    } fds_t;

    typedef enum fdesc_t
    {
        CIN,
        COUT,
        CERR
    } fdesc_t;

    typedef enum syscall_ret_t
    {
        ERROR = -1,
        SUCESS

    } syscall_ret_t;

    /**
     * @brief Construct a new mypipe object
     * and assigns the file descriptor for read and write
     */
    mypipe();

    /**
     * @brief Construct a new mypipe object
     * 
     * @param[in] fdesc_t File descriptor for read
     * 
     * @param[in] fdesc_t File descriptor for write
     */
    mypipe(fdesc_t, fdesc_t);
    /**
     * @brief Read operation on pipe
     * 
     * @param[in] buf Pointer to the data buffer
     * @param[in] count Maximum number of bytes the buffer can store
     * @return ssize_t Number of bytes read from the pipe
     */
    ssize_t pread(void *buf, size_t count);
    /**
     * @brief 
     * 
     * @param[out] buf Pointer to the data buffer
     * @param[out] count Number of bytes to write to pipe
     * @return ssize_t Number of bytes written to pipe
     */
    ssize_t pwrite(const void *buf, size_t count);

    /**
     * @brief Closes the communication pipe 
     * 
     * @return int o if success, negative number if error.
     */
    int pclose(fds_t);
    ~mypipe();
};

#endif /* __MYPIPE_H__ */