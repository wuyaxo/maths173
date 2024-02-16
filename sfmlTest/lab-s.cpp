#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    sf::Font font;
    if (!font.loadFromFile("DroidSans.ttf")) {
        std::cout << "Can not load font file.\n";
        return 1;
    }
    sf::Text text("Hello World!", font, 40);
    text.setPosition(40, 70);
    sf::RenderWindow window(sf::VideoMode(300, 200), "Hello World!");
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event));
        {
            if (event.type == sf::Event::Closed) window.close();
        }
        window.clear();
        window.draw(text);
        window.display();
    }
    return 0;
}