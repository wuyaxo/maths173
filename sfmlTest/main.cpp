#include <SFML/Graphics.hpp>
#include "MovingCircle.h"
#include <iostream>

int main() {
    int x = 640, y = 480;
    sf::RenderWindow window(sf::VideoMode(x, y), "Bouncing Ball");
    float speed = 200.0f;
    float radius = 30.0f;
    MovingCircle circle(radius, speed, {2.0f, 5.0f});
    sf::Clock clock;
    sf::Time prevTime, nextTime;

    prevTime = clock.getElapsedTime();
    auto direction = circle.getDirection();

    while (window.isOpen()) {
        sf::Event event;

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        // update moving circle
        nextTime = clock.getElapsedTime();
        auto diffTime = nextTime - prevTime;
        auto position = circle.getPosition();
        if (position.x > x / 1.0f - 2 * radius and direction.x > 0 || position.x <= 0) {
//            std::cout << position.x << "," << position.y << " x " << direction.x << "," << direction.y << std::endl;
            direction.x = -direction.x;
        }
        if (position.y > y / 1.0f - 2 * radius || position.y <= 0) {
//            std::cout << position.x << "," << position.y << " y " << direction.x << "," << direction.y << std::endl;
            direction.y = -direction.y;
        }
        auto moveVector =
                direction * (speed * diffTime.asSeconds());

        circle.move(moveVector);
        prevTime = nextTime;
        window.clear();
        window.draw(circle);
        window.display();
    }
}