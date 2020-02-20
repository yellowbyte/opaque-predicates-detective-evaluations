/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _IO_FILE;
struct timeval;
extern void exit(int status ) ;
extern int pthread_cond_signal(int *cond ) ;
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
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern int gettimeofday(struct timeval *tv , void *tz ) ;
int _global_argc  =    0;
void megaInit(void) ;
char **_global_envp  =    (char **)0;
extern int fscanf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern int scanf(char const   *format  , ...) ;
long _1entropy  =    0;
extern void perror(char const   *str ) ;
extern long clock(void) ;
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
extern void *fopen(char const   *filename , char const   *mode ) ;
extern int strcmp(char const   *a , char const   *b ) ;
extern double difftime(long tv1 , long tv0 ) ;
extern void signal(int sig , void *func ) ;
extern long time(long *tloc ) ;
typedef struct _IO_FILE FILE;
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
int main(int argc , char **argv , char **_formal_envp ) 
{ 
  int i ;
  int sum ;
  int _BARRIER_0 ;
  unsigned long entropy_strLen7 ;
  unsigned long entropy_strLen8 ;
  long one9 ;
  long randomFuns_n10 ;
  unsigned long entropy_strLen11 ;
  long one12 ;
  long randomFuns_n13 ;
  unsigned long entropy_strLen14 ;
  long one15 ;
  long randomFuns_n16 ;
  int _2_main__BARRIER_1 ;
  unsigned long entropy_strLen18 ;
  unsigned long entropy_strLen19 ;
  long one20 ;
  long randomFuns_n21 ;
  int _2_main__BARRIER_2 ;
  unsigned long entropy_strLen23 ;
  long one24 ;
  long randomFuns_n25 ;
  int _2_main__BARRIER_3 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;
  _1entropy = (long )argc + _1entropy;
  randomFuns_n16 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 1;
  while (randomFuns_n16 > 1) {
    if (randomFuns_n16 % 2 == 1) {
      randomFuns_n16 = 3 * randomFuns_n16 + 1;
    } else {
      randomFuns_n16 /= 2;
    }
    one15 = randomFuns_n16;
  }
  _1alwaysZero = one15 / 2;
  _2_main__BARRIER_1 = 1;
  entropy_strLen19 = randomFuns_n13;
  if (*(argv + 1) != 0) {
    entropy_strLen19 = strlen(*(argv + 1));
  } else {

  }
  _1entropy = (long )entropy_strLen19 | _1entropy;
  randomFuns_n21 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 3;
  while (randomFuns_n21 > 1) {
    if (randomFuns_n21 % 2 == 1) {
      randomFuns_n21 = 3 * randomFuns_n21 + 1;
    } else {
      randomFuns_n21 /= 2;
    }
    one20 = randomFuns_n21;
  }
  _1alwaysZero = ((~ one20 | (0xffffffffffffffffUL << 1)) + one20) + 1L;
  _2_main__BARRIER_2 = 1;
  _1entropy = (long )((unsigned long )_formal_envp) ^ _1entropy;
  randomFuns_n25 = (_1entropy - ((_1entropy + _1entropy) & (_1entropy >> 63L))) + 5;
  while (randomFuns_n25 > 1) {
    if (randomFuns_n25 % 2 == 1) {
      randomFuns_n25 = 3 * randomFuns_n25 + 1;
    } else {
      randomFuns_n25 /= 2;
    }
    one24 = randomFuns_n25;
  }
  _1alwaysZero = (~ one24 | (0xffffffffffffffffUL << 1)) - ~ one24;
  _2_main__BARRIER_3 = 1;
  sum = 0;
  i = 0;
  while (i < (int )*(*(argv + 1) + 0)) {
    if ((int )*(*(argv + 1) + 0) > 127) {
      sum += i;
    } else {
      sum *= i;
    }
    i ++;
  }
  _1entropy = (long )i + _1entropy;
  randomFuns_n10 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 7;
  while (randomFuns_n10 > 1) {
    {
    if (((((_1alwaysZero & ((_1entropy & 4) * (_1entropy | 4) + (_1entropy & ~ 4) * (~ _1entropy & 4))) * (_1alwaysZero | ((_1entropy & 4) * (_1entropy | 4) + (_1entropy & ~ 4) * (~ _1entropy & 4))) + (_1alwaysZero & ~ ((_1entropy & 4) * (_1entropy | 4) + (_1entropy & ~ 4) * (~ _1entropy & 4))) * (~ _1alwaysZero & ((_1entropy & 4) * (_1entropy | 4) + (_1entropy & ~ 4) * (~ _1entropy & 4)))) ^ ~ 0) + ((((_1alwaysZero & ((_1entropy & 4) * (_1entropy | 4) + (_1entropy & ~ 4) * (~ _1entropy & 4))) * (_1alwaysZero | ((_1entropy & 4) * (_1entropy | 4) + (_1entropy & ~ 4) * (~ _1entropy & 4))) + (_1alwaysZero & ~ ((_1entropy & 4) * (_1entropy | 4) + (_1entropy & ~ 4) * (~ _1entropy & 4))) * (~ _1alwaysZero & ((_1entropy & 4) * (_1entropy | 4) + (_1entropy & ~ 4) * (~ _1entropy & 4)))) | 0) + (((_1alwaysZero & ((_1entropy & 4) * (_1entropy | 4) + (_1entropy & ~ 4) * (~ _1entropy & 4))) * (_1alwaysZero | ((_1entropy & 4) * (_1entropy | 4) + (_1entropy & ~ 4) * (~ _1entropy & 4))) + (_1alwaysZero & ~ ((_1entropy & 4) * (_1entropy | 4) + (_1entropy & ~ 4) * (~ _1entropy & 4))) * (~ _1alwaysZero & ((_1entropy & 4) * (_1entropy | 4) + (_1entropy & ~ 4) * (~ _1entropy & 4)))) | 0))) + 1L) {
      __asm__  volatile   (".byte 0x1e,0xaf,0xe4,0x5d,0x31,0xdc":);
    } else
    if (randomFuns_n10 % 2 == 1) {
      randomFuns_n10 = 3 * randomFuns_n10 + 1;
    } else
    if ((((_1alwaysZero & ((_1entropy ^ 1) + ((_1entropy & 1) << 1L))) * (_1alwaysZero | ((_1entropy ^ 1) + ((_1entropy & 1) << 1L))) + (_1alwaysZero & ~ ((_1entropy ^ 1) + ((_1entropy & 1) << 1L))) * (~ _1alwaysZero & ((_1entropy ^ 1) + ((_1entropy & 1) << 1L)))) ^ 1) + ((((_1alwaysZero & ((_1entropy ^ 1) + ((_1entropy & 1) << 1L))) * (_1alwaysZero | ((_1entropy ^ 1) + ((_1entropy & 1) << 1L))) + (_1alwaysZero & ~ ((_1entropy ^ 1) + ((_1entropy & 1) << 1L))) * (~ _1alwaysZero & ((_1entropy ^ 1) + ((_1entropy & 1) << 1L)))) & 1) << 1L)) {
      randomFuns_n10 /= 2;
    } else {
      __asm__  volatile   (".byte 0x2,0x5d,0xc3,0x48,0x83":);
    }
    }
    one9 = randomFuns_n10;
  }
  _1alwaysZero = (~ one9 | (0xffffffffffffffffUL << 1)) - ~ one9;
  _1entropy = (long )sum + _1entropy;
  randomFuns_n13 = (_1entropy - ((_1entropy + _1entropy) & (_1entropy >> 63L))) + 6;
  while (randomFuns_n13 > 1) {
    if (randomFuns_n13 % 2 == 1) {
      randomFuns_n13 = 3 * randomFuns_n13 + 1;
    } else {
      randomFuns_n13 /= 2;
    }
    one12 = randomFuns_n13;
  }
  if ((((_1alwaysZero & ((_1entropy + ~ 10) + 1L)) * (_1alwaysZero | ((_1entropy + ~ 10) + 1L)) + (_1alwaysZero & ~ ((_1entropy + ~ 10) + 1L)) * (~ _1alwaysZero & ((_1entropy + ~ 10) + 1L))) - ~ 1) - 1L) {
    _1alwaysZero = (~ one12 | (0xffffffffffffffffUL << 1)) - ~ one12;
    printf((char const   */* __restrict  */)"Sum is: %d\n", sum);
  } else {
    __asm__  volatile   (".byte 0x3e,0x0,0x0,0x0,0x0":);
  }
  return (0);
}
}
