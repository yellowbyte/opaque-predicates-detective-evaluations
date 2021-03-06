/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _IO_FILE;
struct timeval;
extern void exit(int status ) ;
extern int pthread_cond_signal(int *cond ) ;
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
extern double log(double x ) ;
extern int snprintf(char *str , unsigned long size , char const   *format  , ...) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
int main(int argc , char **argv , char **_formal_envp ) 
{ 
  char *str ;
  int i ;
  int _BARRIER_0 ;
  unsigned long entropy_strLen7 ;
  unsigned long entropy_strLen8 ;
  unsigned long entropy_strLen9 ;
  unsigned long entropy_strLen10 ;
  unsigned long entropy_strLen11 ;
  long one12 ;
  long randomFuns_n13 ;
  unsigned long entropy_strLen14 ;
  unsigned long entropy_strLen15 ;
  long one16 ;
  long randomFuns_n17 ;
  unsigned long entropy_strLen18 ;
  unsigned long entropy_strLen19 ;
  long one20 ;
  long randomFuns_n21 ;
  int _2_main__BARRIER_1 ;
  unsigned long entropy_strLen23 ;
  unsigned long entropy_strLen24 ;
  unsigned long entropy_strLen25 ;
  long one26 ;
  long randomFuns_n27 ;
  int _2_main__BARRIER_2 ;
  unsigned long entropy_strLen29 ;
  unsigned long entropy_strLen30 ;
  long one31 ;
  long randomFuns_n32 ;
  int _2_main__BARRIER_3 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;
  _1entropy = (long )argc - _1entropy;
  randomFuns_n21 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 1;
  while (randomFuns_n21 > 1) {
    if (randomFuns_n21 % 2 == 1) {
      randomFuns_n21 = 3 * randomFuns_n21 + 1;
    } else {
      randomFuns_n21 /= 2;
    }
    one20 = randomFuns_n21;
  }
  _1alwaysZero = (one20 & ~ 1) - (~ one20 & 1);
  _2_main__BARRIER_1 = 1;
  entropy_strLen25 = randomFuns_n21;
  if (*(argv + 1) != 0) {
    entropy_strLen25 = strlen(*(argv + 1));
  } else {

  }
  _1entropy = (long )entropy_strLen25 - _1entropy;
  randomFuns_n27 = (_1entropy - ((_1entropy + _1entropy) & (_1entropy >> 63L))) + 6;
  while (randomFuns_n27 > 1) {
    if (randomFuns_n27 % 2 == 1) {
      randomFuns_n27 = 3 * randomFuns_n27 + 1;
    } else {
      randomFuns_n27 /= 2;
    }
    one26 = randomFuns_n27;
  }
  _1alwaysZero = one26 >> 1;
  _2_main__BARRIER_2 = 1;
  _1entropy = (long )((unsigned long )_formal_envp) + _1entropy;
  randomFuns_n32 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 3;
  while (randomFuns_n32 > 1) {
    if (randomFuns_n32 % 2 == 1) {
      randomFuns_n32 = 3 * randomFuns_n32 + 1;
    } else {
      randomFuns_n32 /= 2;
    }
    one31 = randomFuns_n32;
  }
  _1alwaysZero = one31 >> 1;
  _2_main__BARRIER_3 = 1;

  if (argc < 2) {
    entropy_strLen11 = 5L;
    if (str != 0) {
      entropy_strLen11 = strlen(str);
    } else {

    }
    _1entropy = (long )entropy_strLen11 + _1entropy;
    randomFuns_n13 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 3;
    while (1) {
      if (randomFuns_n13 > 1) {

      } else
      if (((((_1alwaysZero & (((_1entropy - 1) - ((_1entropy | ~ 1) << 1L)) - 2L)) * (_1alwaysZero | (((_1entropy - 1) - ((_1entropy | ~ 1) << 1L)) - 2L)) + (_1alwaysZero & ~ (((_1entropy - 1) - ((_1entropy | ~ 1) << 1L)) - 2L)) * (~ _1alwaysZero & (((_1entropy - 1) - ((_1entropy | ~ 1) << 1L)) - 2L))) ^ ~ 0) + ((((_1alwaysZero & (((_1entropy - 1) - ((_1entropy | ~ 1) << 1L)) - 2L)) * (_1alwaysZero | (((_1entropy - 1) - ((_1entropy | ~ 1) << 1L)) - 2L)) + (_1alwaysZero & ~ (((_1entropy - 1) - ((_1entropy | ~ 1) << 1L)) - 2L)) * (~ _1alwaysZero & (((_1entropy - 1) - ((_1entropy | ~ 1) << 1L)) - 2L))) | 0) + (((_1alwaysZero & (((_1entropy - 1) - ((_1entropy | ~ 1) << 1L)) - 2L)) * (_1alwaysZero | (((_1entropy - 1) - ((_1entropy | ~ 1) << 1L)) - 2L)) + (_1alwaysZero & ~ (((_1entropy - 1) - ((_1entropy | ~ 1) << 1L)) - 2L)) * (~ _1alwaysZero & (((_1entropy - 1) - ((_1entropy | ~ 1) << 1L)) - 2L))) | 0))) + 1L) {
        __asm__  volatile   (".byte 0x8,0x14,0xbb,0x4a,0x38,0x2f":);
      } else {
        break;
      }
      {
      if ((((_1alwaysZero & ((_1entropy ^ 6) - ((~ _1entropy & 6) + (~ _1entropy & 6)))) * (_1alwaysZero | ((_1entropy ^ 6) - ((~ _1entropy & 6) + (~ _1entropy & 6)))) + (_1alwaysZero & ~ ((_1entropy ^ 6) - ((~ _1entropy & 6) + (~ _1entropy & 6)))) * (~ _1alwaysZero & ((_1entropy ^ 6) - ((~ _1entropy & 6) + (~ _1entropy & 6))))) - ~ 0) - 1L) {
        __asm__  volatile   (".byte 0xd7,0x7c,0x94":);
      } else
      if (randomFuns_n13 % 2 == 1) {
        randomFuns_n13 = 3 * randomFuns_n13 + 1;
      } else {
        randomFuns_n13 /= 2;
      }
      }
      one12 = randomFuns_n13;
    }
    _1alwaysZero = (one12 & ~ 1) - (~ one12 & 1);
    _1entropy = (long )i | _1entropy;
    randomFuns_n17 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 1;
    while (randomFuns_n17 > 1) {
      if (randomFuns_n17 % 2 == 1) {
        randomFuns_n17 = 3 * randomFuns_n17 + 1;
      } else {
        randomFuns_n17 /= 2;
      }
      one16 = randomFuns_n17;
    }
    if ((((_1alwaysZero & (((_1entropy + 4) + 1L) + ((- _1entropy - 1L) | (- 4 - 1L)))) * (_1alwaysZero | (((_1entropy + 4) + 1L) + ((- _1entropy - 1L) | (- 4 - 1L)))) + (_1alwaysZero & ~ (((_1entropy + 4) + 1L) + ((- _1entropy - 1L) | (- 4 - 1L)))) * (~ _1alwaysZero & (((_1entropy + 4) + 1L) + ((- _1entropy - 1L) | (- 4 - 1L))))) ^ 1) + ((((_1alwaysZero & (((_1entropy + 4) + 1L) + ((- _1entropy - 1L) | (- 4 - 1L)))) * (_1alwaysZero | (((_1entropy + 4) + 1L) + ((- _1entropy - 1L) | (- 4 - 1L)))) + (_1alwaysZero & ~ (((_1entropy + 4) + 1L) + ((- _1entropy - 1L) | (- 4 - 1L)))) * (~ _1alwaysZero & (((_1entropy + 4) + 1L) + ((- _1entropy - 1L) | (- 4 - 1L))))) & 1) << 1L)) {
      _1alwaysZero = one16 >> 1;
    } else {
      __asm__  volatile   (".byte 0x0,0x2e,0xff,0x79,0xdc,0x3a":);
    }
    return (1);
  }
  str = *(argv + 1);
  i = 0;
  printf((char const   */* __restrict  */)"%c", (int )*(str + 0));
  while ((int )*(str + i) != 0) {
    if ((int )*(str + i) == 32) {
      i ++;
      printf((char const   */* __restrict  */)"%c", (int )*(str + i));
    }
    i ++;
  }
  printf((char const   */* __restrict  */)"\n");
  return (0);
}
}
void megaInit(void) 
{ 


  {

}
}
