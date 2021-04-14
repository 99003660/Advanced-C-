#include "mypipe.h"
#include <gtest/gtest.h>
 
TEST(MypipeTest, Constructor) { 
    mypipe p1;
    int ret = fork();
    switch(ret)
    {
        case -1:
            {
                perror("fork");
                exit(-1);
            }
            break;
        case 0:
            {
                char rd_buf[11] = "";
                EXPECT_EQ(10, p1.pread((void *)rd_buf, 10));        
                break;
            }
            
        default:
            {
                int status = 0;
                char buffer[11] = "Hi hello12";
                EXPECT_EQ(10, p1.pwrite((void *)buffer, 10));
                
                waitpid(-1,&status,0);
            }

    }
    
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}