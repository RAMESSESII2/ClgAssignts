#include<stdio.h>
#include <iostream>
#include <pthread.h>
#include <semaphore.h>
#include <random>
#include <unistd.h>

using namespace std;

#define BUFFER_SIZE 10

int buffer[BUFFER_SIZE];
int index=0;


sem_t full,empty;
//a binary semaphore with an ownership restriction: it can be unlocked (the post operation) only by whoever locked it (the wait operation).
pthread_mutex_t mutex;

void* produce(void* arg){
	while(1){
		sleep(1);
		//wait/sleep when there are no empty slots
		sem_wait(&empty);
		//When the function call ends, *mutex will be in a locked state.
		pthread_mutex_lock(&mutex);
		int item = rand()%100;
		buffer[index++] = item;
		cout<<"Produced "<<item<<endl;
		//This unlocks *mutex.
		pthread_mutex_unlock(&mutex);
		sem_post(&full);// Signal/wake to consumer that buffer has some   data and they can consume now.
	}
}

void* consume(void* arg){
	while(1){
		sleep(1);
		sem_wait(&full);// wait/sleep when there are no full slots
		pthread_mutex_lock(&mutex);
		int item = buffer[--index];
		cout<<"Consumed "<<item<<endl;
		pthread_mutex_unlock(&mutex);
		sem_post(&empty);// Signal/wake the producer that buffer slots are emptied and they can produce more.
	}
}

int main(){
	pthread_t producer,consumer;
	//initialising the semaphores to some initial values
	sem_init(&empty,0,BUFFER_SIZE);
	sem_init(&full,0,0);
	//initialise the mutex
	pthread_mutex_init(&mutex,NULL);
	//creating producer and consumer threats
	pthread_create(&producer,NULL,produce,NULL);
	pthread_create(&consumer,NULL,consume,NULL);
	pthread_exit(NULL);
}
//Execute it using
//g++ -std=c++14 producerConsumer.cpp -lpthread
