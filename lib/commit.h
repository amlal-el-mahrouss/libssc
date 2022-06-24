#pragma once

#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>

typedef struct Committer {
    char author[1024];
    char email[512];
} Committer;
