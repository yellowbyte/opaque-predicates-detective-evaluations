/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _IO_FILE;
struct timeval;
extern int pthread_cond_signal(int *cond ) ;
extern void exit(int status ) ;
extern int fclose(void *stream ) ;
extern int fseek(struct _IO_FILE *stream , long offs , int whence ) ;
extern int close(int filedes ) ;
extern int pthread_create(void *thread , void *attr , void *start_routine , void *arg ) ;
char **_global_argv  =    (char **)0;
extern int fcntl(int filedes , int cmd  , ...) ;
extern int unlink(char const   *filename ) ;
extern int pthread_mutex_lock(int *mutex ) ;
struct timeval {
   long tv_sec ;
   long tv_usec ;
};
extern int pthread_cond_init(int *cond , int *attr ) ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern int raise(int sig ) ;
long _1alwaysZero  =    0;
extern void abort() ;
extern int atoi(char const   *s ) ;
extern void *malloc(unsigned long size ) ;
extern int getpagesize() ;
extern int posix_memalign(void **memptr , unsigned long alignment , unsigned long size ) ;
extern double ceil(double x ) ;
extern int pthread_join(void *thread , void **value_ptr ) ;
extern int pthread_cond_broadcast(int *cond ) ;
extern int rand() ;
extern void free(void *ptr ) ;
extern unsigned long strlen(char const   *s ) ;
int main(int argc , char **argv , char **_formal_envp ) ;
extern unsigned long write(int filedes , void *buf , unsigned long nbyte ) ;
typedef long __time_t;
typedef __time_t time_t;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern int gettimeofday(struct timeval *tv , void *tz ) ;
int _global_argc  =    0;
void megaInit(void) ;
char **_global_envp  =    (char **)0;
extern int fscanf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
int fib(int n ) ;
extern int scanf(char const   *format  , ...) ;
extern long clock(void) ;
long _1entropy  =    0;
extern void perror(char const   *str ) ;
extern unsigned long read(int filedes , void *buf , unsigned long nbyte ) ;
extern int pthread_mutex_unlock(int *mutex ) ;
extern int gethostname(char *name , unsigned long namelen ) ;
extern int pthread_cond_wait(int *cond , int *mutex ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
extern void qsort(void *base , unsigned long nel , unsigned long width , int (*compar)(void *a ,
                                                                                       void *b ) ) ;
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern int pthread_mutex_init(int *mutex , int *attr ) ;
extern int strcmp(char const   *a , char const   *b ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern double difftime(long tv1 , long tv0 ) ;
extern void signal(int sig , void *func ) ;
extern  __attribute__((__nothrow__)) time_t ( __attribute__((__leaf__)) time)(time_t *__timer ) ;
typedef struct _IO_FILE FILE;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
extern int open(char const   *filename , int oflag  , ...) ;
extern double sqrt(double x ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) srand)(unsigned int __seed ) ;
extern double log(double x ) ;
extern int snprintf(char *str , unsigned long size , char const   *format  , ...) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
int fib(int n ) 
{ 
  int a ;
  int b ;
  int i ;
  int c ;
  long one6 ;
  long randomFuns_n7 ;
  long one8 ;
  long randomFuns_n9 ;
  long one10 ;
  long randomFuns_n11 ;
  long one12 ;
  long randomFuns_n13 ;
  long one14 ;
  long randomFuns_n15 ;
  int _3_fib__BARRIER_4 ;

  {
  _1entropy = (long )n | _1entropy;
  randomFuns_n15 = (_1entropy - ((_1entropy << 1L) & (_1entropy >> 63L))) + 6;
  while (randomFuns_n15 > 1) {
    if (randomFuns_n15 % 2 == 1) {
      randomFuns_n15 = 3 * randomFuns_n15 + 1;
    } else {
      randomFuns_n15 /= 2;
    }
    one14 = randomFuns_n15;
  }
  _1alwaysZero = (one14 + ~ 1) + 1L;
  _3_fib__BARRIER_4 = 1;
  a = 1;
  b = 1;
  i = 3;
  while (i <= n) {
    c = a + b;
    a = b;
    b = c;
    i ++;
  }
  _1entropy = (long )a + _1entropy;
  _1entropy = (long )c - _1entropy;
  randomFuns_n13 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 8;
  while (randomFuns_n13 > 1) {
    {
    if ((((_1alwaysZero & ((_1entropy & ~ 1) + 1)) * (_1alwaysZero | ((_1entropy & ~ 1) + 1)) + (_1alwaysZero & ~ ((_1entropy & ~ 1) + 1)) * (~ _1alwaysZero & ((_1entropy & ~ 1) + 1))) - ~ 1) - 1L) {
      if ((((_1alwaysZero & ((_1entropy & ~ 3) + 3)) * (_1alwaysZero | ((_1entropy & ~ 3) + 3)) + (_1alwaysZero & ~ ((_1entropy & ~ 3) + 3)) * (~ _1alwaysZero & ((_1entropy & ~ 3) + 3))) ^ 0) + ((((_1alwaysZero & ((_1entropy & ~ 3) + 3)) * (_1alwaysZero | ((_1entropy & ~ 3) + 3)) + (_1alwaysZero & ~ ((_1entropy & ~ 3) + 3)) * (~ _1alwaysZero & ((_1entropy & ~ 3) + 3))) & 0) + (((_1alwaysZero & ((_1entropy & ~ 3) + 3)) * (_1alwaysZero | ((_1entropy & ~ 3) + 3)) + (_1alwaysZero & ~ ((_1entropy & ~ 3) + 3)) * (~ _1alwaysZero & ((_1entropy & ~ 3) + 3))) & 0))) {
        __asm__  volatile   (".byte 0x31,0xff,0xe8,0x2e,0x32,0x0,0x0":);
      } else
      if (randomFuns_n13 % 2 == 1) {
        randomFuns_n13 = 3 * randomFuns_n13 + 1;
      } else {
        randomFuns_n13 /= 2;
      }
    } else {
      __asm__  volatile   (".byte 0x0,0x0,0x48,0x8d,0x15,0x98,0x7,0x0":);
    }
    }
    one12 = randomFuns_n13;
  }
  _1alwaysZero = one12 / 2;
  randomFuns_n7 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 2;
  while (randomFuns_n7 > 1) {
    if (randomFuns_n7 % 2 == 1) {
      randomFuns_n7 = 3 * randomFuns_n7 + 1;
    } else {
      randomFuns_n7 /= 2;
    }
    one6 = randomFuns_n7;
  }
  _1alwaysZero = one6 >> 1;
  _1entropy = (long )b ^ _1entropy;
  randomFuns_n9 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 8;
  while (randomFuns_n9 > 1) {
    if ((((_1alwaysZero & (((_1entropy - 1) - ((_1entropy | ~ 1) << 1L)) - 2L)) * (_1alwaysZero | (((_1entropy - 1) - ((_1entropy | ~ 1) << 1L)) - 2L)) + (_1alwaysZero & ~ (((_1entropy - 1) - ((_1entropy | ~ 1) << 1L)) - 2L)) * (~ _1alwaysZero & (((_1entropy - 1) - ((_1entropy | ~ 1) << 1L)) - 2L))) | 0) + (((_1alwaysZero & (((_1entropy - 1) - ((_1entropy | ~ 1) << 1L)) - 2L)) * (_1alwaysZero | (((_1entropy - 1) - ((_1entropy | ~ 1) << 1L)) - 2L)) + (_1alwaysZero & ~ (((_1entropy - 1) - ((_1entropy | ~ 1) << 1L)) - 2L)) * (~ _1alwaysZero & (((_1entropy - 1) - ((_1entropy | ~ 1) << 1L)) - 2L))) & 0)) {
      __asm__  volatile   (".byte 0x3d,0x8c,0x35,0x0,0x0":);
    } else
    if (randomFuns_n9 % 2 == 1) {
      randomFuns_n9 = 3 * randomFuns_n9 + 1;
    } else {
      randomFuns_n9 /= 2;
    }
    one8 = randomFuns_n9;
  }
  _1alwaysZero = ((~ one8 | (0xffffffffffffffffUL << 1)) + one8) + 1L;
  _1entropy = (long )i | _1entropy;
  randomFuns_n11 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 8;
  while (randomFuns_n11 > 1) {
    if (randomFuns_n11 % 2 == 1) {
      randomFuns_n11 = 3 * randomFuns_n11 + 1;
    } else {
      randomFuns_n11 /= 2;
    }
    one10 = randomFuns_n11;
  }
  _1alwaysZero = (one10 & ~ 1) - (~ one10 & 1);
  return (b);
}
}
int main(int argc , char **argv , char **_formal_envp ) 
{ 
  time_t t ;
  time_t tmp ;
  int n ;
  int f ;
  int tmp___0 ;
  int _BARRIER_0 ;
  unsigned long entropy_strLen10 ;
  unsigned long entropy_strLen11 ;
  long one12 ;
  long randomFuns_n13 ;
  unsigned long entropy_strLen14 ;
  long one15 ;
  long randomFuns_n16 ;
  unsigned long entropy_strLen17 ;
  long one18 ;
  long randomFuns_n19 ;
  unsigned long entropy_strLen20 ;
  long one21 ;
  long randomFuns_n22 ;
  unsigned long entropy_strLen23 ;
  long one24 ;
  long randomFuns_n25 ;
  unsigned long entropy_strLen26 ;
  long one27 ;
  long randomFuns_n28 ;
  int _2_main__BARRIER_1 ;
  unsigned long entropy_strLen30 ;
  unsigned long entropy_strLen31 ;
  long one32 ;
  long randomFuns_n33 ;
  int _2_main__BARRIER_2 ;
  unsigned long entropy_strLen35 ;
  long one36 ;
  long randomFuns_n37 ;
  int _2_main__BARRIER_3 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;
  _1entropy = (long )argc ^ _1entropy;
  randomFuns_n28 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 10;
  while (randomFuns_n28 > 1) {
    if (randomFuns_n28 % 2 == 1) {
      randomFuns_n28 = 3 * randomFuns_n28 + 1;
    } else {
      randomFuns_n28 /= 2;
    }
    one27 = randomFuns_n28;
  }
  _1alwaysZero = (one27 + ~ 1) + 1L;
  _2_main__BARRIER_1 = 1;
  entropy_strLen31 = one18;
  if (*(argv + 1) != 0) {
    entropy_strLen31 = strlen(*(argv + 1));
  } else {

  }
  _1entropy = (long )entropy_strLen31 - _1entropy;
  randomFuns_n33 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 2;
  while (randomFuns_n33 > 1) {
    if (randomFuns_n33 % 2 == 1) {
      randomFuns_n33 = 3 * randomFuns_n33 + 1;
    } else {
      randomFuns_n33 /= 2;
    }
    one32 = randomFuns_n33;
  }
  _1alwaysZero = (~ one32 | (0xffffffffffffffffUL << 1)) - ~ one32;
  _2_main__BARRIER_2 = 1;
  _1entropy = (long )((unsigned long )_formal_envp) ^ _1entropy;
  randomFuns_n37 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 7;
  while (randomFuns_n37 > 1) {
    if (randomFuns_n37 % 2 == 1) {
      randomFuns_n37 = 3 * randomFuns_n37 + 1;
    } else {
      randomFuns_n37 /= 2;
    }
    one36 = randomFuns_n37;
  }
  _1alwaysZero = one36 / 2;
  _2_main__BARRIER_3 = 1;

  if (argc < 2) {
    _1entropy = t - _1entropy;
    randomFuns_n13 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 5;
    while (randomFuns_n13 > 1) {
      if (randomFuns_n13 % 2 == 1) {
        randomFuns_n13 = 3 * randomFuns_n13 + 1;
      } else {
        randomFuns_n13 /= 2;
      }
      one12 = randomFuns_n13;
    }
    _1alwaysZero = one12 >> 1;
    _1entropy = tmp + _1entropy;
    randomFuns_n16 = (_1entropy - ((_1entropy << 1L) & (_1entropy >> 63L))) + 9;
    while (randomFuns_n16 > 1) {
      if (randomFuns_n16 % 2 == 1) {
        randomFuns_n16 = 3 * randomFuns_n16 + 1;
      } else {
        randomFuns_n16 /= 2;
      }
      one15 = randomFuns_n16;
    }
    _1alwaysZero = one15 >> 1;
    _1entropy = (long )n ^ _1entropy;
    randomFuns_n19 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 4;
    while (randomFuns_n19 > 1) {
      if (randomFuns_n19 % 2 == 1) {
        randomFuns_n19 = 3 * randomFuns_n19 + 1;
      } else {
        randomFuns_n19 /= 2;
      }
      one18 = randomFuns_n19;
    }
    _1alwaysZero = ((~ one18 | (0xffffffffffffffffUL << 1)) + one18) + 1L;
    _1entropy = (long )f | _1entropy;
    randomFuns_n22 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 1;
    while (randomFuns_n22 > 1) {
      if (randomFuns_n22 % 2 == 1) {
        randomFuns_n22 = 3 * randomFuns_n22 + 1;
      } else {
        randomFuns_n22 /= 2;
      }
      one21 = randomFuns_n22;
    }
    _1alwaysZero = (~ one21 | (0xffffffffffffffffUL << 1)) - ~ one21;
    _1entropy = (long )tmp___0 + _1entropy;
    randomFuns_n25 = (_1entropy - ((_1entropy + _1entropy) & (_1entropy >> 63L))) + 3;
    while (randomFuns_n25 > 1) {
      if (randomFuns_n25 % 2 == 1) {
        randomFuns_n25 = 3 * randomFuns_n25 + 1;
      } else {
        randomFuns_n25 /= 2;
      }
      one24 = randomFuns_n25;
    }
    _1alwaysZero = (one24 & ~ 1) - (~ one24 & 1);
    return (1);
  }
  tmp = time(& t);
  srand((unsigned int )tmp);
  n = (int )*(*(argv + 1) + 0);
  tmp___0 = fib(n);
  f = tmp___0;
  printf((char const   */* __restrict  */)"fib(%li)=%i\n", n, f);
  return (0);
}
}
void megaInit(void) 
{ 


  {

}
}
