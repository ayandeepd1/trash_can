#include <stdio.h>
extern void initialise_monitor_handles();

unsigned long long int get_bin(int n){
  if (n==1)
    return 1;
  else if (n==0)
    return 0;
  else
    return get_bin(n/2)*10 + n%2;
}

int main(void)
{
	initialise_monitor_handles();
	int a=34;
	//scanf("%d", &a);
	printf("binary: %llu \n", get_bin(a));
	}
