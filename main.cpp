
#include "source/StartCalculator.cpp"

int main()
{

<<<<<<< HEAD
    StartCalculator Calc;
    Calc.start();
=======
    sf::Image image;
    image.loadFromFile("Image/arithmetic_operations.png");

    sf::Texture texture;
    texture.loadFromImage(image);

    sf::Sprite sprite;
    sprite.setTexture(texture);
    sprite.setPosition(0, 0);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(sprite);
        window.display();
    }
>>>>>>> 41292ad5c4e477753ed8a4c36272a1892829c8f3

    return 0;
}