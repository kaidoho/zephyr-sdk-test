#include <zephyr.h>
#include <stdio.h>

#define STACKSIZE 1024
#define PRIORITY 7


/*
int main(void)
{
	int * pTest = new int[1000];

	delete pTest;

	return 0;
}
*/

void t1(void)
{
	int * pTest;

	while (1) {
		pTest =		new int[1000];
		delete pTest;
	}

}


void t2(void)
{
	int * pTest;

	int k = sizeof(k_mutex);
	int s = sizeof(k_sem);
	while (1) {
		pTest =		new int[1000];
		delete pTest;
		k_sleep(1);
		printf("%d", k);
		printf("%d", s);
	}

}




K_THREAD_DEFINE(tid1, STACKSIZE, t1, NULL, NULL, NULL,
		PRIORITY, 0, K_NO_WAIT);
K_THREAD_DEFINE(tid2, STACKSIZE, t2, NULL, NULL, NULL,
		PRIORITY-1, 0, K_NO_WAIT);

