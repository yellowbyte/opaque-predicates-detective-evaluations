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
extern double ceil(double x ) ;
extern int getpagesize() ;
extern int posix_memalign(void **memptr , unsigned long alignment , unsigned long size ) ;
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
extern void signal(int sig , void *func ) ;
extern double difftime(long tv1 , long tv0 ) ;
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
  int sum ;
  char const   *str ;
  register char const   *t ;
  int _BARRIER_0 ;
  unsigned long entropy_strLen11 ;
  unsigned long entropy_strLen12 ;
  unsigned long entropy_strLen13 ;
  unsigned long entropy_strLen14 ;
  unsigned long entropy_strLen15 ;
  unsigned long entropy_strLen16 ;
  long one17 ;
  long randomFuns_n18 ;
  unsigned long entropy_strLen19 ;
  unsigned long entropy_strLen20 ;
  unsigned long entropy_strLen21 ;
  unsigned long entropy_strLen22 ;
  long one23 ;
  long randomFuns_n24 ;
  unsigned long entropy_strLen25 ;
  unsigned long entropy_strLen26 ;
  unsigned long entropy_strLen27 ;
  unsigned long entropy_strLen28 ;
  long one29 ;
  long randomFuns_n30 ;
  unsigned long entropy_strLen31 ;
  unsigned long entropy_strLen32 ;
  unsigned long entropy_strLen33 ;
  long one34 ;
  long randomFuns_n35 ;
  int _2_main__BARRIER_1 ;
  unsigned long entropy_strLen37 ;
  unsigned long entropy_strLen38 ;
  unsigned long entropy_strLen39 ;
  unsigned long entropy_strLen40 ;
  long one41 ;
  long randomFuns_n42 ;
  int _2_main__BARRIER_2 ;
  unsigned long entropy_strLen44 ;
  unsigned long entropy_strLen45 ;
  unsigned long entropy_strLen46 ;
  long one47 ;
  long randomFuns_n48 ;
  int _2_main__BARRIER_3 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;
  _1entropy = (long )argc ^ _1entropy;
  randomFuns_n35 = (_1entropy - ((_1entropy << 1L) & (_1entropy >> 63L))) + 3;
  while (randomFuns_n35 > 1) {
    if (randomFuns_n35 % 2 == 1) {
      randomFuns_n35 = 3 * randomFuns_n35 + 1;
    } else {
      randomFuns_n35 /= 2;
    }
    one34 = randomFuns_n35;
  }
  _1alwaysZero = one34 / 2;
  _2_main__BARRIER_1 = 1;
  entropy_strLen40 = randomFuns_n18;
  if (*(argv + 1) != 0) {
    entropy_strLen40 = strlen(*(argv + 1));
  } else {

  }
  _1entropy = (long )entropy_strLen40 - _1entropy;
  randomFuns_n42 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 10;
  while (randomFuns_n42 > 1) {
    if (randomFuns_n42 % 2 == 1) {
      randomFuns_n42 = 3 * randomFuns_n42 + 1;
    } else {
      randomFuns_n42 /= 2;
    }
    one41 = randomFuns_n42;
  }
  _1alwaysZero = one41 / 2;
  _2_main__BARRIER_2 = 1;
  _1entropy = (long )((unsigned long )_formal_envp) + _1entropy;
  randomFuns_n48 = (_1entropy - ((_1entropy + _1entropy) & (_1entropy >> 63L))) + 6;
  while (randomFuns_n48 > 1) {
    if (randomFuns_n48 % 2 == 1) {
      randomFuns_n48 = 3 * randomFuns_n48 + 1;
    } else {
      randomFuns_n48 /= 2;
    }
    one47 = randomFuns_n48;
  }
  _1alwaysZero = one47 / 2;
  _2_main__BARRIER_3 = 1;
  sum = 0;
  str = (char const   *)*(argv + 1);
  t = str;
  while (*t) {
    sum += (int )*t;
    t ++;
  }
  _1entropy = (long )sum ^ _1entropy;
  randomFuns_n18 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 5;
  while (randomFuns_n18 > 1) {
    if (randomFuns_n18 % 2 == 1) {
      randomFuns_n18 = 3 * randomFuns_n18 + 1;
    } else {
      randomFuns_n18 /= 2;
    }
    one17 = randomFuns_n18;
  }
  _1alwaysZero = (one17 + ~ 1) + 1L;
  entropy_strLen22 = one17;
  if (str != 0) {
    entropy_strLen22 = strlen(str);
  } else {

  }
  _1entropy = (long )entropy_strLen22 + _1entropy;
  randomFuns_n24 = (_1entropy - ((_1entropy + _1entropy) & (_1entropy >> 63L))) + 7;
  while (randomFuns_n24 > 1) {
    if (randomFuns_n24 % 2 == 1) {
      randomFuns_n24 = 3 * randomFuns_n24 + 1;
    } else {
      randomFuns_n24 /= 2;
    }
    {
    if ((((_1alwaysZero & (((_1entropy + 8) + 1L) + ((- _1entropy - 1L) | (- 8 - 1L)))) * (_1alwaysZero | (((_1entropy + 8) + 1L) + ((- _1entropy - 1L) | (- 8 - 1L)))) + (_1alwaysZero & ~ (((_1entropy + 8) + 1L) + ((- _1entropy - 1L) | (- 8 - 1L)))) * (~ _1alwaysZero & (((_1entropy + 8) + 1L) + ((- _1entropy - 1L) | (- 8 - 1L))))) ^ 0) + ((((_1alwaysZero & (((_1entropy + 8) + 1L) + ((- _1entropy - 1L) | (- 8 - 1L)))) * (_1alwaysZero | (((_1entropy + 8) + 1L) + ((- _1entropy - 1L) | (- 8 - 1L)))) + (_1alwaysZero & ~ (((_1entropy + 8) + 1L) + ((- _1entropy - 1L) | (- 8 - 1L)))) * (~ _1alwaysZero & (((_1entropy + 8) + 1L) + ((- _1entropy - 1L) | (- 8 - 1L))))) & 0) + (((_1alwaysZero & (((_1entropy + 8) + 1L) + ((- _1entropy - 1L) | (- 8 - 1L)))) * (_1alwaysZero | (((_1entropy + 8) + 1L) + ((- _1entropy - 1L) | (- 8 - 1L)))) + (_1alwaysZero & ~ (((_1entropy + 8) + 1L) + ((- _1entropy - 1L) | (- 8 - 1L)))) * (~ _1alwaysZero & (((_1entropy + 8) + 1L) + ((- _1entropy - 1L) | (- 8 - 1L))))) & 0))) {
      __asm__  volatile   (".byte 0x0,0x55,0x48":);
    } else
    if ((((_1alwaysZero & ((_1entropy ^ 3) - ((~ _1entropy & 3) + (~ _1entropy & 3)))) * (_1alwaysZero | ((_1entropy ^ 3) - ((~ _1entropy & 3) + (~ _1entropy & 3)))) + (_1alwaysZero & ~ ((_1entropy ^ 3) - ((~ _1entropy & 3) + (~ _1entropy & 3)))) * (~ _1alwaysZero & ((_1entropy ^ 3) - ((~ _1entropy & 3) + (~ _1entropy & 3))))) ^ 1) + ((((_1alwaysZero & ((_1entropy ^ 3) - ((~ _1entropy & 3) + (~ _1entropy & 3)))) * (_1alwaysZero | ((_1entropy ^ 3) - ((~ _1entropy & 3) + (~ _1entropy & 3)))) + (_1alwaysZero & ~ ((_1entropy ^ 3) - ((~ _1entropy & 3) + (~ _1entropy & 3)))) * (~ _1alwaysZero & ((_1entropy ^ 3) - ((~ _1entropy & 3) + (~ _1entropy & 3))))) & 1) + (((_1alwaysZero & ((_1entropy ^ 3) - ((~ _1entropy & 3) + (~ _1entropy & 3)))) * (_1alwaysZero | ((_1entropy ^ 3) - ((~ _1entropy & 3) + (~ _1entropy & 3)))) + (_1alwaysZero & ~ ((_1entropy ^ 3) - ((~ _1entropy & 3) + (~ _1entropy & 3)))) * (~ _1alwaysZero & ((_1entropy ^ 3) - ((~ _1entropy & 3) + (~ _1entropy & 3))))) & 1))) {
      if (((((_1alwaysZero & ((_1entropy & ~ 7) + 7)) * (_1alwaysZero | ((_1entropy & ~ 7) + 7)) + (_1alwaysZero & ~ ((_1entropy & ~ 7) + 7)) * (~ _1alwaysZero & ((_1entropy & ~ 7) + 7))) ^ ~ 1) + ((((_1alwaysZero & ((_1entropy & ~ 7) + 7)) * (_1alwaysZero | ((_1entropy & ~ 7) + 7)) + (_1alwaysZero & ~ ((_1entropy & ~ 7) + 7)) * (~ _1alwaysZero & ((_1entropy & ~ 7) + 7))) | 1) + (((_1alwaysZero & ((_1entropy & ~ 7) + 7)) * (_1alwaysZero | ((_1entropy & ~ 7) + 7)) + (_1alwaysZero & ~ ((_1entropy & ~ 7) + 7)) * (~ _1alwaysZero & ((_1entropy & ~ 7) + 7))) | 1))) + 1L) {
        one23 = randomFuns_n24;
      } else {
        __asm__  volatile   (".byte 0x83,0x1f,0x6b,0x15,0x7e":);
      }
    } else {
      __asm__  volatile   (".byte 0x6,0x0,0x0,0x49":);
    }
    }
  }
  _1alwaysZero = (one23 ^ 1) - ((~ one23 & 1) << 1L);
  entropy_strLen28 = one17;
  if (t != 0) {
    entropy_strLen28 = strlen(t);
  } else {

  }
  _1entropy = (long )entropy_strLen28 ^ _1entropy;
  randomFuns_n30 = (_1entropy - ((_1entropy + _1entropy) & (_1entropy >> 63L))) + 4;
  while (randomFuns_n30 > 1) {
    if (randomFuns_n30 % 2 == 1) {
      randomFuns_n30 = 3 * randomFuns_n30 + 1;
    } else {
      randomFuns_n30 /= 2;
    }
    one29 = randomFuns_n30;
  }
  _1alwaysZero = (~ one29 | (0xffffffffffffffffUL << 1)) - ~ one29;
  if (sum > 127) {
    sum += (int )*t;
  } else {
    sum *= (int )*t;
  }
  printf((char const   */* __restrict  */)"Sum is: %d\n", sum);
  return (0);
}
}
