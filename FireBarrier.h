#ifndef FIREBARRIER_H
#define FIREBARRIER_H
#include "obstaculos.h"


class FireBarrier : public Obstaculos
{
    public:
        FireBarrier();
        ALLEGRO_BITMAP* firebarrier;
        virtual ~FireBarrier();
    protected:
    private:
};

#endif // FIREBARRIER_H
