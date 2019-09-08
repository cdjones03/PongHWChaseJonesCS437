#ifndef PADDLE_HPP_INCLUDED
#define PADDLE_HPP_INCLUDED

#include <SFML/Graphics.hpp>

class Paddle {

private:
  sf::RectangleShape rectangle;
  //sf::RectangleShape* point;
  float width;
  float height;
  float x;
  float y;

public:
  Paddle();
  Paddle(float width, float height);
  sf::RectangleShape getRect();
  void setPosition(float x, float y);
  sf::Vector2f getPosition();
  void setSize(int x, int y);
  sf::Vector2f getSize();
  void setColor(sf::Color color);
  void move(float x, float y);
  float getWidth();
  float getHeight();

};

#endif
