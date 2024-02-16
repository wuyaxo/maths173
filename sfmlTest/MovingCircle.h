#pragma Once

#include <SFML/Graphics.hpp>

class MovingCircle : public sf::CircleShape {
public:
    MovingCircle(float radius,
                 float speed = 0.0,
                 const sf::Vector2f &direction = {0.0, 0.0});

    void setSpeed(float);

    float getSpeed() const;

    void setDirection(const sf::Vector2f &);

    sf::Vector2f getDirection() const;

protected:
    float speed;
    sf::Vector2f direction;
};
