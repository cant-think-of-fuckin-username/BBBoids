#ifndef WALL_H
#define WALL_H

#include "GameObject.h"

// Wall objects
class Wall : public GameObject
{
public:
    Wall( const Vec2& position, float scale );

    virtual Type GetType() const { return TWall; }

    virtual void PreUpdate() {}
    virtual void PostUpdate() {}
    virtual void Draw();
    virtual void Collision( GameObject* other, const Vec2& point, const Vec2& normal );
};

#endif