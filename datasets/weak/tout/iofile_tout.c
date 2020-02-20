/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _IO_FILE;
struct _IO_marker;
struct timeval;
extern int pthread_cond_signal(int *cond ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
extern int fseek(struct _IO_FILE *stream , long offs , int whence ) ;
typedef struct _IO_FILE FILE;
extern int fclose(FILE *__stream ) ;
extern int close(int filedes ) ;
extern int pthread_create(void *thread , void *attr , void *start_routine , void *arg ) ;
char **_global_argv  =    (char **)0;
extern int fcntl(int filedes , int cmd  , ...) ;
typedef long __off_t;
extern int unlink(char const   *filename ) ;
struct timeval {
   long tv_sec ;
   long tv_usec ;
};
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
typedef void _IO_lock_t;
typedef long __off64_t;
typedef unsigned long size_t;
struct _IO_FILE {
   int _flags ;
   char *_IO_read_ptr ;
   char *_IO_read_end ;
   char *_IO_read_base ;
   char *_IO_write_base ;
   char *_IO_write_ptr ;
   char *_IO_write_end ;
   char *_IO_buf_base ;
   char *_IO_buf_end ;
   char *_IO_save_base ;
   char *_IO_backup_base ;
   char *_IO_save_end ;
   struct _IO_marker *_markers ;
   struct _IO_FILE *_chain ;
   int _fileno ;
   int _flags2 ;
   __off_t _old_offset ;
   unsigned short _cur_column ;
   signed char _vtable_offset ;
   char _shortbuf[1] ;
   _IO_lock_t *_lock ;
   __off64_t _offset ;
   void *__pad1 ;
   void *__pad2 ;
   void *__pad3 ;
   void *__pad4 ;
   size_t __pad5 ;
   int _mode ;
   char _unused2[(15UL * sizeof(int ) - 4UL * sizeof(void *)) - sizeof(size_t )] ;
};
extern int pthread_mutex_lock(int *mutex ) ;
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
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) rand)(void) ;
extern void free(void *ptr ) ;
extern unsigned long strlen(char const   *s ) ;
int main(int argc , char **argv , char **_formal_envp ) ;
extern unsigned long write(int filedes , void *buf , unsigned long nbyte ) ;
typedef long __time_t;
typedef __time_t time_t;
char *rand_string(char *str , size_t size ) ;
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
extern int fgetc(FILE *__stream ) ;
extern unsigned long read(int filedes , void *buf , unsigned long nbyte ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
extern int gethostname(char *name , unsigned long namelen ) ;
extern int pthread_mutex_unlock(int *mutex ) ;
extern int pthread_cond_wait(int *cond , int *mutex ) ;
extern void qsort(void *base , unsigned long nel , unsigned long width , int (*compar)(void *a ,
                                                                                       void *b ) ) ;
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern int pthread_mutex_init(int *mutex , int *attr ) ;
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
extern FILE *fopen(char const   * __restrict  __filename , char const   * __restrict  __modes ) ;
extern int strcmp(char const   *a , char const   *b ) ;
extern double difftime(long tv1 , long tv0 ) ;
extern void signal(int sig , void *func ) ;
extern  __attribute__((__nothrow__)) time_t ( __attribute__((__leaf__)) time)(time_t *__timer ) ;
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format 
                   , ...) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
