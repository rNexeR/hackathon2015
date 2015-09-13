#ifndef OBSTACULOS_H
#define OBSTACULOS_H
#include <iostream>
#include <allegro5/allegro.h>
#include "allegro5/allegro_image.h"

using namespace std;

class Obstaculos// : public Entidad
{
    public:
        ALLEGRO_DISPLAY *display = NULL;
        ALLEGRO_EVENT_QUEUE *event_queue = NULL;

        ALLEGRO_EVENT ev;
        ALLEGRO_TIMEOUT timeout;
        ALLEGRO_TIMER *timer;
        Obstaculos();
        void effect();
        virtual ~Obstaculos();
    protected:
    private:
};

#endif // OBSTACULOS_H
