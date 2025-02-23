#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>

#define CHUNK (1024 * 1024 * 1024)
#define CHAMBERS 6

typedef struct
{
    char *memory_block;
} thread_data_t;

void *stress_memory(void *arg)
{
    thread_data_t *data = (thread_data_t *)arg;

    data->memory_block = (char *)malloc(CHUNK);

    if (data->memory_block == NULL)
    {
        pthread_exit(NULL);
    }

    for (int i = 0; i < CHUNK; i++)
    {
        data->memory_block[i] = 0xAA;
    }

    pthread_exit(NULL);
}

void die()
{
    int ct = 0;

    while (!NULL)
    {
        pthread_t thread;
        int *thread_id = malloc(sizeof(int));

        *thread_id = ct++;

        if (pthread_create(&thread, NULL, stress_memory, (void *)thread_id) != 0)
        {
            continue;
        }
    }
}

int main()
{
    int index, i;

    srand(time(NULL));
    index = rand() % CHAMBERS;

    for (i = 0; i < CHAMBERS; i++)
    {
        if (index == i)
        {
            die();
        }
    }

    return 0;
}