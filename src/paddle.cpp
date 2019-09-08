#include <paddle.hpp>
//#include <SFML/Graphics.hpp>

Paddle::Paddle(){

}

Paddle::Paddle(float w, float h){
  width = w;
  height = h;
  rectangle.setSize(sf::Vector2f(w, h));
}

sf::RectangleShape Paddle::getRect()
{
  return rectangle;
}

void Paddle::setPosition(float x, float y){
  rectangle.setPosition(x,y);
}

float Paddle::getWidth(){
  return width;
}

float Paddle::getHeight(){
  return height;
}

sf::Vector2f Paddle::getPosition(){
  return rectangle.getPosition();
}

void Paddle::setSize(int x, int y){
  rectangle.setSize(sf::Vector2f(x,y));
  width = x;
  height = y;
}

sf::Vector2f Paddle::getSize(){
  return rectangle.getSize();
}

void Paddle::setColor(sf::Color color){
  rectangle.setFillColor(color);
}

void Paddle::move(float x, float y){
  rectangle.move(x,y);
}
