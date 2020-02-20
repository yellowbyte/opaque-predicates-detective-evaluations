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
  int i ;
  int j ;
  int s ;
  int temp ;
  int a[10] ;
  int _BARRIER_0 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;

  if (argc < 11) {
    return (1);
  }
  s = 10;
  i = 1;
  while (i < argc) {
    a[i - 1] = (int )*(*(argv + i) + 0);
    i ++;
  }
  i = 1;
  while (1) {
    if ((((_1alwaysZero & (((_1entropy & ~ 7) + (_1entropy & ~ 7)) - (_1entropy ^ 7))) * (_1alwaysZero | (((_1entropy & ~ 7) + (_1entropy & ~ 7)) - (_1entropy ^ 7))) + (_1alwaysZero & ~ (((_1entropy & ~ 7) + (_1entropy & ~ 7)) - (_1entropy ^ 7))) * (~ _1alwaysZero & (((_1entropy & ~ 7) + (_1entropy & ~ 7)) - (_1entropy ^ 7)))) - ~ 0) - 1L) {
      __asm__  volatile   (".byte 0x0,0x0":);
    } else
    if (! (i < s)) {
      break;
    }
    temp = a[i];
    j = i - 1;
    while (1) {
      if ((((_1alwaysZero & (((_1entropy - 2) - ((_1entropy | ~ 2) + (_1entropy | ~ 2))) - 2L)) * (_1alwaysZero | (((_1entropy - 2) - ((_1entropy | ~ 2) + (_1entropy | ~ 2))) - 2L)) + (_1alwaysZero & ~ (((_1entropy - 2) - ((_1entropy | ~ 2) + (_1entropy | ~ 2))) - 2L)) * (~ _1alwaysZero & (((_1entropy - 2) - ((_1entropy | ~ 2) + (_1entropy | ~ 2))) - 2L))) ^ 0) + ((((_1alwaysZero & (((_1entropy - 2) - ((_1entropy | ~ 2) + (_1entropy | ~ 2))) - 2L)) * (_1alwaysZero | (((_1entropy - 2) - ((_1entropy | ~ 2) + (_1entropy | ~ 2))) - 2L)) + (_1alwaysZero & ~ (((_1entropy - 2) - ((_1entropy | ~ 2) + (_1entropy | ~ 2))) - 2L)) * (~ _1alwaysZero & (((_1entropy - 2) - ((_1entropy | ~ 2) + (_1entropy | ~ 2))) - 2L))) & 0) + (((_1alwaysZero & (((_1entropy - 2) - ((_1entropy | ~ 2) + (_1entropy | ~ 2))) - 2L)) * (_1alwaysZero | (((_1entropy - 2) - ((_1entropy | ~ 2) + (_1entropy | ~ 2))) - 2L)) + (_1alwaysZero & ~ (((_1entropy - 2) - ((_1entropy | ~ 2) + (_1entropy | ~ 2))) - 2L)) * (~ _1alwaysZero & (((_1entropy - 2) - ((_1entropy | ~ 2) + (_1entropy | ~ 2))) - 2L))) & 0))) {
        __asm__  volatile   (".byte 0x0,0x0,0x0,0x0":);
      } else
      if (temp < a[j]) {
        if (! (j >= 0)) {
          break;
        }
      } else {
        break;
      }
      a[j + 1] = a[j];
      j --;
    }
    a[j + 1] = temp;
    i ++;
  }
  printf((char const   */* __restrict  */)"After sorting: ");
  i = 0;
  {
  if (((((_1alwaysZero & ((_1entropy ^ 9) + ((_1entropy & 9) << 1L))) * (_1alwaysZero | ((_1entropy ^ 9) + ((_1entropy & 9) << 1L))) + (_1alwaysZero & ~ ((_1entropy ^ 9) + ((_1entropy & 9) << 1L))) * (~ _1alwaysZero & ((_1entropy ^ 9) + ((_1entropy & 9) << 1L)))) | 0) + (((_1alwaysZero & ((_1entropy ^ 9) + ((_1entropy & 9) << 1L))) * (_1alwaysZero | ((_1entropy ^ 9) + ((_1entropy & 9) << 1L))) + (_1alwaysZero & ~ ((_1entropy ^ 9) + ((_1entropy & 9) << 1L))) * (~ _1alwaysZero & ((_1entropy ^ 9) + ((_1entropy & 9) << 1L)))) | 0)) - (((_1alwaysZero & ((_1entropy ^ 9) + ((_1entropy & 9) << 1L))) * (_1alwaysZero | ((_1entropy ^ 9) + ((_1entropy & 9) << 1L))) + (_1alwaysZero & ~ ((_1entropy ^ 9) + ((_1entropy & 9) << 1L))) * (~ _1alwaysZero & ((_1entropy ^ 9) + ((_1entropy & 9) << 1L)))) ^ 0)) {
    __asm__  volatile   (".byte 0xbe,0x9a,0xed,0x53,0xae,0xc2":);
  } else {
    while (i < s) {
      printf((char const   */* __restrict  */)" %d", a[i]);
      i ++;
    }
  }
  }
  return (0);
}
}
void megaInit(void) 
{ 


  {

}
}
