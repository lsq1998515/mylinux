#include<stdio.h>
#include<unistd.h>
int main()
{
  int i=0;
  char bar[100]="\0";
  const char *lable="|/-\\";
  for(i=0;i<=100;i++)
  {
    bar[i]='#';
    printf("\033[1m\033[45;33m[%-100s][%d%%][%c]\033[0m\r",bar,i,lable[i%4]);
    fflush(stdout);
    usleep(100000);
  }
  printf("\n");
  return 0;
}
