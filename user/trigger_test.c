// user/trigger_test.c

#include "kernel/types.h"
#include "user/user.h"

int main(void)
{
    printf("trigger_test running!\n");
    trigger();
    exit(0);
}
