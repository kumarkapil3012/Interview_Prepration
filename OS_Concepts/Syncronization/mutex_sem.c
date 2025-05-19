#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

// Mutex for protecting the critical section
pthread_mutex_t mutex;

// Semaphore for controlling access to a limited resource
sem_t semaphore;

// Shared resource
int shared_resource = 0;

// Function to be executed by threads that use the mutex
void* mutex_thread(void* arg) {
     int thread_id = *(int*)arg;
         
     pthread_mutex_lock(&mutex); // Acquire the mutex lock
     printf("Thread %d: Entered critical section (mutex)\n", thread_id);
     shared_resource++;
     printf("Thread %d: Shared resource = %d\n", thread_id, shared_resource);
     sleep(1); // Simulate some work
     printf("Thread %d: Exiting critical section (mutex)\n", thread_id);
     pthread_mutex_unlock(&mutex); // Release the mutex lock
                                         
     return NULL;
}

// Function to be executed by threads that use the semaphore
void* semaphore_thread(void* arg) {
	int thread_id = *(int*)arg;
                                                     
        sem_wait(&semaphore); // Acquire a semaphore permit (wait if none available)
        printf("Thread %d: Acquired semaphore\n", thread_id);
        sleep(2); // Simulate using the limited resource
        printf("Thread %d: Releasing semaphore\n", thread_id);
        sem_post(&semaphore); // Release a semaphore permit (increment count)
                                                                    
        return NULL;
}

int main() {
	pthread_t threads[5];
        int thread_ids[5];

        // Initialize mutex
        pthread_mutex_init(&mutex, NULL);

	// Initialize semaphore with a count of 2 (allowing 2 concurrent accesses)
        sem_init(&semaphore, 0, 1);

        // Create threads
        for (int i = 0; i < 5; i++) {
	        thread_ids[i] = i + 1;
                if (i < 3) {
	                pthread_create(&threads[i], NULL, mutex_thread, &thread_ids[i]);
                } else {
                        pthread_create(&threads[i], NULL, semaphore_thread, &thread_ids[i]);
                }
	}
        // Wait for threads to complete
        for (int i = 0; i < 5; i++) {
		pthread_join(threads[i], NULL);
        }

        // Destroy mutex and semaphore
        pthread_mutex_destroy(&mutex);
        sem_destroy(&semaphore);
                                                                                                                                                                                    return 0;
}
