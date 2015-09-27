#ifndef FLOATINGOBS_H
#define FLOATINGOBS_H
#include "obstaculos.h"

class FloatingObs : public Obstaculos
{
    public:
        FloatingObs();
        ALLEGRO_BITMAP *obstacle;
        void act();
        void draw();
        double velo;
        virtual ~FloatingObs();
    protected:
    private:
};

#endif // FLOATINGOBS_H
