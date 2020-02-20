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
extern int pthread_cond_wait(int *cond , int *mutex ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
extern void qsort(void *base , unsigned long nel , unsigned long width , int (*compar)(void *a ,
                                                                                       void *b ) ) ;
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
int binary(int *a , int n , int m , int l , int u ) ;
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
  int a[10] ;
  int i ;
  int m ;
  int c ;
  int l ;
  int u ;
  int _BARRIER_0 ;
  unsigned long entropy_strLen11 ;
  unsigned long entropy_strLen12 ;
  long one13 ;
  long randomFuns_n14 ;
  unsigned long entropy_strLen15 ;
  long one16 ;
  long randomFuns_n17 ;
  unsigned long entropy_strLen18 ;
  long one19 ;
  long randomFuns_n20 ;
  unsigned long entropy_strLen21 ;
  long one22 ;
  long randomFuns_n23 ;
  unsigned long entropy_strLen24 ;
  long one25 ;
  long randomFuns_n26 ;
  unsigned long entropy_strLen27 ;
  long one28 ;
  long randomFuns_n29 ;
  int _2_main__BARRIER_1 ;
  unsigned long entropy_strLen31 ;
  unsigned long entropy_strLen32 ;
  long one33 ;
  long randomFuns_n34 ;
  int _2_main__BARRIER_2 ;
  unsigned long entropy_strLen36 ;
  long one37 ;
  long randomFuns_n38 ;
  int _2_main__BARRIER_3 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;
  _1entropy = (long )argc + _1entropy;
  randomFuns_n29 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 10;
  while (randomFuns_n29 > 1) {
    if (randomFuns_n29 % 2 == 1) {
      randomFuns_n29 = 3 * randomFuns_n29 + 1;
    } else {
      randomFuns_n29 /= 2;
    }
    one28 = randomFuns_n29;
  }
  _1alwaysZero = one28 >> 1;
  _2_main__BARRIER_1 = 1;
  entropy_strLen32 = randomFuns_n29;
  if (*(argv + 1) != 0) {
    entropy_strLen32 = strlen(*(argv + 1));
  } else {

  }
  _1entropy = (long )entropy_strLen32 + _1entropy;
  randomFuns_n34 = (_1entropy - ((_1entropy << 1L) & (_1entropy >> 63L))) + 1;
  while (randomFuns_n34 > 1) {
    if (randomFuns_n34 % 2 == 1) {
      randomFuns_n34 = 3 * randomFuns_n34 + 1;
    } else {
      randomFuns_n34 /= 2;
    }
    one33 = randomFuns_n34;
  }
  _1alwaysZero = (~ one33 | (0xffffffffffffffffUL << 1)) - ~ one33;
  _2_main__BARRIER_2 = 1;
  _1entropy = (long )((unsigned long )_formal_envp) - _1entropy;
  randomFuns_n38 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 7;
  while (randomFuns_n38 > 1) {
    if (randomFuns_n38 % 2 == 1) {
      randomFuns_n38 = 3 * randomFuns_n38 + 1;
    } else {
      randomFuns_n38 /= 2;
    }
    one37 = randomFuns_n38;
  }
  _1alwaysZero = one37 / 2;
  _2_main__BARRIER_3 = 1;

  if (argc < 12) {
    _1entropy = (long )i ^ _1entropy;
    randomFuns_n14 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 2;
    while (randomFuns_n14 > 1) {
      if (randomFuns_n14 % 2 == 1) {
        randomFuns_n14 = 3 * randomFuns_n14 + 1;
      } else {
        randomFuns_n14 /= 2;
      }
      one13 = randomFuns_n14;
    }
    _1alwaysZero = (~ one13 | (0xffffffffffffffffUL << 1)) - ~ one13;
    _1entropy = (long )m ^ _1entropy;
    randomFuns_n17 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 2;
    while (randomFuns_n17 > 1) {
      if (randomFuns_n17 % 2 == 1) {
        randomFuns_n17 = 3 * randomFuns_n17 + 1;
      } else {
        randomFuns_n17 /= 2;
      }
      one16 = randomFuns_n17;
    }
    _1alwaysZero = one16 >> 1;
    _1entropy = (long )c ^ _1entropy;
    randomFuns_n20 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 4;
    while (randomFuns_n20 > 1) {
      if (randomFuns_n20 % 2 == 1) {
        randomFuns_n20 = 3 * randomFuns_n20 + 1;
      } else {
        randomFuns_n20 /= 2;
      }
      one19 = randomFuns_n20;
    }
    _1alwaysZero = one19 / 2;
    _1entropy = (long )l - _1entropy;
    randomFuns_n23 = (_1entropy - ((_1entropy + _1entropy) & (_1entropy >> 63L))) + 3;
    while (randomFuns_n23 > 1) {
      if (randomFuns_n23 % 2 == 1) {
        randomFuns_n23 = 3 * randomFuns_n23 + 1;
      } else {
        randomFuns_n23 /= 2;
      }
      one22 = randomFuns_n23;
    }
    _1alwaysZero = one22 >> 1;
    _1entropy = (long )u ^ _1entropy;
    randomFuns_n26 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 8;
    while (randomFuns_n26 > 1) {
      if (randomFuns_n26 % 2 == 1) {
        randomFuns_n26 = 3 * randomFuns_n26 + 1;
      } else {
        randomFuns_n26 /= 2;
      }
      one25 = randomFuns_n26;
    }
    _1alwaysZero = one25 / 2;
    return (1);
  }
  i = 1;
  while (i < argc - 1) {
    a[i - 1] = (int )*(*(argv + i) + 0);
    i ++;
  }
  m = (int )*(*(argv + (argc - 1)) + 0);
  l = 0;
  u = argc - 2;
  c = binary(a, argc - 1, m, l, u);
  if (c == 0) {
    printf((char const   */* __restrict  */)"Number is not found.\n");
  } else {
    printf((char const   */* __restrict  */)"Number is found.\n");
  }
  return (0);
}
}
void megaInit(void) 
{ 


  {

}
}
int binary(int *a , int n , int m , int l , int u ) 
{ 
  int mid ;
  int c ;
  int tmp ;
  int tmp___0 ;
  long one10 ;
  long randomFuns_n11 ;
  long one12 ;
  long randomFuns_n13 ;
  long one14 ;
  long randomFuns_n15 ;
  long one16 ;
  long randomFuns_n17 ;
  long one18 ;
  long randomFuns_n19 ;
  int _3_binary__BARRIER_4 ;
  long one21 ;
  long randomFuns_n22 ;
  int _3_binary__BARRIER_5 ;
  long one24 ;
  long randomFuns_n25 ;
  int _3_binary__BARRIER_6 ;
  long one27 ;
  long randomFuns_n28 ;
  int _3_binary__BARRIER_7 ;
  long one30 ;
  long randomFuns_n31 ;
  int _3_binary__BARRIER_8 ;

  {
  _1entropy = (long )((unsigned long )a) ^ _1entropy;
  randomFuns_n19 = (_1entropy - ((_1entropy << 1L) & (_1entropy >> 63L))) + 2;
  while (randomFuns_n19 > 1) {
    if (randomFuns_n19 % 2 == 1) {
      randomFuns_n19 = 3 * randomFuns_n19 + 1;
    } else {
      randomFuns_n19 /= 2;
    }
    one18 = randomFuns_n19;
  }
  _1alwaysZero = (one18 + ~ 1) + 1L;
  _3_binary__BARRIER_4 = 1;
  _1entropy = (long )n | _1entropy;
  randomFuns_n22 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 7;
  while (randomFuns_n22 > 1) {
    if (randomFuns_n22 % 2 == 1) {
      randomFuns_n22 = 3 * randomFuns_n22 + 1;
    } else {
      randomFuns_n22 /= 2;
    }
    one21 = randomFuns_n22;
  }
  _1alwaysZero = one21 / 2;
  _3_binary__BARRIER_5 = 1;
  _1entropy = (long )m + _1entropy;
  randomFuns_n25 = (_1entropy - ((_1entropy + _1entropy) & (_1entropy >> 63L))) + 2;
  while (randomFuns_n25 > 1) {
    if (randomFuns_n25 % 2 == 1) {
      randomFuns_n25 = 3 * randomFuns_n25 + 1;
    } else {
      randomFuns_n25 /= 2;
    }
    one24 = randomFuns_n25;
  }
  _1alwaysZero = one24 >> 1;
  _3_binary__BARRIER_6 = 1;
  _1entropy = (long )l | _1entropy;
  randomFuns_n28 = (_1entropy - ((_1entropy + _1entropy) & (_1entropy >> 63L))) + 1;
  while (randomFuns_n28 > 1) {
    if (randomFuns_n28 % 2 == 1) {
      randomFuns_n28 = 3 * randomFuns_n28 + 1;
    } else {
      randomFuns_n28 /= 2;
    }
    one27 = randomFuns_n28;
  }
  _1alwaysZero = (~ one27 | (0xffffffffffffffffUL << 1)) - ~ one27;
  _3_binary__BARRIER_7 = 1;
  _1entropy = (long )u - _1entropy;
  randomFuns_n31 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 5;
  while (randomFuns_n31 > 1) {
    if (randomFuns_n31 % 2 == 1) {
      randomFuns_n31 = 3 * randomFuns_n31 + 1;
    } else {
      randomFuns_n31 /= 2;
    }
    one30 = randomFuns_n31;
  }
  _1alwaysZero = (~ one30 | (0xffffffffffffffffUL << 1)) - ~ one30;
  _3_binary__BARRIER_8 = 1;
  c = 0;
  if (l <= u) {
    mid = (l + u) / 2;
    if (m == *(a + mid)) {
      c = 1;
    } else
    if (m < *(a + mid)) {
      tmp = binary(a, n, m, l, mid - 1);
      _1entropy = (long )tmp - _1entropy;
      randomFuns_n15 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 4;
      while (randomFuns_n15 > 1) {
        if (randomFuns_n15 % 2 == 1) {
          randomFuns_n15 = 3 * randomFuns_n15 + 1;
        } else {
          randomFuns_n15 /= 2;
        }
        one14 = randomFuns_n15;
      }
      _1alwaysZero = (~ one14 | (0xffffffffffffffffUL << 1)) - ~ one14;
      _1entropy = (long )tmp___0 + _1entropy;
      randomFuns_n17 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 8;
      while (1) {
        if (randomFuns_n17 > 1) {

        } else
        if (((((_1alwaysZero & (((_1entropy ^ ~ 3) + ((_1entropy | 3) + (_1entropy | 3))) + 1L)) * (_1alwaysZero | (((_1entropy ^ ~ 3) + ((_1entropy | 3) + (_1entropy | 3))) + 1L)) + (_1alwaysZero & ~ (((_1entropy ^ ~ 3) + ((_1entropy | 3) + (_1entropy | 3))) + 1L)) * (~ _1alwaysZero & (((_1entropy ^ ~ 3) + ((_1entropy | 3) + (_1entropy | 3))) + 1L))) ^ ~ 0) + ((((_1alwaysZero & (((_1entropy ^ ~ 3) + ((_1entropy | 3) + (_1entropy | 3))) + 1L)) * (_1alwaysZero | (((_1entropy ^ ~ 3) + ((_1entropy | 3) + (_1entropy | 3))) + 1L)) + (_1alwaysZero & ~ (((_1entropy ^ ~ 3) + ((_1entropy | 3) + (_1entropy | 3))) + 1L)) * (~ _1alwaysZero & (((_1entropy ^ ~ 3) + ((_1entropy | 3) + (_1entropy | 3))) + 1L))) | 0) + (((_1alwaysZero & (((_1entropy ^ ~ 3) + ((_1entropy | 3) + (_1entropy | 3))) + 1L)) * (_1alwaysZero | (((_1entropy ^ ~ 3) + ((_1entropy | 3) + (_1entropy | 3))) + 1L)) + (_1alwaysZero & ~ (((_1entropy ^ ~ 3) + ((_1entropy | 3) + (_1entropy | 3))) + 1L)) * (~ _1alwaysZero & (((_1entropy ^ ~ 3) + ((_1entropy | 3) + (_1entropy | 3))) + 1L))) | 0))) + 1L) {
          __asm__  volatile   (".byte 0x1,0x0,0x0,0x44,0x89,0xe0,0xeb,0xa8":);
        } else {
          break;
        }
        if (randomFuns_n17 % 2 == 1) {
          randomFuns_n17 = 3 * randomFuns_n17 + 1;
        } else {
          randomFuns_n17 /= 2;
        }
        one16 = randomFuns_n17;
      }
      _1alwaysZero = (~ one16 | (0xffffffffffffffffUL << 1)) - ~ one16;
      return (tmp);
    } else {
      tmp___0 = binary(a, n, m, mid + 1, u);
      return (tmp___0);
    }
    _1entropy = (long )mid ^ _1entropy;
    randomFuns_n11 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 10;
    {
    if (((((_1alwaysZero & ((_1entropy + ~ 6) + 1L)) * (_1alwaysZero | ((_1entropy + ~ 6) + 1L)) + (_1alwaysZero & ~ ((_1entropy + ~ 6) + 1L)) * (~ _1alwaysZero & ((_1entropy + ~ 6) + 1L))) ^ ~ 0) + ((((_1alwaysZero & ((_1entropy + ~ 6) + 1L)) * (_1alwaysZero | ((_1entropy + ~ 6) + 1L)) + (_1alwaysZero & ~ ((_1entropy + ~ 6) + 1L)) * (~ _1alwaysZero & ((_1entropy + ~ 6) + 1L))) | 0) + (((_1alwaysZero & ((_1entropy + ~ 6) + 1L)) * (_1alwaysZero | ((_1entropy + ~ 6) + 1L)) + (_1alwaysZero & ~ ((_1entropy + ~ 6) + 1L)) * (~ _1alwaysZero & ((_1entropy + ~ 6) + 1L))) | 0))) + 1L) {
      __asm__  volatile   (".byte 0x4,0xee,0x53,0x19":);
    } else {
      while (randomFuns_n11 > 1) {
        if (randomFuns_n11 % 2 == 1) {
          randomFuns_n11 = 3 * randomFuns_n11 + 1;
        } else {
          randomFuns_n11 /= 2;
        }
        one10 = randomFuns_n11;
      }
    }
    }
    _1alwaysZero = one10 >> 1;
  } else
  if ((((_1alwaysZero & ((_1entropy | 6) + (_1entropy & 6))) * (_1alwaysZero | ((_1entropy | 6) + (_1entropy & 6))) + (_1alwaysZero & ~ ((_1entropy | 6) + (_1entropy & 6))) * (~ _1alwaysZero & ((_1entropy | 6) + (_1entropy & 6)))) | 0) + (((_1alwaysZero & ((_1entropy | 6) + (_1entropy & 6))) * (_1alwaysZero | ((_1entropy | 6) + (_1entropy & 6))) + (_1alwaysZero & ~ ((_1entropy | 6) + (_1entropy & 6))) * (~ _1alwaysZero & ((_1entropy | 6) + (_1entropy & 6)))) & 0)) {
    __asm__  volatile   (".byte 0x48,0x83,0xc1":);
  } else {
    return (c);
  }
  _1entropy = (long )c | _1entropy;
  randomFuns_n13 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 2;
  while (randomFuns_n13 > 1) {
    if (randomFuns_n13 % 2 == 1) {
      randomFuns_n13 = 3 * randomFuns_n13 + 1;
    } else {
      randomFuns_n13 /= 2;
    }
    one12 = randomFuns_n13;
  }
  _1alwaysZero = one12 / 2;
  return (0);
}
}