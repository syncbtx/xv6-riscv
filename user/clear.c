#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char** argv)
{
    printf("\x1b[H\x1b[J");
    exit(0);
}