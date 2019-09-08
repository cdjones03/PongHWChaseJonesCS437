#include <SFML/Graphics.hpp>
#include <iostream>
#include <paddle.hpp>

//getPosition() - returns top left corner

using namespace std;

const int FPS = 60;
const float frame = 1000/FPS;
const int padSpeed = 5;

void init(Paddle &pad, sf::CircleShape &circle) {
pad.setSize(20, 100);
pad.setPosition(700, 300);
pad.setColor(sf::Color::White);
circle.setRadius(10);
circle.setPosition(500, 100);
}

void update(int &time, Paddle &pad, sf::CircleShape &circle, int &x, int &y, int &dx, int &dy) {
  circle.move(x,y);
  dx = (circle.getPosition().x + 2*circle.getRadius()) - pad.getPosition().x;
  dy = (circle.getPosition().y + 2*circle.getRadius()) - (pad.getPosition().y + pad.getHeight());
  cout << "y " << circle.getPosition().y << " dy " << dy << " height " << pad.getHeight() << endl;
  cout << "x " << circle.getPosition().x << " dx " << dx << endl;
  cout << "pad x" << pad.getPosition().x << " pad y " << pad.getPosition().y << endl;
  if ((dx > 0) && (dx < 20) && (dy > (pad.getHeight()*-1)) && (dy < 0)){
    cout << "collide" << endl;
    x *= -1;
  }

}

int main(int argc, char** argv)
{
  // create main window; Style::Close disables resizing
  sf::RenderWindow App(sf::VideoMode(800,600,32), "Pong - CSCI437", sf::Style::Close);
  App.setFramerateLimit(60);
  //App.setKeyRepeatEnabled(false);

  Paddle paddle;
  sf::CircleShape ball;
  int deltaMs = 0;
  int diffX;
  int diffY;
  int ballSpeedX = 1;
  int ballSpeedY = 1;
  init(paddle, ball);

  sf::Clock clock;

  // start main loop
  while(App.isOpen())
  {
    deltaMs = clock.getElapsedTime().asMilliseconds();

    // process events
    sf::Event Event;
    while(App.pollEvent(Event))
    {
      // Exit
      if(Event.type == sf::Event::Closed){
        App.close();
      }


    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
      paddle.move(0, -padSpeed);
   }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
      paddle.move(0, padSpeed);}
   }
   
    // clear screen and fill with blue
    App.clear(sf::Color::Black);
    App.draw(paddle.getRect());
    App.draw(ball);

    // display
    App.display();

    update(deltaMs, paddle, ball, ballSpeedX, ballSpeedY, diffX, diffY);

    if(ball.getPosition().x > 800 || ball.getPosition().x < 0 ||
     ball.getPosition().y > 600 || ball.getPosition().y < 0){
      App.close();
    }
  }

  //Shutdown() --

  // Done.
  return 0;
}
