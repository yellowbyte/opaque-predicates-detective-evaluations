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
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern int pthread_cond_init(int *cond , int *attr ) ;
extern int raise(int sig ) ;
long _1alwaysZero  =    0;
extern void abort() ;
extern int atoi(char const   *s ) ;
extern void *malloc(unsigned long size ) ;
extern double ceil(double x ) ;
extern int posix_memalign(void **memptr , unsigned long alignment , unsigned long size ) ;
extern int getpagesize() ;
extern int pthread_cond_broadcast(int *cond ) ;
extern int pthread_join(void *thread , void **value_ptr ) ;
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
extern long clock(void) ;
long _1entropy  =    0;
extern void perror(char const   *str ) ;
extern int scanf(char const   *format  , ...) ;
extern unsigned long read(int filedes , void *buf , unsigned long nbyte ) ;
extern int pthread_mutex_unlock(int *mutex ) ;
extern int gethostname(char *name , unsigned long namelen ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
extern int pthread_cond_wait(int *cond , int *mutex ) ;
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
int main(int argc , char **argv , char **_formal_envp ) 
{ 
  int i ;
  int j ;
  int rows ;
  time_t t ;
  time_t tmp ;
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
  _1entropy = (long )argc | _1entropy;
  randomFuns_n28 = (_1entropy - ((_1entropy << 1L) & (_1entropy >> 63L))) + 4;
  while (randomFuns_n28 > 1) {
    if (randomFuns_n28 % 2 == 1) {
      randomFuns_n28 = 3 * randomFuns_n28 + 1;
    } else {
      randomFuns_n28 /= 2;
    }
    one27 = randomFuns_n28;
  }
  _1alwaysZero = one27 / 2;
  _2_main__BARRIER_1 = 1;
  entropy_strLen31 = one12;
  if (*(argv + 1) != 0) {
    entropy_strLen31 = strlen(*(argv + 1));
  } else {

  }
  _1entropy = (long )entropy_strLen31 | _1entropy;
  randomFuns_n33 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 10;
  while (randomFuns_n33 > 1) {
    if (randomFuns_n33 % 2 == 1) {
      randomFuns_n33 = 3 * randomFuns_n33 + 1;
    } else {
      randomFuns_n33 /= 2;
    }
    one32 = randomFuns_n33;
  }
  _1alwaysZero = ((one32 & ~ 1) + (one32 & ~ 1)) - (one32 ^ 1);
  _2_main__BARRIER_2 = 1;
  _1entropy = (long )((unsigned long )_formal_envp) ^ _1entropy;
  randomFuns_n37 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 8;
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
    _1entropy = (long )i - _1entropy;
    randomFuns_n13 = (_1entropy - ((_1entropy << 1L) & (_1entropy >> 63L))) + 8;
    while (randomFuns_n13 > 1) {
      if (randomFuns_n13 % 2 == 1) {
        randomFuns_n13 = 3 * randomFuns_n13 + 1;
      } else {
        randomFuns_n13 /= 2;
      }
      one12 = randomFuns_n13;
    }
    _1alwaysZero = one12 / 2;
    _1entropy = (long )j - _1entropy;
    randomFuns_n16 = (_1entropy - ((_1entropy << 1L) & (_1entropy >> 63L))) + 1;
    if ((((_1alwaysZero & ((_1entropy ^ 5) - ((~ _1entropy & 5) << 1L))) * (_1alwaysZero | ((_1entropy ^ 5) - ((~ _1entropy & 5) << 1L))) + (_1alwaysZero & ~ ((_1entropy ^ 5) - ((~ _1entropy & 5) << 1L))) * (~ _1alwaysZero & ((_1entropy ^ 5) - ((~ _1entropy & 5) << 1L)))) - ~ 1) - 1L) {
      while (randomFuns_n16 > 1) {
        if (randomFuns_n16 % 2 == 1) {
          randomFuns_n16 = 3 * randomFuns_n16 + 1;
        } else {
          randomFuns_n16 /= 2;
        }
        one15 = randomFuns_n16;
      }
    } else {
      __asm__  volatile   (".byte 0x82,0x33,0x0,0x0,0x55":);
    }
    _1alwaysZero = one15 / 2;
    _1entropy = (long )rows + _1entropy;
    randomFuns_n19 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 3;
    while (randomFuns_n19 > 1) {
      if (randomFuns_n19 % 2 == 1) {
        randomFuns_n19 = 3 * randomFuns_n19 + 1;
      } else {
        randomFuns_n19 /= 2;
      }
      one18 = randomFuns_n19;
    }
    _1alwaysZero = (~ one18 | (0xffffffffffffffffUL << 1)) - ~ one18;
    _1entropy = t | _1entropy;
    randomFuns_n22 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 1;
    while (randomFuns_n22 > 1) {
      if (randomFuns_n22 % 2 == 1) {
        randomFuns_n22 = 3 * randomFuns_n22 + 1;
      } else {
        randomFuns_n22 /= 2;
      }
      one21 = randomFuns_n22;
    }
    _1alwaysZero = one21 / 2;
    _1entropy = tmp ^ _1entropy;
    randomFuns_n25 = (_1entropy - ((_1entropy + _1entropy) & (_1entropy >> 63L))) + 8;
    {
    if (((((_1alwaysZero & ((_1entropy | 8) - (_1entropy & 8))) * (_1alwaysZero | ((_1entropy | 8) - (_1entropy & 8))) + (_1alwaysZero & ~ ((_1entropy | 8) - (_1entropy & 8))) * (~ _1alwaysZero & ((_1entropy | 8) - (_1entropy & 8)))) | 1) + (((_1alwaysZero & ((_1entropy | 8) - (_1entropy & 8))) * (_1alwaysZero | ((_1entropy | 8) - (_1entropy & 8))) + (_1alwaysZero & ~ ((_1entropy | 8) - (_1entropy & 8))) * (~ _1alwaysZero & ((_1entropy | 8) - (_1entropy & 8)))) | 1)) - (((_1alwaysZero & ((_1entropy | 8) - (_1entropy & 8))) * (_1alwaysZero | ((_1entropy | 8) - (_1entropy & 8))) + (_1alwaysZero & ~ ((_1entropy | 8) - (_1entropy & 8))) * (~ _1alwaysZero & ((_1entropy | 8) - (_1entropy & 8)))) ^ 1)) {
      while (randomFuns_n25 > 1) {
        if (randomFuns_n25 % 2 == 1) {
          randomFuns_n25 = 3 * randomFuns_n25 + 1;
        } else {
          randomFuns_n25 /= 2;
        }
        one24 = randomFuns_n25;
      }
    } else {
      __asm__  volatile   (".byte 0x81,0x2c,0x48,0x47,0x58,0xcf,0xc6,0xc2":);
    }
    }
    _1alwaysZero = one24 >> 1;
    if ((((_1alwaysZero & ((_1entropy & 8) * (_1entropy | 8) + (_1entropy & ~ 8) * (~ _1entropy & 8))) * (_1alwaysZero | ((_1entropy & 8) * (_1entropy | 8) + (_1entropy & ~ 8) * (~ _1entropy & 8))) + (_1alwaysZero & ~ ((_1entropy & 8) * (_1entropy | 8) + (_1entropy & ~ 8) * (~ _1entropy & 8))) * (~ _1alwaysZero & ((_1entropy & 8) * (_1entropy | 8) + (_1entropy & ~ 8) * (~ _1entropy & 8)))) | 1) + (((_1alwaysZero & ((_1entropy & 8) * (_1entropy | 8) + (_1entropy & ~ 8) * (~ _1entropy & 8))) * (_1alwaysZero | ((_1entropy & 8) * (_1entropy | 8) + (_1entropy & ~ 8) * (~ _1entropy & 8))) + (_1alwaysZero & ~ ((_1entropy & 8) * (_1entropy | 8) + (_1entropy & ~ 8) * (~ _1entropy & 8))) * (~ _1alwaysZero & ((_1entropy & 8) * (_1entropy | 8) + (_1entropy & ~ 8) * (~ _1entropy & 8)))) & 1)) {
      return (1);
    } else {
      __asm__  volatile   (".byte 0x89,0xe9,0x89,0x6c,0x30,0x8c,0x5e,0xd8":);
    }
  }
  tmp = time(& t);
  srand((unsigned int )tmp);
  rows = (int )*(*(argv + 1) + 0);
  i = 1;
  while (i <= rows) {
    j = 1;
    while (j <= i) {
      printf((char const   */* __restrict  */)"* ");
      j ++;
    }
    printf((char const   */* __restrict  */)"\n");
    i ++;
  }
  return (0);
}
}
void megaInit(void) 
{ 


  {

}
}
