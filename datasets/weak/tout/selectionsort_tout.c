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
extern int gettimeofday(struct timeval *tv , void *tz ) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
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
extern float strtof(char const   *str , char const   *endptr ) ;
extern int pthread_cond_wait(int *cond , int *mutex ) ;
extern int gethostname(char *name , unsigned long namelen ) ;
extern void qsort(void *base , unsigned long nel , unsigned long width , int (*compar)(void *a ,
                                                                                       void *b ) ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
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
  int j ;
  int temp ;
  int a[10] ;
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
  int _2_main__BARRIER_1 ;
  unsigned long entropy_strLen23 ;
  unsigned long entropy_strLen24 ;
  long one25 ;
  long randomFuns_n26 ;
  int _2_main__BARRIER_2 ;
  unsigned long entropy_strLen28 ;
  long one29 ;
  long randomFuns_n30 ;
  int _2_main__BARRIER_3 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;
  _1entropy = (long )argc ^ _1entropy;
  randomFuns_n21 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 4;
  while (randomFuns_n21 > 1) {
    if (randomFuns_n21 % 2 == 1) {
      randomFuns_n21 = 3 * randomFuns_n21 + 1;
    } else {
      randomFuns_n21 /= 2;
    }
    one20 = randomFuns_n21;
  }
  _1alwaysZero = ((~ one20 | (0xffffffffffffffffUL << 1)) + one20) + 1L;
  _2_main__BARRIER_1 = 1;
  entropy_strLen24 = randomFuns_n18;
  if (*(argv + 1) != 0) {
    entropy_strLen24 = strlen(*(argv + 1));
  } else {

  }
  _1entropy = (long )entropy_strLen24 | _1entropy;
  randomFuns_n26 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 5;
  while (randomFuns_n26 > 1) {
    if (randomFuns_n26 % 2 == 1) {
      randomFuns_n26 = 3 * randomFuns_n26 + 1;
    } else {
      randomFuns_n26 /= 2;
    }
    one25 = randomFuns_n26;
  }
  _1alwaysZero = (~ one25 | (0xffffffffffffffffUL << 1)) - ~ one25;
  _2_main__BARRIER_2 = 1;
  _1entropy = (long )((unsigned long )_formal_envp) - _1entropy;
  randomFuns_n30 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 4;
  while (randomFuns_n30 > 1) {
    if (randomFuns_n30 % 2 == 1) {
      randomFuns_n30 = 3 * randomFuns_n30 + 1;
    } else {
      randomFuns_n30 /= 2;
    }
    one29 = randomFuns_n30;
  }
  _1alwaysZero = (one29 ^ 1) - ((~ one29 & 1) + (~ one29 & 1));
  _2_main__BARRIER_3 = 1;

  if (argc < 11) {
    _1entropy = (long )i ^ _1entropy;
    randomFuns_n12 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 10;
    while (randomFuns_n12 > 1) {
      if (randomFuns_n12 % 2 == 1) {
        randomFuns_n12 = 3 * randomFuns_n12 + 1;
      } else {
        randomFuns_n12 /= 2;
      }
      one11 = randomFuns_n12;
    }
    _1alwaysZero = one11 >> 1;
    _1entropy = (long )j - _1entropy;
    randomFuns_n15 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 6;
    while (randomFuns_n15 > 1) {
      if (randomFuns_n15 % 2 == 1) {
        randomFuns_n15 = 3 * randomFuns_n15 + 1;
      } else {
        randomFuns_n15 /= 2;
      }
      one14 = randomFuns_n15;
    }
    if ((((_1alwaysZero & (((_1entropy ^ ~ 7) + ((_1entropy | 7) << 1L)) + 1L)) * (_1alwaysZero | (((_1entropy ^ ~ 7) + ((_1entropy | 7) << 1L)) + 1L)) + (_1alwaysZero & ~ (((_1entropy ^ ~ 7) + ((_1entropy | 7) << 1L)) + 1L)) * (~ _1alwaysZero & (((_1entropy ^ ~ 7) + ((_1entropy | 7) << 1L)) + 1L))) | 0) + (((_1alwaysZero & (((_1entropy ^ ~ 7) + ((_1entropy | 7) << 1L)) + 1L)) * (_1alwaysZero | (((_1entropy ^ ~ 7) + ((_1entropy | 7) << 1L)) + 1L)) + (_1alwaysZero & ~ (((_1entropy ^ ~ 7) + ((_1entropy | 7) << 1L)) + 1L)) * (~ _1alwaysZero & (((_1entropy ^ ~ 7) + ((_1entropy | 7) << 1L)) + 1L))) & 0)) {
      __asm__  volatile   (".byte 0x4e,0x2b,0x84,0x52,0x3d,0xa4,0xcb,0x3b":);
    } else {
      _1alwaysZero = one14 >> 1;
      _1entropy = (long )temp + _1entropy;
      randomFuns_n18 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 5;
    }
    while (randomFuns_n18 > 1) {
      if (randomFuns_n18 % 2 == 1) {
        randomFuns_n18 = 3 * randomFuns_n18 + 1;
      } else {
        randomFuns_n18 /= 2;
      }
      one17 = randomFuns_n18;
    }
    _1alwaysZero = one17 / 2;
    return (1);
  }
  i = 1;
  while (i < argc) {
    {
    if ((((_1alwaysZero & ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10))) * (_1alwaysZero | ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10))) + (_1alwaysZero & ~ ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10))) * (~ _1alwaysZero & ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10)))) ^ 1) + ((((_1alwaysZero & ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10))) * (_1alwaysZero | ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10))) + (_1alwaysZero & ~ ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10))) * (~ _1alwaysZero & ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10)))) & 1) + (((_1alwaysZero & ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10))) * (_1alwaysZero | ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10))) + (_1alwaysZero & ~ ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10))) * (~ _1alwaysZero & ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10)))) & 1))) {
      a[i - 1] = (int )*(*(argv + i) + 0);
      i ++;
    } else {
      __asm__  volatile   (".byte 0x60,0xb8,0x1,0x0,0x0,0x0,0x4c,0x39":);
    }
    }
  }
  i = 0;
  while (1) {
    if (! (i < argc - 1)) {
      if ((((_1alwaysZero & ((_1entropy | 7) - (_1entropy & 7))) * (_1alwaysZero | ((_1entropy | 7) - (_1entropy & 7))) + (_1alwaysZero & ~ ((_1entropy | 7) - (_1entropy & 7))) * (~ _1alwaysZero & ((_1entropy | 7) - (_1entropy & 7)))) | 1) + (((_1alwaysZero & ((_1entropy | 7) - (_1entropy & 7))) * (_1alwaysZero | ((_1entropy | 7) - (_1entropy & 7))) + (_1alwaysZero & ~ ((_1entropy | 7) - (_1entropy & 7))) * (~ _1alwaysZero & ((_1entropy | 7) - (_1entropy & 7)))) & 1)) {
        break;
      } else {
        __asm__  volatile   (".byte 0x73,0xfc,0xf,0xdd,0x9c,0x46":);
      }
    }
    j = i + 1;
    while (j < argc - 1) {
      if (a[i] > a[j]) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
      j ++;
    }
    i ++;
  }
  printf((char const   */* __restrict  */)"After sorting is: ");
  i = 0;
  while (i < argc - 1) {
    printf((char const   */* __restrict  */)" %d", a[i]);
    i ++;
  }
  printf((char const   */* __restrict  */)"\n");
  return (0);
}
}
