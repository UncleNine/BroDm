/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *	  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern "C" size_t /*__attribute__((weak))*/ __fwrite_chk(const void * __restrict buf, size_t size, size_t count,
                               FILE * __restrict stream, size_t /*buf_size*/) {
  return fwrite(buf, size, count, stream);
}

extern "C" void* /*__attribute__((weak))*/ __memchr_chk(const void* s, int c, size_t n, size_t /*buf_size*/) {
  return memchr(s, c, n);
}
