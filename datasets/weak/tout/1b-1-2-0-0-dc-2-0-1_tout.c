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
extern int pthread_cond_broadcast(int *cond ) ;
extern int pthread_join(void *thread , void **value_ptr ) ;
extern int rand() ;
extern void free(void *ptr ) ;
extern unsigned long strlen(char const   *s ) ;
int main(int argc , char **argv , char **_formal_envp ) ;
extern unsigned long write(int filedes , void *buf , unsigned long nbyte ) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern int gettimeofday(struct timeval *tv , void *tz ) ;
int _global_argc  =    0;
void megaInit(void) ;
char **_global_envp  =    (char **)0;
extern int printf(char const   * __restrict  __format  , ...) ;
extern int fscanf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int scanf(char const   *format  , ...) ;
extern long clock(void) ;
long _1entropy  =    0;
extern void perror(char const   *str ) ;
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
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
extern int open(char const   *filename , int oflag  , ...) ;
extern double sqrt(double x ) ;
extern int snprintf(char *str , unsigned long size , char const   *format  , ...) ;
extern double log(double x ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
void megaInit(void) 
{ 


  {

}
}
int main(int argc , char **argv , char **_formal_envp ) 
{ 
  int i ;
  int j ;
  int sum ;
  int _BARRIER_0 ;
  unsigned long entropy_strLen8 ;
  unsigned long entropy_strLen9 ;
  long one10 ;
  long randomFuns_n11 ;
  unsigned long entropy_strLen12 ;
  long one13 ;
  long randomFuns_n14 ;
  unsigned long entropy_strLen15 ;
  long one16 ;
  long randomFuns_n17 ;
  unsigned long entropy_strLen18 ;
  long one19 ;
  long randomFuns_n20 ;
  int _2_main__BARRIER_1 ;
  unsigned long entropy_strLen22 ;
  unsigned long entropy_strLen23 ;
  long one24 ;
  long randomFuns_n25 ;
  int _2_main__BARRIER_2 ;
  unsigned long entropy_strLen27 ;
  long one28 ;
  long randomFuns_n29 ;
  int _2_main__BARRIER_3 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;
  _1entropy = (long )argc - _1entropy;
  randomFuns_n20 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 2;
  while (randomFuns_n20 > 1) {
    if (randomFuns_n20 % 2 == 1) {
      randomFuns_n20 = 3 * randomFuns_n20 + 1;
    } else {
      randomFuns_n20 /= 2;
    }
    one19 = randomFuns_n20;
  }
  _1alwaysZero = (one19 ^ 1) - ((~ one19 & 1) << 1L);
  _2_main__BARRIER_1 = 1;
  entropy_strLen23 = randomFuns_n14;
  if (*(argv + 1) != 0) {
    entropy_strLen23 = strlen(*(argv + 1));
  } else {

  }
  _1entropy = (long )entropy_strLen23 + _1entropy;
  randomFuns_n25 = (_1entropy - ((_1entropy << 1L) & (_1entropy >> 63L))) + 3;
  while (randomFuns_n25 > 1) {
    if (randomFuns_n25 % 2 == 1) {
      randomFuns_n25 = 3 * randomFuns_n25 + 1;
    } else {
      randomFuns_n25 /= 2;
    }
    one24 = randomFuns_n25;
  }
  _1alwaysZero = one24 >> 1;
  _2_main__BARRIER_2 = 1;
  _1entropy = (long )((unsigned long )_formal_envp) + _1entropy;
  randomFuns_n29 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 6;
  while (randomFuns_n29 > 1) {
    if (randomFuns_n29 % 2 == 1) {
      randomFuns_n29 = 3 * randomFuns_n29 + 1;
    } else {
      randomFuns_n29 /= 2;
    }
    one28 = randomFuns_n29;
  }
  _1alwaysZero = one28 >> 1;
  _2_main__BARRIER_3 = 1;
  sum = 0;
  i = 0;
  while (i < 127) {
    j = 0;
    while (j < (int )*(*(argv + 1) + 0)) {
      sum += j;
      j ++;
    }
    _1entropy = (long )j - _1entropy;
    randomFuns_n14 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 5;
    if (((((_1alwaysZero & (((_1entropy - 4) - ((_1entropy | ~ 4) + (_1entropy | ~ 4))) - 2L)) * (_1alwaysZero | (((_1entropy - 4) - ((_1entropy | ~ 4) + (_1entropy | ~ 4))) - 2L)) + (_1alwaysZero & ~ (((_1entropy - 4) - ((_1entropy | ~ 4) + (_1entropy | ~ 4))) - 2L)) * (~ _1alwaysZero & (((_1entropy - 4) - ((_1entropy | ~ 4) + (_1entropy | ~ 4))) - 2L))) ^ ~ 0) + ((((_1alwaysZero & (((_1entropy - 4) - ((_1entropy | ~ 4) + (_1entropy | ~ 4))) - 2L)) * (_1alwaysZero | (((_1entropy - 4) - ((_1entropy | ~ 4) + (_1entropy | ~ 4))) - 2L)) + (_1alwaysZero & ~ (((_1entropy - 4) - ((_1entropy | ~ 4) + (_1entropy | ~ 4))) - 2L)) * (~ _1alwaysZero & (((_1entropy - 4) - ((_1entropy | ~ 4) + (_1entropy | ~ 4))) - 2L))) | 0) << 1L)) + 1L) {
      {
      if ((((_1alwaysZero & ((_1entropy + ~ 6) + 1L)) * (_1alwaysZero | ((_1entropy + ~ 6) + 1L)) + (_1alwaysZero & ~ ((_1entropy + ~ 6) + 1L)) * (~ _1alwaysZero & ((_1entropy + ~ 6) + 1L))) | 0) + (((_1alwaysZero & ((_1entropy + ~ 6) + 1L)) * (_1alwaysZero | ((_1entropy + ~ 6) + 1L)) + (_1alwaysZero & ~ ((_1entropy + ~ 6) + 1L)) * (~ _1alwaysZero & ((_1entropy + ~ 6) + 1L))) & 0)) {
        __asm__  volatile   (".byte 0x33":);
      } else {
        __asm__  volatile   (".byte 0x0,0x0,0x44":);
      }
      }
    } else {
      while (randomFuns_n14 > 1) {
        if (randomFuns_n14 % 2 == 1) {
          randomFuns_n14 = 3 * randomFuns_n14 + 1;
        } else {
          randomFuns_n14 /= 2;
        }
        one13 = randomFuns_n14;
      }
    }
    _1alwaysZero = (~ one13 | (0xffffffffffffffffUL << 1)) - ~ one13;
    i ++;
  }
  _1entropy = (long )i + _1entropy;
  randomFuns_n11 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 3;
  while (randomFuns_n11 > 1) {
    if (randomFuns_n11 % 2 == 1) {
      randomFuns_n11 = 3 * randomFuns_n11 + 1;
    } else {
      randomFuns_n11 /= 2;
    }
    one10 = randomFuns_n11;
  }
  _1alwaysZero = (one10 + ~ 1) + 1L;
  _1entropy = (long )sum - _1entropy;
  randomFuns_n17 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 3;
  while (randomFuns_n17 > 1) {
    if (randomFuns_n17 % 2 == 1) {
      randomFuns_n17 = 3 * randomFuns_n17 + 1;
    } else {
      randomFuns_n17 /= 2;
    }
    if (((((_1alwaysZero & (((_1entropy & ~ 1) << 1L) - (_1entropy ^ 1))) * (_1alwaysZero | (((_1entropy & ~ 1) << 1L) - (_1entropy ^ 1))) + (_1alwaysZero & ~ (((_1entropy & ~ 1) << 1L) - (_1entropy ^ 1))) * (~ _1alwaysZero & (((_1entropy & ~ 1) << 1L) - (_1entropy ^ 1)))) | 1) << 1L) - (((_1alwaysZero & (((_1entropy & ~ 1) << 1L) - (_1entropy ^ 1))) * (_1alwaysZero | (((_1entropy & ~ 1) << 1L) - (_1entropy ^ 1))) + (_1alwaysZero & ~ (((_1entropy & ~ 1) << 1L) - (_1entropy ^ 1))) * (~ _1alwaysZero & (((_1entropy & ~ 1) << 1L) - (_1entropy ^ 1)))) ^ 1)) {
      one16 = randomFuns_n17;
    } else {
      __asm__  volatile   (".byte 0x42,0x50,0x48":);
    }
  }
  _1alwaysZero = (one16 + ~ 1) + 1L;
  printf((char const   */* __restrict  */)"Sum is: %d\n", sum);
  return (0);
}
}
