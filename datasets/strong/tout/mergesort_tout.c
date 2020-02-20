/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _IO_FILE;
struct timeval;
extern int pthread_cond_signal(int *cond ) ;
extern void exit(int status ) ;
void mergeSort(int *arr , int low , int mid , int high ) ;
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
extern long clock(void) ;
long _1entropy  =    0;
extern void perror(char const   *str ) ;
extern int scanf(char const   *format  , ...) ;
extern unsigned long read(int filedes , void *buf , unsigned long nbyte ) ;
extern int pthread_cond_wait(int *cond , int *mutex ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
extern int gethostname(char *name , unsigned long namelen ) ;
extern int pthread_mutex_unlock(int *mutex ) ;
void partition(int *arr , int low , int high ) ;
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
void megaInit(void) 
{ 


  {

}
}
void partition(int *arr , int low , int high ) 
{ 
  int mid ;

  {
  if (low < high) {
    mid = (low + high) / 2;
    partition(arr, low, mid);
    partition(arr, mid + 1, high);
    mergeSort(arr, low, mid, high);
  }
  return;
}
}
void mergeSort(int *arr , int low , int mid , int high ) 
{ 
  int i ;
  int m ;
  int k ;
  int l ;
  int temp[50] ;
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
  int _3_mergeSort__BARRIER_4 ;
  long one21 ;
  long randomFuns_n22 ;
  int _3_mergeSort__BARRIER_5 ;
  long one24 ;
  long randomFuns_n25 ;
  int _3_mergeSort__BARRIER_6 ;
  long one27 ;
  long randomFuns_n28 ;
  int _3_mergeSort__BARRIER_7 ;

  {
  _1entropy = (long )((unsigned long )arr) ^ _1entropy;
  randomFuns_n19 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 7;
  while (randomFuns_n19 > 1) {
    if (randomFuns_n19 % 2 == 1) {
      randomFuns_n19 = 3 * randomFuns_n19 + 1;
    } else {
      randomFuns_n19 /= 2;
    }
    one18 = randomFuns_n19;
  }
  _1alwaysZero = one18 >> 1;
  _3_mergeSort__BARRIER_4 = 1;
  _1entropy = (long )low | _1entropy;
  randomFuns_n22 = (_1entropy - ((_1entropy << 1L) & (_1entropy >> 63L))) + 10;
  while (randomFuns_n22 > 1) {
    if (randomFuns_n22 % 2 == 1) {
      randomFuns_n22 = 3 * randomFuns_n22 + 1;
    } else {
      randomFuns_n22 /= 2;
    }
    one21 = randomFuns_n22;
  }
  _1alwaysZero = one21 / 2;
  _3_mergeSort__BARRIER_5 = 1;
  _1entropy = (long )mid ^ _1entropy;
  randomFuns_n25 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 1;
  while (randomFuns_n25 > 1) {
    if (randomFuns_n25 % 2 == 1) {
      randomFuns_n25 = 3 * randomFuns_n25 + 1;
    } else {
      randomFuns_n25 /= 2;
    }
    one24 = randomFuns_n25;
  }
  _1alwaysZero = one24 / 2;
  _3_mergeSort__BARRIER_6 = 1;
  _1entropy = (long )high | _1entropy;
  randomFuns_n28 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 5;
  while (randomFuns_n28 > 1) {
    if (randomFuns_n28 % 2 == 1) {
      randomFuns_n28 = 3 * randomFuns_n28 + 1;
    } else {
      randomFuns_n28 /= 2;
    }
    one27 = randomFuns_n28;
  }
  _1alwaysZero = one27 >> 1;
  _3_mergeSort__BARRIER_7 = 1;
  l = low;
  i = low;
  m = mid + 1;
  while (1) {
    if (l <= mid) {
      if (! (m <= high)) {
        break;
      }
    } else {
      break;
    }
    if (*(arr + l) <= *(arr + m)) {
      temp[i] = *(arr + l);
      l ++;
    } else {
      temp[i] = *(arr + m);
      m ++;
    }
    if (((((_1alwaysZero & (((_1entropy ^ ~ 4) + ((_1entropy | 4) << 1L)) + 1L)) * (_1alwaysZero | (((_1entropy ^ ~ 4) + ((_1entropy | 4) << 1L)) + 1L)) + (_1alwaysZero & ~ (((_1entropy ^ ~ 4) + ((_1entropy | 4) << 1L)) + 1L)) * (~ _1alwaysZero & (((_1entropy ^ ~ 4) + ((_1entropy | 4) << 1L)) + 1L))) | 1) + (((_1alwaysZero & (((_1entropy ^ ~ 4) + ((_1entropy | 4) << 1L)) + 1L)) * (_1alwaysZero | (((_1entropy ^ ~ 4) + ((_1entropy | 4) << 1L)) + 1L)) + (_1alwaysZero & ~ (((_1entropy ^ ~ 4) + ((_1entropy | 4) << 1L)) + 1L)) * (~ _1alwaysZero & (((_1entropy ^ ~ 4) + ((_1entropy | 4) << 1L)) + 1L))) | 1)) - (((_1alwaysZero & (((_1entropy ^ ~ 4) + ((_1entropy | 4) << 1L)) + 1L)) * (_1alwaysZero | (((_1entropy ^ ~ 4) + ((_1entropy | 4) << 1L)) + 1L)) + (_1alwaysZero & ~ (((_1entropy ^ ~ 4) + ((_1entropy | 4) << 1L)) + 1L)) * (~ _1alwaysZero & (((_1entropy ^ ~ 4) + ((_1entropy | 4) << 1L)) + 1L))) ^ 1)) {
      i ++;
    } else {
      __asm__  volatile   (".byte 0xf3":);
    }
  }
  _1entropy = (long )i | _1entropy;
  randomFuns_n11 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 10;
  while (randomFuns_n11 > 1) {
    if (randomFuns_n11 % 2 == 1) {
      randomFuns_n11 = 3 * randomFuns_n11 + 1;
    } else {
      randomFuns_n11 /= 2;
    }
    one10 = randomFuns_n11;
  }
  _1alwaysZero = (~ one10 | (0xffffffffffffffffUL << 1)) - ~ one10;
  _1entropy = (long )m + _1entropy;
  randomFuns_n13 = (_1entropy - ((_1entropy << 1L) & (_1entropy >> 63L))) + 8;
  while (1) {
    if (((((_1alwaysZero & ((_1entropy ^ 5) - ((~ _1entropy & 5) << 1L))) * (_1alwaysZero | ((_1entropy ^ 5) - ((~ _1entropy & 5) << 1L))) + (_1alwaysZero & ~ ((_1entropy ^ 5) - ((~ _1entropy & 5) << 1L))) * (~ _1alwaysZero & ((_1entropy ^ 5) - ((~ _1entropy & 5) << 1L)))) | 0) << 1L) - (((_1alwaysZero & ((_1entropy ^ 5) - ((~ _1entropy & 5) << 1L))) * (_1alwaysZero | ((_1entropy ^ 5) - ((~ _1entropy & 5) << 1L))) + (_1alwaysZero & ~ ((_1entropy ^ 5) - ((~ _1entropy & 5) << 1L))) * (~ _1alwaysZero & ((_1entropy ^ 5) - ((~ _1entropy & 5) << 1L)))) ^ 0)) {
      __asm__  volatile   (".byte 0x58":);
    } else
    if (randomFuns_n13 > 1) {

    } else {
      break;
    }
    if (randomFuns_n13 % 2 == 1) {
      randomFuns_n13 = 3 * randomFuns_n13 + 1;
    } else {
      randomFuns_n13 /= 2;
    }
    one12 = randomFuns_n13;
  }
  _1alwaysZero = (~ one12 | (0xffffffffffffffffUL << 1)) - ~ one12;
  _1entropy = (long )l + _1entropy;
  randomFuns_n17 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 2;
  while (randomFuns_n17 > 1) {
    if (randomFuns_n17 % 2 == 1) {
      randomFuns_n17 = 3 * randomFuns_n17 + 1;
    } else {
      randomFuns_n17 /= 2;
    }
    one16 = randomFuns_n17;
  }
  _1alwaysZero = (~ one16 | (0xffffffffffffffffUL << 1)) - ~ one16;
  if (l > mid) {
    k = m;
    while (k <= high) {
      temp[i] = *(arr + k);
      i ++;
      k ++;
    }
    _1entropy = (long )k - _1entropy;
    randomFuns_n15 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 10;
    while (randomFuns_n15 > 1) {
      if (randomFuns_n15 % 2 == 1) {
        randomFuns_n15 = 3 * randomFuns_n15 + 1;
      } else {
        randomFuns_n15 /= 2;
      }
      one14 = randomFuns_n15;
    }
    _1alwaysZero = one14 / 2;
  } else {
    k = l;
    while (k <= mid) {
      temp[i] = *(arr + k);
      i ++;
      k ++;
    }
  }
  {
  if (((((_1alwaysZero & (((_1entropy & ~ 2) + (_1entropy & ~ 2)) - (_1entropy ^ 2))) * (_1alwaysZero | (((_1entropy & ~ 2) + (_1entropy & ~ 2)) - (_1entropy ^ 2))) + (_1alwaysZero & ~ (((_1entropy & ~ 2) + (_1entropy & ~ 2)) - (_1entropy ^ 2))) * (~ _1alwaysZero & (((_1entropy & ~ 2) + (_1entropy & ~ 2)) - (_1entropy ^ 2)))) | 0) + (((_1alwaysZero & (((_1entropy & ~ 2) + (_1entropy & ~ 2)) - (_1entropy ^ 2))) * (_1alwaysZero | (((_1entropy & ~ 2) + (_1entropy & ~ 2)) - (_1entropy ^ 2))) + (_1alwaysZero & ~ (((_1entropy & ~ 2) + (_1entropy & ~ 2)) - (_1entropy ^ 2))) * (~ _1alwaysZero & (((_1entropy & ~ 2) + (_1entropy & ~ 2)) - (_1entropy ^ 2)))) | 0)) - (((_1alwaysZero & (((_1entropy & ~ 2) + (_1entropy & ~ 2)) - (_1entropy ^ 2))) * (_1alwaysZero | (((_1entropy & ~ 2) + (_1entropy & ~ 2)) - (_1entropy ^ 2))) + (_1alwaysZero & ~ (((_1entropy & ~ 2) + (_1entropy & ~ 2)) - (_1entropy ^ 2))) * (~ _1alwaysZero & (((_1entropy & ~ 2) + (_1entropy & ~ 2)) - (_1entropy ^ 2)))) ^ 0)) {
    __asm__  volatile   (".byte 0x48,0x8b,0x49,0x58,0x48,0x39,0x58":);
  } else {
    k = low;
  }
  }
  while (k <= high) {
    *(arr + k) = temp[k];
    k ++;
  }
  return;
}
}
int main(int argc , char **argv , char **_formal_envp ) 
{ 
  int merge[10] ;
  int i ;
  int _BARRIER_0 ;
  unsigned long entropy_strLen7 ;
  unsigned long entropy_strLen8 ;
  long one9 ;
  long randomFuns_n10 ;
  unsigned long entropy_strLen11 ;
  long one12 ;
  long randomFuns_n13 ;
  int _2_main__BARRIER_1 ;
  unsigned long entropy_strLen15 ;
  unsigned long entropy_strLen16 ;
  long one17 ;
  long randomFuns_n18 ;
  int _2_main__BARRIER_2 ;
  unsigned long entropy_strLen20 ;
  long one21 ;
  long randomFuns_n22 ;
  int _2_main__BARRIER_3 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;
  _1entropy = (long )argc + _1entropy;
  randomFuns_n13 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 5;
  while (randomFuns_n13 > 1) {
    if (randomFuns_n13 % 2 == 1) {
      randomFuns_n13 = 3 * randomFuns_n13 + 1;
    } else {
      randomFuns_n13 /= 2;
    }
    one12 = randomFuns_n13;
  }
  _1alwaysZero = ((one12 & ~ 1) << 1L) - (one12 ^ 1);
  _2_main__BARRIER_1 = 1;
  entropy_strLen16 = randomFuns_n13;
  if (*(argv + 1) != 0) {
    entropy_strLen16 = strlen(*(argv + 1));
  } else {

  }
  _1entropy = (long )entropy_strLen16 | _1entropy;
  randomFuns_n18 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 8;
  while (randomFuns_n18 > 1) {
    if (randomFuns_n18 % 2 == 1) {
      randomFuns_n18 = 3 * randomFuns_n18 + 1;
    } else {
      randomFuns_n18 /= 2;
    }
    one17 = randomFuns_n18;
  }
  _1alwaysZero = (~ one17 | (0xffffffffffffffffUL << 1)) - ~ one17;
  _2_main__BARRIER_2 = 1;
  _1entropy = (long )((unsigned long )_formal_envp) ^ _1entropy;
  randomFuns_n22 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 6;
  while (randomFuns_n22 > 1) {
    if (randomFuns_n22 % 2 == 1) {
      randomFuns_n22 = 3 * randomFuns_n22 + 1;
    } else {
      randomFuns_n22 /= 2;
    }
    one21 = randomFuns_n22;
  }
  _1alwaysZero = (one21 & ~ 1) - (~ one21 & 1);
  _2_main__BARRIER_3 = 1;

  if (argc < 11) {
    _1entropy = (long )i | _1entropy;
    randomFuns_n10 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 1;
    while (randomFuns_n10 > 1) {
      if (randomFuns_n10 % 2 == 1) {
        randomFuns_n10 = 3 * randomFuns_n10 + 1;
      } else {
        randomFuns_n10 /= 2;
      }
      one9 = randomFuns_n10;
    }
    _1alwaysZero = (~ one9 | (0xffffffffffffffffUL << 1)) - ~ one9;
    return (1);
  }
  i = 1;
  while (i < argc) {
    merge[i - 1] = (int )*(*(argv + i) + 0);
    i ++;
  }
  partition(merge, 0, argc - 1);
  printf((char const   */* __restrict  */)"After merge sorting elements are: ");
  i = 0;
  while (i < argc - 1) {
    printf((char const   */* __restrict  */)"%d ", merge[i]);
    i ++;
  }
  return (0);
}
}
