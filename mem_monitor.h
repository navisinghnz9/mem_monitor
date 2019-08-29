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

#ifndef __MEM_MONITOR__
#define __MEM_MONITOR__

#include <sys/types.h>

#define malloc(X) malloc_monitor( X, __FILE__, __LINE__, __FUNCTION__)

void* malloc_monitor(size_t size, const char *file, int line, const char *func);

#define free(X) free_monitor( X, __FILE__, __LINE__, __FUNCTION__)

void free_monitor(void *ptr, const char *file, int line, const char *func);

#endif
