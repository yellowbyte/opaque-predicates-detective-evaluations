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
void stringConcat(char *str1 , char *str2 ) ;
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
  char *str1 ;
  char *str2 ;
  int _BARRIER_0 ;
  unsigned long entropy_strLen8 ;
  unsigned long entropy_strLen9 ;
  unsigned long entropy_strLen10 ;
  unsigned long entropy_strLen11 ;
  unsigned long entropy_strLen12 ;
  unsigned long entropy_strLen13 ;
  unsigned long entropy_strLen14 ;
  long one15 ;
  long randomFuns_n16 ;
  unsigned long entropy_strLen17 ;
  unsigned long entropy_strLen18 ;
  unsigned long entropy_strLen19 ;
  unsigned long entropy_strLen20 ;
  long one21 ;
  long randomFuns_n22 ;
  unsigned long entropy_strLen23 ;
  unsigned long entropy_strLen24 ;
  unsigned long entropy_strLen25 ;
  long one26 ;
  long randomFuns_n27 ;
  int _2_main__BARRIER_1 ;
  unsigned long entropy_strLen29 ;
  unsigned long entropy_strLen30 ;
  unsigned long entropy_strLen31 ;
  unsigned long entropy_strLen32 ;
  long one33 ;
  long randomFuns_n34 ;
  int _2_main__BARRIER_2 ;
  unsigned long entropy_strLen36 ;
  unsigned long entropy_strLen37 ;
  unsigned long entropy_strLen38 ;
  long one39 ;
  long randomFuns_n40 ;
  int _2_main__BARRIER_3 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;
  _1entropy = (long )argc ^ _1entropy;
  randomFuns_n27 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 5;
  while (randomFuns_n27 > 1) {
    if (randomFuns_n27 % 2 == 1) {
      randomFuns_n27 = 3 * randomFuns_n27 + 1;
    } else {
      randomFuns_n27 /= 2;
    }
    one26 = randomFuns_n27;
  }
  _1alwaysZero = ((~ one26 | (0xffffffffffffffffUL << 1)) + one26) + 1L;
  _2_main__BARRIER_1 = 1;
  entropy_strLen32 = one15;
  if (*(argv + 1) != 0) {
    entropy_strLen32 = strlen(*(argv + 1));
  } else {

  }
  _1entropy = (long )entropy_strLen32 + _1entropy;
  randomFuns_n34 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 1;
  while (randomFuns_n34 > 1) {
    if (randomFuns_n34 % 2 == 1) {
      randomFuns_n34 = 3 * randomFuns_n34 + 1;
    } else {
      randomFuns_n34 /= 2;
    }
    one33 = randomFuns_n34;
  }
  _1alwaysZero = one33 >> 1;
  _2_main__BARRIER_2 = 1;
  _1entropy = (long )((unsigned long )_formal_envp) | _1entropy;
  randomFuns_n40 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 10;
  while (randomFuns_n40 > 1) {
    if (randomFuns_n40 % 2 == 1) {
      randomFuns_n40 = 3 * randomFuns_n40 + 1;
    } else {
      randomFuns_n40 /= 2;
    }
    one39 = randomFuns_n40;
  }
  _1alwaysZero = ((~ one39 | (0xffffffffffffffffUL << 1)) + one39) + 1L;
  _2_main__BARRIER_3 = 1;

  if (argc < 2) {
    entropy_strLen14 = 4L;
    if (str1 != 0) {
      entropy_strLen14 = strlen(str1);
    } else {

    }
    _1entropy = (long )entropy_strLen14 - _1entropy;
    randomFuns_n16 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 4;
    while (randomFuns_n16 > 1) {
      if (randomFuns_n16 % 2 == 1) {
        randomFuns_n16 = 3 * randomFuns_n16 + 1;
      } else {
        randomFuns_n16 /= 2;
      }
      one15 = randomFuns_n16;
    }
    _1alwaysZero = (~ one15 | (0xffffffffffffffffUL << 1)) - ~ one15;
    entropy_strLen20 = one15;
    if (str2 != 0) {
      entropy_strLen20 = strlen(str2);
    } else {

    }
    _1entropy = (long )entropy_strLen20 ^ _1entropy;
    randomFuns_n22 = (_1entropy - ((_1entropy << 1L) & (_1entropy >> 63L))) + 9;
    while (randomFuns_n22 > 1) {
      if (randomFuns_n22 % 2 == 1) {
        randomFuns_n22 = 3 * randomFuns_n22 + 1;
      } else {
        randomFuns_n22 /= 2;
      }
      one21 = randomFuns_n22;
    }
    _1alwaysZero = ((one21 & ~ 1) << 1L) - (one21 ^ 1);
    return (1);
  }
  str1 = *(argv + 1);
  str2 = *(argv + 2);
  stringConcat(str1, str2);
  printf((char const   */* __restrict  */)"String after concatenation: %s\n", str1);
  return (0);
}
}
void stringConcat(char *str1 , char *str2 ) 
{ 
  int i ;
  int j ;
  unsigned long entropy_strLen5 ;
  unsigned long entropy_strLen6 ;
  unsigned long entropy_strLen7 ;
  unsigned long entropy_strLen8 ;
  long one9 ;
  long randomFuns_n10 ;
  unsigned long entropy_strLen11 ;
  unsigned long entropy_strLen12 ;
  long one13 ;
  long randomFuns_n14 ;
  unsigned long entropy_strLen15 ;
  unsigned long entropy_strLen16 ;
  unsigned long entropy_strLen17 ;
  long one18 ;
  long randomFuns_n19 ;
  int _3_stringConcat__BARRIER_4 ;
  unsigned long entropy_strLen21 ;
  unsigned long entropy_strLen22 ;
  unsigned long entropy_strLen23 ;
  long one24 ;
  long randomFuns_n25 ;
  int _3_stringConcat__BARRIER_5 ;

  {
  entropy_strLen17 = one13;
  if (str1 != 0) {
    entropy_strLen17 = strlen(str1);
  } else {

  }
  _1entropy = (long )entropy_strLen17 + _1entropy;
  randomFuns_n19 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 7;
  while (randomFuns_n19 > 1) {
    if (randomFuns_n19 % 2 == 1) {
      randomFuns_n19 = 3 * randomFuns_n19 + 1;
    } else {
      randomFuns_n19 /= 2;
    }
    one18 = randomFuns_n19;
  }
  _1alwaysZero = ((~ one18 | (0xffffffffffffffffUL << 1)) + one18) + 1L;
  _3_stringConcat__BARRIER_4 = 1;
  entropy_strLen23 = randomFuns_n19;
  if (str2 != 0) {
    entropy_strLen23 = strlen(str2);
  } else {

  }
  _1entropy = (long )entropy_strLen23 + _1entropy;
  randomFuns_n25 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 5;
  while (randomFuns_n25 > 1) {
    if (randomFuns_n25 % 2 == 1) {
      randomFuns_n25 = 3 * randomFuns_n25 + 1;
    } else {
      randomFuns_n25 /= 2;
    }
    one24 = randomFuns_n25;
  }
  _1alwaysZero = one24 / 2;
  _3_stringConcat__BARRIER_5 = 1;
  i = 0;
  j = 0;
  while ((int )*(str1 + i) != 0) {
    i ++;
  }
  _1entropy = (long )i + _1entropy;
  randomFuns_n10 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 4;
  while (randomFuns_n10 > 1) {
    if (randomFuns_n10 % 2 == 1) {
      randomFuns_n10 = 3 * randomFuns_n10 + 1;
    } else {
      {
      if (((((_1alwaysZero & (((_1entropy + 5) + 1L) + ((- _1entropy - 1L) | (- 5 - 1L)))) * (_1alwaysZero | (((_1entropy + 5) + 1L) + ((- _1entropy - 1L) | (- 5 - 1L)))) + (_1alwaysZero & ~ (((_1entropy + 5) + 1L) + ((- _1entropy - 1L) | (- 5 - 1L)))) * (~ _1alwaysZero & (((_1entropy + 5) + 1L) + ((- _1entropy - 1L) | (- 5 - 1L))))) | 1) + (((_1alwaysZero & (((_1entropy + 5) + 1L) + ((- _1entropy - 1L) | (- 5 - 1L)))) * (_1alwaysZero | (((_1entropy + 5) + 1L) + ((- _1entropy - 1L) | (- 5 - 1L)))) + (_1alwaysZero & ~ (((_1entropy + 5) + 1L) + ((- _1entropy - 1L) | (- 5 - 1L)))) * (~ _1alwaysZero & (((_1entropy + 5) + 1L) + ((- _1entropy - 1L) | (- 5 - 1L))))) | 1)) - (((_1alwaysZero & (((_1entropy + 5) + 1L) + ((- _1entropy - 1L) | (- 5 - 1L)))) * (_1alwaysZero | (((_1entropy + 5) + 1L) + ((- _1entropy - 1L) | (- 5 - 1L)))) + (_1alwaysZero & ~ (((_1entropy + 5) + 1L) + ((- _1entropy - 1L) | (- 5 - 1L)))) * (~ _1alwaysZero & (((_1entropy + 5) + 1L) + ((- _1entropy - 1L) | (- 5 - 1L))))) ^ 1)) {
        randomFuns_n10 /= 2;
      } else {
        __asm__  volatile   (".byte 0xf,0x42,0xde,0xfa":);
      }
      }
    }
    if (((((_1alwaysZero & ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10))) * (_1alwaysZero | ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10))) + (_1alwaysZero & ~ ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10))) * (~ _1alwaysZero & ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10)))) ^ ~ 1) + ((((_1alwaysZero & ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10))) * (_1alwaysZero | ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10))) + (_1alwaysZero & ~ ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10))) * (~ _1alwaysZero & ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10)))) | 1) << 1L)) + 1L) {
      one9 = randomFuns_n10;
    } else {
      __asm__  volatile   (".byte 0x69,0xf0":);
    }
  }
  _1alwaysZero = one9 / 2;
  _1entropy = (long )j ^ _1entropy;
  randomFuns_n14 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 8;
  while (1) {
    if (randomFuns_n14 > 1) {

    } else
    if ((((_1alwaysZero & (((_1entropy - 1) - ((_1entropy | ~ 1) + (_1entropy | ~ 1))) - 2L)) * (_1alwaysZero | (((_1entropy - 1) - ((_1entropy | ~ 1) + (_1entropy | ~ 1))) - 2L)) + (_1alwaysZero & ~ (((_1entropy - 1) - ((_1entropy | ~ 1) + (_1entropy | ~ 1))) - 2L)) * (~ _1alwaysZero & (((_1entropy - 1) - ((_1entropy | ~ 1) + (_1entropy | ~ 1))) - 2L))) ^ 1) + ((((_1alwaysZero & (((_1entropy - 1) - ((_1entropy | ~ 1) + (_1entropy | ~ 1))) - 2L)) * (_1alwaysZero | (((_1entropy - 1) - ((_1entropy | ~ 1) + (_1entropy | ~ 1))) - 2L)) + (_1alwaysZero & ~ (((_1entropy - 1) - ((_1entropy | ~ 1) + (_1entropy | ~ 1))) - 2L)) * (~ _1alwaysZero & (((_1entropy - 1) - ((_1entropy | ~ 1) + (_1entropy | ~ 1))) - 2L))) & 1) << 1L)) {
      break;
    } else {
      __asm__  volatile   (".byte 0x73,0x29,0xfa,0xe4,0x4b,0x1c":);
    }
    if (randomFuns_n14 % 2 == 1) {
      randomFuns_n14 = 3 * randomFuns_n14 + 1;
    } else {
      randomFuns_n14 /= 2;
    }
    one13 = randomFuns_n14;
  }
  _1alwaysZero = ((~ one13 | (0xffffffffffffffffUL << 1)) + one13) + 1L;
  while ((int )*(str2 + j) != 0) {
    *(str1 + i) = *(str2 + j);
    i ++;
    j ++;
  }
  *(str1 + i) = (char )'\000';
  return;
}
}
