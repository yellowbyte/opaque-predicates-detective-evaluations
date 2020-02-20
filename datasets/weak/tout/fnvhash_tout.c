/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _IO_FILE;
struct timeval;
extern int pthread_cond_signal(int *cond ) ;
extern void exit(int status ) ;
extern int fseek(struct _IO_FILE *stream , long offs , int whence ) ;
extern int fclose(void *stream ) ;
extern int close(int filedes ) ;
extern int pthread_create(void *thread , void *attr , void *start_routine , void *arg ) ;
char **_global_argv  =    (char **)0;
extern int fcntl(int filedes , int cmd  , ...) ;
extern int unlink(char const   *filename ) ;
struct timeval {
   long tv_sec ;
   long tv_usec ;
};
extern int pthread_cond_init(int *cond , int *attr ) ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern int pthread_mutex_lock(int *mutex ) ;
extern int raise(int sig ) ;
long _1alwaysZero  =    0;
extern void abort() ;
typedef unsigned long size_t;
extern int atoi(char const   *s ) ;
extern void *malloc(unsigned long size ) ;
extern double ceil(double x ) ;
extern int getpagesize() ;
extern int posix_memalign(void **memptr , unsigned long alignment , unsigned long size ) ;
extern int pthread_cond_broadcast(int *cond ) ;
extern int pthread_join(void *thread , void **value_ptr ) ;
extern int rand() ;
extern void free(void *ptr ) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
int main(int argc , char **argv , char **_formal_envp ) ;
extern unsigned long write(int filedes , void *buf , unsigned long nbyte ) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern int gettimeofday(struct timeval *tv , void *tz ) ;
int _global_argc  =    0;
void megaInit(void) ;
char **_global_envp  =    (char **)0;
extern int fscanf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
long _1entropy  =    0;
extern long clock(void) ;
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
extern long time(long *tloc ) ;
typedef struct _IO_FILE FILE;
unsigned int FNVHash(char *str , unsigned int len ) ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
extern int open(char const   *filename , int oflag  , ...) ;
extern double sqrt(double x ) ;
extern double log(double x ) ;
extern int snprintf(char *str , unsigned long size , char const   *format  , ...) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
void megaInit(void) 
{ 


  {

}
}
unsigned int FNVHash(char *str , unsigned int len ) 
{ 
  unsigned int fnv_prime ;
  unsigned int hash ;
  unsigned int i ;

  {
  fnv_prime = 2166136261U;
  hash = 0U;
  i = 0U;
  i = 0U;
  while (i < len) {
    hash *= fnv_prime;
    hash ^= (unsigned int )*str;
    str ++;
    i ++;
  }
  return (hash);
}
}
int main(int argc , char **argv , char **_formal_envp ) 
{ 
  unsigned char *str ;
  unsigned int hash ;
  size_t tmp ;
  unsigned int tmp___0 ;
  int _BARRIER_0 ;
  unsigned long entropy_strLen9 ;
  unsigned long entropy_strLen10 ;
  long one11 ;
  long randomFuns_n12 ;
  unsigned long entropy_strLen13 ;
  long one14 ;
  long randomFuns_n15 ;
  unsigned long entropy_strLen16 ;
  long one17 ;
  long randomFuns_n18 ;
  unsigned long entropy_strLen19 ;
  long one20 ;
  long randomFuns_n21 ;
  unsigned long entropy_strLen22 ;
  long one23 ;
  long randomFuns_n24 ;
  int _2_main__BARRIER_1 ;
  unsigned long entropy_strLen26 ;
  unsigned long entropy_strLen27 ;
  long one28 ;
  long randomFuns_n29 ;
  int _2_main__BARRIER_2 ;
  unsigned long entropy_strLen31 ;
  long one32 ;
  long randomFuns_n33 ;
  int _2_main__BARRIER_3 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;
  _1entropy = (long )argc | _1entropy;
  randomFuns_n24 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 10;
  while (randomFuns_n24 > 1) {
    if (randomFuns_n24 % 2 == 1) {
      randomFuns_n24 = 3 * randomFuns_n24 + 1;
    } else {
      randomFuns_n24 /= 2;
    }
    one23 = randomFuns_n24;
  }
  _1alwaysZero = one23 >> 1;
  _2_main__BARRIER_1 = 1;
  entropy_strLen27 = one17;
  if (*(argv + 1) != 0) {
    entropy_strLen27 = strlen(*(argv + 1));
  } else {

  }
  _1entropy = (long )entropy_strLen27 - _1entropy;
  randomFuns_n29 = (_1entropy - ((_1entropy << 1L) & (_1entropy >> 63L))) + 4;
  while (randomFuns_n29 > 1) {
    if (randomFuns_n29 % 2 == 1) {
      randomFuns_n29 = 3 * randomFuns_n29 + 1;
    } else {
      randomFuns_n29 /= 2;
    }
    one28 = randomFuns_n29;
  }
  _1alwaysZero = ((~ one28 | (0xffffffffffffffffUL << 1)) + one28) + 1L;
  _2_main__BARRIER_2 = 1;
  _1entropy = (long )((unsigned long )_formal_envp) ^ _1entropy;
  randomFuns_n33 = (_1entropy - ((_1entropy + _1entropy) & (_1entropy >> 63L))) + 9;
  while (randomFuns_n33 > 1) {
    if (randomFuns_n33 % 2 == 1) {
      randomFuns_n33 = 3 * randomFuns_n33 + 1;
    } else {
      randomFuns_n33 /= 2;
    }
    one32 = randomFuns_n33;
  }
  _1alwaysZero = one32 >> 1;
  _2_main__BARRIER_3 = 1;
  str = (unsigned char *)*(argv + 1);
  tmp = strlen((char const   *)str);
  tmp___0 = FNVHash((char *)str, (unsigned int )tmp);
  hash = tmp___0;
  if (hash == 3996942804U) {
    printf((char const   */* __restrict  */)"You win!\n");
  }
  _1entropy = (long )((unsigned long )str) - _1entropy;
  randomFuns_n12 = (_1entropy - ((_1entropy + _1entropy) & (_1entropy >> 63L))) + 6;
  while (randomFuns_n12 > 1) {
    if (randomFuns_n12 % 2 == 1) {
      randomFuns_n12 = 3 * randomFuns_n12 + 1;
    } else {
      randomFuns_n12 /= 2;
    }
    one11 = randomFuns_n12;
  }
  _1alwaysZero = one11 / 2;
  _1entropy = (long )hash | _1entropy;
  randomFuns_n15 = (_1entropy - ((_1entropy + _1entropy) & (_1entropy >> 63L))) + 1;
  while (randomFuns_n15 > 1) {
    if (randomFuns_n15 % 2 == 1) {
      randomFuns_n15 = 3 * randomFuns_n15 + 1;
    } else {
      randomFuns_n15 /= 2;
    }
    one14 = randomFuns_n15;
  }
  _1alwaysZero = one14 / 2;
  _1entropy = (long )tmp - _1entropy;
  randomFuns_n18 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 4;
  while (1) {
    if ((((_1alwaysZero & ((_1entropy & 8) * (_1entropy | 8) + (_1entropy & ~ 8) * (~ _1entropy & 8))) * (_1alwaysZero | ((_1entropy & 8) * (_1entropy | 8) + (_1entropy & ~ 8) * (~ _1entropy & 8))) + (_1alwaysZero & ~ ((_1entropy & 8) * (_1entropy | 8) + (_1entropy & ~ 8) * (~ _1entropy & 8))) * (~ _1alwaysZero & ((_1entropy & 8) * (_1entropy | 8) + (_1entropy & ~ 8) * (~ _1entropy & 8)))) | 1) + (((_1alwaysZero & ((_1entropy & 8) * (_1entropy | 8) + (_1entropy & ~ 8) * (~ _1entropy & 8))) * (_1alwaysZero | ((_1entropy & 8) * (_1entropy | 8) + (_1entropy & ~ 8) * (~ _1entropy & 8))) + (_1alwaysZero & ~ ((_1entropy & 8) * (_1entropy | 8) + (_1entropy & ~ 8) * (~ _1entropy & 8))) * (~ _1alwaysZero & ((_1entropy & 8) * (_1entropy | 8) + (_1entropy & ~ 8) * (~ _1entropy & 8)))) & 1)) {
      if (randomFuns_n18 > 1) {

      } else {
        break;
      }
    } else {
      __asm__  volatile   (".byte 0x36":);
    }
    if (randomFuns_n18 % 2 == 1) {
      randomFuns_n18 = 3 * randomFuns_n18 + 1;
    } else {
      randomFuns_n18 /= 2;
    }
    one17 = randomFuns_n18;
  }
  {
  if (((((_1alwaysZero & ((_1entropy & 7) * (_1entropy | 7) + (_1entropy & ~ 7) * (~ _1entropy & 7))) * (_1alwaysZero | ((_1entropy & 7) * (_1entropy | 7) + (_1entropy & ~ 7) * (~ _1entropy & 7))) + (_1alwaysZero & ~ ((_1entropy & 7) * (_1entropy | 7) + (_1entropy & ~ 7) * (~ _1entropy & 7))) * (~ _1alwaysZero & ((_1entropy & 7) * (_1entropy | 7) + (_1entropy & ~ 7) * (~ _1entropy & 7)))) ^ ~ 0) + ((((_1alwaysZero & ((_1entropy & 7) * (_1entropy | 7) + (_1entropy & ~ 7) * (~ _1entropy & 7))) * (_1alwaysZero | ((_1entropy & 7) * (_1entropy | 7) + (_1entropy & ~ 7) * (~ _1entropy & 7))) + (_1alwaysZero & ~ ((_1entropy & 7) * (_1entropy | 7) + (_1entropy & ~ 7) * (~ _1entropy & 7))) * (~ _1alwaysZero & ((_1entropy & 7) * (_1entropy | 7) + (_1entropy & ~ 7) * (~ _1entropy & 7)))) | 0) + (((_1alwaysZero & ((_1entropy & 7) * (_1entropy | 7) + (_1entropy & ~ 7) * (~ _1entropy & 7))) * (_1alwaysZero | ((_1entropy & 7) * (_1entropy | 7) + (_1entropy & ~ 7) * (~ _1entropy & 7))) + (_1alwaysZero & ~ ((_1entropy & 7) * (_1entropy | 7) + (_1entropy & ~ 7) * (~ _1entropy & 7))) * (~ _1alwaysZero & ((_1entropy & 7) * (_1entropy | 7) + (_1entropy & ~ 7) * (~ _1entropy & 7)))) | 0))) + 1L) {
    __asm__  volatile   (".byte 0x90":);
  } else {
    _1alwaysZero = one17 >> 1;
    _1entropy = (long )tmp___0 + _1entropy;
    randomFuns_n21 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 7;
  }
  }
  while (randomFuns_n21 > 1) {
    if (randomFuns_n21 % 2 == 1) {
      if ((((_1alwaysZero & ((_1entropy & 7) * (_1entropy | 7) + (_1entropy & ~ 7) * (~ _1entropy & 7))) * (_1alwaysZero | ((_1entropy & 7) * (_1entropy | 7) + (_1entropy & ~ 7) * (~ _1entropy & 7))) + (_1alwaysZero & ~ ((_1entropy & 7) * (_1entropy | 7) + (_1entropy & ~ 7) * (~ _1entropy & 7))) * (~ _1alwaysZero & ((_1entropy & 7) * (_1entropy | 7) + (_1entropy & ~ 7) * (~ _1entropy & 7)))) ^ 1) + ((((_1alwaysZero & ((_1entropy & 7) * (_1entropy | 7) + (_1entropy & ~ 7) * (~ _1entropy & 7))) * (_1alwaysZero | ((_1entropy & 7) * (_1entropy | 7) + (_1entropy & ~ 7) * (~ _1entropy & 7))) + (_1alwaysZero & ~ ((_1entropy & 7) * (_1entropy | 7) + (_1entropy & ~ 7) * (~ _1entropy & 7))) * (~ _1alwaysZero & ((_1entropy & 7) * (_1entropy | 7) + (_1entropy & ~ 7) * (~ _1entropy & 7)))) & 1) + (((_1alwaysZero & ((_1entropy & 7) * (_1entropy | 7) + (_1entropy & ~ 7) * (~ _1entropy & 7))) * (_1alwaysZero | ((_1entropy & 7) * (_1entropy | 7) + (_1entropy & ~ 7) * (~ _1entropy & 7))) + (_1alwaysZero & ~ ((_1entropy & 7) * (_1entropy | 7) + (_1entropy & ~ 7) * (~ _1entropy & 7))) * (~ _1alwaysZero & ((_1entropy & 7) * (_1entropy | 7) + (_1entropy & ~ 7) * (~ _1entropy & 7)))) & 1))) {
        randomFuns_n21 = 3 * randomFuns_n21 + 1;
      } else {
        __asm__  volatile   (".byte 0x1f,0xee,0xec,0x2c,0x2b,0x4c,0x52":);
      }
    } else {
      randomFuns_n21 /= 2;
    }
    one20 = randomFuns_n21;
  }
  _1alwaysZero = (one20 & ~ 1) - (~ one20 & 1);
  return (0);
}
}
