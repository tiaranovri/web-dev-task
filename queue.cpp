#include"queue.h"
void createplaylist_1301213081(playlistlagu &Q){
    head(Q) = nil;
}
void createElement_1301213081(infotype lagubaru, adr &pLagu){
    pLagu = new element;
    info(pLagu) = lagubaru;
    next(pLagu) = nil;
}
void enqueue_1301213081(playlistlagu &Q, adr pLagu){
    if (head(Q) == nil){
        head(Q) = pLagu;
        tail(Q) = pLagu;
    }else{
        next(tail(Q)) = pLagu;
        tail(Q) = pLagu;
    }
}
void dequeue_130121081(playlistlagu &Q, adr &pLagu){
    if (head(Q) == nil){
        cout << "queue kosong";
    }else if (head(Q) == tail(Q)){
        pLagu = head(Q);
        head(Q) = nil;
        tail(Q) = nil;
    }else{
        pLagu = head(Q);
        head(Q) = next(pLagu);
        next(pLagu) = nil;
    }
}
void showSemuaLagu_1301213081(playlistlagu Q){
    adr p = head(Q);
    if(head(Q) == nil){
        cout << "queue kosong";
    }else{
        while(p != nil){
            cout << "artis : " << info(p).artis << "judul : " << info(p).judul;
            cout << endl;
            p = next(p);
        }
    }
}