extern int open(char const   *filename , int oflag  , ...) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) srand)(unsigned int __seed ) ;
extern double sqrt(double x ) ;
extern double log(double x ) ;
extern int snprintf(char *str , unsigned long size , char const   *format  , ...) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
int main(int argc , char **argv , char **_formal_envp ) 
{ 
  char *c ;
  FILE *rfile ;
  FILE *wfile ;
  time_t t ;
  time_t tmp ;
  char ch ;
  int tmp___0 ;
  int _BARRIER_0 ;
  unsigned long entropy_strLen12 ;
  unsigned long entropy_strLen13 ;
  unsigned long entropy_strLen14 ;
  unsigned long entropy_strLen15 ;
  unsigned long entropy_strLen16 ;
  long one17 ;
  long randomFuns_n18 ;
  unsigned long entropy_strLen19 ;
  unsigned long entropy_strLen20 ;
  long one21 ;
  long randomFuns_n22 ;
  unsigned long entropy_strLen23 ;
  unsigned long entropy_strLen24 ;
  long one25 ;
  long randomFuns_n26 ;
  unsigned long entropy_strLen27 ;
  unsigned long entropy_strLen28 ;
  long one29 ;
  long randomFuns_n30 ;
  unsigned long entropy_strLen31 ;
  unsigned long entropy_strLen32 ;
  long one33 ;
  long randomFuns_n34 ;
  unsigned long entropy_strLen35 ;
  unsigned long entropy_strLen36 ;
  long one37 ;
  long randomFuns_n38 ;
  unsigned long entropy_strLen39 ;
  unsigned long entropy_strLen40 ;
  long one41 ;
  long randomFuns_n42 ;
  unsigned long entropy_strLen43 ;
  unsigned long entropy_strLen44 ;
  long one45 ;
  long randomFuns_n46 ;
  int _2_main__BARRIER_1 ;
  unsigned long entropy_strLen48 ;
  unsigned long entropy_strLen49 ;
  unsigned long entropy_strLen50 ;
  long one51 ;
  long randomFuns_n52 ;
  int _2_main__BARRIER_2 ;
  unsigned long entropy_strLen54 ;
  unsigned long entropy_strLen55 ;
  long one56 ;
  long randomFuns_n57 ;
  int _2_main__BARRIER_3 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;
  _1entropy = (long )argc - _1entropy;
  randomFuns_n46 = (_1entropy - ((_1entropy << 1L) & (_1entropy >> 63L))) + 5;
  while (randomFuns_n46 > 1) {
    if (randomFuns_n46 % 2 == 1) {
      randomFuns_n46 = 3 * randomFuns_n46 + 1;
    } else {
      randomFuns_n46 /= 2;
    }
    one45 = randomFuns_n46;
  }
  _1alwaysZero = ((~ one45 | (0xffffffffffffffffUL << 1)) + one45) + 1L;
  _2_main__BARRIER_1 = 1;
  entropy_strLen50 = randomFuns_n22;
  if (*(argv + 1) != 0) {
    entropy_strLen50 = strlen(*(argv + 1));
  } else {

  }
  _1entropy = (long )entropy_strLen50 + _1entropy;
  randomFuns_n52 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 4;
  while (randomFuns_n52 > 1) {
    if (randomFuns_n52 % 2 == 1) {
      randomFuns_n52 = 3 * randomFuns_n52 + 1;
    } else {
      randomFuns_n52 /= 2;
    }
    one51 = randomFuns_n52;
  }
  _1alwaysZero = one51 >> 1;
  _2_main__BARRIER_2 = 1;
  _1entropy = (long )((unsigned long )_formal_envp) - _1entropy;
  randomFuns_n57 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 3;
  while (randomFuns_n57 > 1) {
    if (randomFuns_n57 % 2 == 1) {
      randomFuns_n57 = 3 * randomFuns_n57 + 1;
    } else {
      randomFuns_n57 /= 2;
    }
    one56 = randomFuns_n57;
  }
  _1alwaysZero = ((~ one56 | (0xffffffffffffffffUL << 1)) + one56) + 1L;
  _2_main__BARRIER_3 = 1;

  if (argc < 2) {
    entropy_strLen16 = tmp;
    if (c != 0) {
      entropy_strLen16 = strlen(c);
    } else {

    }
    _1entropy = tmp | _1entropy;
    randomFuns_n34 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 7;
    while (randomFuns_n34 > 1) {
      if (randomFuns_n34 % 2 == 1) {
        randomFuns_n34 = 3 * randomFuns_n34 + 1;
      } else {
        randomFuns_n34 /= 2;
      }
      one33 = randomFuns_n34;
    }
    _1alwaysZero = one33 >> 1;
    _1entropy = (long )entropy_strLen16 ^ _1entropy;
    randomFuns_n18 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 4;
    while (randomFuns_n18 > 1) {
      if (randomFuns_n18 % 2 == 1) {
        randomFuns_n18 = 3 * randomFuns_n18 + 1;
      } else {
        randomFuns_n18 /= 2;
      }
      one17 = randomFuns_n18;
    }
    _1alwaysZero = ((one17 & ~ 1) << 1L) - (one17 ^ 1);
    _1entropy = (long )((unsigned long )rfile) ^ _1entropy;
    randomFuns_n22 = (_1entropy - ((_1entropy + _1entropy) & (_1entropy >> 63L))) + 7;
    while (randomFuns_n22 > 1) {
      if (randomFuns_n22 % 2 == 1) {
        randomFuns_n22 = 3 * randomFuns_n22 + 1;
      } else {
        randomFuns_n22 /= 2;
      }
      one21 = randomFuns_n22;
    }
    _1alwaysZero = (one21 & ~ 1) - (~ one21 & 1);
    _1entropy = (long )((unsigned long )wfile) + _1entropy;
    randomFuns_n26 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 9;
    while (randomFuns_n26 > 1) {
      if (randomFuns_n26 % 2 == 1) {
        randomFuns_n26 = 3 * randomFuns_n26 + 1;
      } else {
        randomFuns_n26 /= 2;
      }
      one25 = randomFuns_n26;
    }
    _1alwaysZero = (~ one25 | (0xffffffffffffffffUL << 1)) - ~ one25;
    _1entropy = t + _1entropy;
    randomFuns_n30 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 5;
    while (randomFuns_n30 > 1) {
      if (randomFuns_n30 % 2 == 1) {
        if (((((_1alwaysZero & ((_1entropy & 9) * (_1entropy | 9) + (_1entropy & ~ 9) * (~ _1entropy & 9))) * (_1alwaysZero | ((_1entropy & 9) * (_1entropy | 9) + (_1entropy & ~ 9) * (~ _1entropy & 9))) + (_1alwaysZero & ~ ((_1entropy & 9) * (_1entropy | 9) + (_1entropy & ~ 9) * (~ _1entropy & 9))) * (~ _1alwaysZero & ((_1entropy & 9) * (_1entropy | 9) + (_1entropy & ~ 9) * (~ _1entropy & 9)))) | 1) + (((_1alwaysZero & ((_1entropy & 9) * (_1entropy | 9) + (_1entropy & ~ 9) * (~ _1entropy & 9))) * (_1alwaysZero | ((_1entropy & 9) * (_1entropy | 9) + (_1entropy & ~ 9) * (~ _1entropy & 9))) + (_1alwaysZero & ~ ((_1entropy & 9) * (_1entropy | 9) + (_1entropy & ~ 9) * (~ _1entropy & 9))) * (~ _1alwaysZero & ((_1entropy & 9) * (_1entropy | 9) + (_1entropy & ~ 9) * (~ _1entropy & 9)))) | 1)) - (((_1alwaysZero & ((_1entropy & 9) * (_1entropy | 9) + (_1entropy & ~ 9) * (~ _1entropy & 9))) * (_1alwaysZero | ((_1entropy & 9) * (_1entropy | 9) + (_1entropy & ~ 9) * (~ _1entropy & 9))) + (_1alwaysZero & ~ ((_1entropy & 9) * (_1entropy | 9) + (_1entropy & ~ 9) * (~ _1entropy & 9))) * (~ _1alwaysZero & ((_1entropy & 9) * (_1entropy | 9) + (_1entropy & ~ 9) * (~ _1entropy & 9)))) ^ 1)) {
          randomFuns_n30 = 3 * randomFuns_n30 + 1;
        } else {
          __asm__  volatile   (".byte 0x5e,0xd0,0x1b,0x79,0xb1,0xfc,0x82":);
        }
      } else {
        randomFuns_n30 /= 2;
      }
      one29 = randomFuns_n30;
    }
    _1alwaysZero = one29 / 2;
    _1entropy = (long )ch ^ _1entropy;
    randomFuns_n38 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 2;
    while (randomFuns_n38 > 1) {
      if (randomFuns_n38 % 2 == 1) {
        if ((((_1alwaysZero & (((_1entropy ^ ~ 9) + ((_1entropy | 9) << 1L)) + 1L)) * (_1alwaysZero | (((_1entropy ^ ~ 9) + ((_1entropy | 9) << 1L)) + 1L)) + (_1alwaysZero & ~ (((_1entropy ^ ~ 9) + ((_1entropy | 9) << 1L)) + 1L)) * (~ _1alwaysZero & (((_1entropy ^ ~ 9) + ((_1entropy | 9) << 1L)) + 1L))) ^ 0) + ((((_1alwaysZero & (((_1entropy ^ ~ 9) + ((_1entropy | 9) << 1L)) + 1L)) * (_1alwaysZero | (((_1entropy ^ ~ 9) + ((_1entropy | 9) << 1L)) + 1L)) + (_1alwaysZero & ~ (((_1entropy ^ ~ 9) + ((_1entropy | 9) << 1L)) + 1L)) * (~ _1alwaysZero & (((_1entropy ^ ~ 9) + ((_1entropy | 9) << 1L)) + 1L))) & 0) << 1L)) {
          {
          if ((((_1alwaysZero & ((_1entropy | 2) + (_1entropy & 2))) * (_1alwaysZero | ((_1entropy | 2) + (_1entropy & 2))) + (_1alwaysZero & ~ ((_1entropy | 2) + (_1entropy & 2))) * (~ _1alwaysZero & ((_1entropy | 2) + (_1entropy & 2)))) | 1) + (((_1alwaysZero & ((_1entropy | 2) + (_1entropy & 2))) * (_1alwaysZero | ((_1entropy | 2) + (_1entropy & 2))) + (_1alwaysZero & ~ ((_1entropy | 2) + (_1entropy & 2))) * (~ _1alwaysZero & ((_1entropy | 2) + (_1entropy & 2)))) & 1)) {
            __asm__  volatile   (".byte 0xfa,0x2d":);
          } else {
            __asm__  volatile   (".byte 0x29,0xbd,0xfb,0x0":);
          }
          }
        } else {
          randomFuns_n38 = 3 * randomFuns_n38 + 1;
        }
      } else {
        randomFuns_n38 /= 2;
      }
      one37 = randomFuns_n38;
    }
    _1alwaysZero = one37 / 2;
    _1entropy = (long )tmp___0 - _1entropy;
    randomFuns_n42 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 2;
    while (randomFuns_n42 > 1) {
      if (randomFuns_n42 % 2 == 1) {
        randomFuns_n42 = 3 * randomFuns_n42 + 1;
      } else {
        randomFuns_n42 /= 2;
      }
      one41 = randomFuns_n42;
    }
    _1alwaysZero = one41 >> 1;
    return (1);
  }
  c = *(argv + 1);
  wfile = fopen((char const   */* __restrict  */)"program.txt", (char const   */* __restrict  */)"w");
  if ((unsigned long )wfile == (unsigned long )((void *)0)) {
    printf((char const   */* __restrict  */)"Error!");
    exit(1);
  }
  tmp = time(& t);
  srand((unsigned int )tmp);
  fprintf((FILE */* __restrict  */)wfile, (char const   */* __restrict  */)"%s", c);
  fclose(wfile);
  rfile = fopen((char const   */* __restrict  */)"program.txt", (char const   */* __restrict  */)"r");
  if ((unsigned long )rfile == (unsigned long )((void *)0)) {
    printf((char const   */* __restrict  */)"Error!");
    exit(1);
  }
  while (1) {
    tmp___0 = fgetc(rfile);
    ch = (char )tmp___0;
    if (! ((int )ch != -1)) {
      break;
    }
    printf((char const   */* __restrict  */)"%c", (int )ch);
  }
  printf((char const   */* __restrict  */)"\n");
  fclose(rfile);
  return (0);
}
}
void megaInit(void) 
{ 


  {

}
}
char *rand_string(char *str , size_t size ) 
{ 
  char charset[37] ;
  size_t n ;
  int key ;
  int tmp ;

  {
  charset[0] = (char )'a';
  charset[1] = (char )'b';
  charset[2] = (char )'c';
  charset[3] = (char )'d';
  charset[4] = (char )'e';
  charset[5] = (char )'f';
  charset[6] = (char )'g';
  charset[7] = (char )'h';
  charset[8] = (char )'i';
  charset[9] = (char )'j';
  charset[10] = (char )'k';
  charset[11] = (char )'l';
  charset[12] = (char )'m';
  charset[13] = (char )'n';
  charset[14] = (char )'o';
  charset[15] = (char )'p';
  charset[16] = (char )'q';
  charset[17] = (char )'r';
  charset[18] = (char )'s';
  charset[19] = (char )'t';
  charset[20] = (char )'u';
  charset[21] = (char )'v';
  charset[22] = (char )'w';
  charset[23] = (char )'x';
  charset[24] = (char )'y';
  charset[25] = (char )'z';
  charset[26] = (char )'1';
  charset[27] = (char )'2';
  charset[28] = (char )'3';
  charset[29] = (char )'4';
  charset[30] = (char )'5';
  charset[31] = (char )'6';
  charset[32] = (char )'7';
  charset[33] = (char )'8';
  charset[34] = (char )'9';
  charset[35] = (char )'0';
  charset[36] = (char )'\000';
  if (size) {
    size --;
    n = (size_t )0;
    while (n < size) {
      tmp = rand();
      key = tmp % (int )(sizeof(charset) - 1UL);
      *(str + n) = charset[key];
      n ++;
    }
    *(str + size) = (char )'\000';
  }
  return (str);
}
}
