/* 
 * This file is part of the Navi Singh's experiments 
 * (https://github.com/navisinghnz9/mem_monitor)
 *
 * Copyright (c) 2019 Navjot Singh.
 * 
 * This program is free software: you can redistribute it and/or modify  
 * it under the terms of the GNU General Public License as published by  
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Navjot Singh
 * Email: navisinghnz9@gmail.com
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "mem_monitor.h"


/*
 * preventing preprocessor on malloc call in this file to call malloc_monitor
 * leading to an infinite recursion
 */
#define malloc malloc
#define free free


void* malloc_monitor(size_t size, const char *file, int line, const char *func) {

    void *ptr = malloc(size);
    printf ("malloc_monitor() :: allocated = %s, %i, %s, %p[%li]\n", file, line, func, ptr, size);

    // FIXME - Add the mem allocation info to linked list

    return ptr;
}

void free_monitor(void *ptr, const char *file, int line, const char *func) {
  free(ptr);
  // FIXME - Remove ptr from linked list
  
  printf ("free_monitor() :: removed = %s, %i, %s, %p\n", file, line, func, ptr);
}
