#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

// Function executed by the thread
void *thread_function(void *arg) {
     int thread_id = *(int *)arg;
     printf("Thread %d: Hello from thread!\n", thread_id);
     pthread_exit(NULL);
}

int main() {
	pthread_t thread1, thread2;
        int id1 = 1, id2 = 2;
        int ret;

        // Create the first thread
        ret = pthread_create(&thread1, NULL, thread_function, &id1);
        if (ret != 0) {
		perror("Error creating thread 1");
                exit(EXIT_FAILURE);
        }

        // Create the second thread
        ret = pthread_create(&thread2, NULL, thread_function, &id2);
        if (ret != 0) {
	        perror("Error creating thread 2");
                exit(EXIT_FAILURE);
        }

        // Wait for threads to finish
        pthread_join(thread1, NULL);
        pthread_join(thread2, NULL);
 
 	printf("Main thread: Both threads finished.\n");
        return 0;
}
