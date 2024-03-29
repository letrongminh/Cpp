//
// Created by trongminhle on 12/3/21.
//

#ifndef ASSIGNMENT_MEMORY_ALLOCATOR_TEST_H
#define ASSIGNMENT_MEMORY_ALLOCATOR_TEST_H

#define _DEFAULT_SOURCE

#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include <sys/mman.h>
#include "mem.h"
#include "mem_internals.h"
#include "util.h"



struct test_result { void *_function;};

struct test {
    struct test_result (*test_function)(void);
};
void debug_line(FILE *f);
bool make_init_heap();

struct test_result test_1();
struct test_result test_2();
struct test_result test_3();
struct test_result test_4();
struct test_result test_5();


#endif //ASSIGNMENT_MEMORY_ALLOCATOR_TEST_H
