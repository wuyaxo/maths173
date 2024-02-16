#include <SFML/Graphics.hpp>
#include "MovingCircle.h"
#include <cmath>

MovingCircle::MovingCircle(float r, float s,
                           const sf::Vector2f &d)
        : speed(s) {
    setRadius(r);
    float length = sqrt(pow(d.x, 2.0) + pow(d.y, 2.0));
    if (length > 0) { direction = d / length; }
    else direction = d;
}

void MovingCircle::setDirection(const sf::Vector2f &d) {
    float length = sqrt(pow(d.x, 2.0) + pow(d.y, 2.0));
    if (length > 0) { direction = d / length; }
    else direction = d;
}


void MovingCircle::setSpeed(float s) {
    speed = s;
}

float MovingCircle::getSpeed() const {
    return speed;
}

sf::Vector2f MovingCircle::getDirection() const {
    return direction;
}

