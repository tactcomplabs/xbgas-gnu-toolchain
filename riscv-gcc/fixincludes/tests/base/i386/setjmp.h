/*  DO NOT EDIT THIS FILE.

    It has been auto-edited by fixincludes from:

	"fixinc/tests/inc/i386/setjmp.h"

    This had to be done to correct non-standard usages in the
    original, manufacturer supplied header file.  */



#if defined( DARWIN_LONGJMP_NORETURN_CHECK )
void siglongjmp(sigjmp_buf, int) __attribute__ ((__noreturn__));
#endif  /* DARWIN_LONGJMP_NORETURN_CHECK */