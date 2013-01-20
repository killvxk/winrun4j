/* -----------------------------------------------------------------*-C-*-
   libffi - Copyright (c) 1996-2003, 2007, 2008  Red Hat, Inc.

   Permission is hereby granted, free of charge, to any person obtaining
   a copy of this software and associated documentation files (the
   ``Software''), to deal in the Software without restriction, including
   without limitation the rights to use, copy, modify, merge, publish,
   distribute, sublicense, and/or sell copies of the Software, and to
   permit persons to whom the Software is furnished to do so, subject to
   the following conditions:

   The above copyright notice and this permission notice shall be included
   in all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED ``AS IS'', WITHOUT WARRANTY OF ANY KIND,
   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
   NONINFRINGEMENT.  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
   HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
   WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
   DEALINGS IN THE SOFTWARE.

   ----------------------------------------------------------------------- */

/* -------------------------------------------------------------------

   -------------------------------------------------------------------- */

#ifndef LIBFFICONFIG_H
#define LIBFFICONFIG_H

#define HAVE_ALLOCA         1
#define HAVE_MEMCPY         1
#define HAVE_MEMORY_H       1
#define HAVE_STDLIB_H       1
#define HAVE_STRING_H       1
#define HAVE_SYS_STAT_H     1
#define HAVE_SYS_TYPES_H    1
#define STDC_HEADERS        1

#if defined(X86_WIN64)
#define SIZEOF_DOUBLE       8
#define SIZEOF_LONG_DOUBLE  0
#else
#define SIZEOF_DOUBLE       8
#define SIZEOF_LONG_DOUBLE  0
#endif

#ifdef LIBFFI_ASM
#define FFI_HIDDEN(name)
#else
#define FFI_HIDDEN
#endif

#endif /* LIBFFICONFIG_H */
