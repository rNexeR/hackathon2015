#ifndef FIREBARRIER_H
#define FIREBARRIER_H
#include "obstaculos.h"


class FireBarrier : public Obstaculos
{
    public:
        FireBarrier();
        ALLEGRO_BITMAP* firebarrier;
        virtual ~FireBarrier();
//        void act();
//        void draw();
//        double velo;
    protected:
    private:
};

#endif // FIREBARRIER_H
