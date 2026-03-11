#include "kernel/types.h"
#include "user/user.h"

int
main(void)
{
    printf(1, "\033[2J\033[H");
    exit();
}