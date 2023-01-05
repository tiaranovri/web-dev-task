#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include<iostream>

#define info(p) (p)->info
#define next(p) (p)->next
#define head(Q) ((Q).head)
#define tail(Q) ((Q).tail)
#define nil NULL

using namespace std;

struct infotype{
    string artis;
    string judul;
};
typedef struct element *adr;

struct element{
    infotype info;
    adr next;
};

struct playlistlagu{
    adr head;
    adr tail;
};

void createplaylist_1301213081(playlistlagu &Q);
void createElement_1301213081(infotype lagubaru, adr &pLagu);
void enqueue_1301213081(playlistlagu &Q, adr pLagu);
void dequeue_130121081(playlistlagu &Q, adr &pLagu);
void showSemuaLagu_1301213081(playlistlagu Q);

#endif // QUEUE_H_INCLUDED
