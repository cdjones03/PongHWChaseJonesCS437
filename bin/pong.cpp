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
  //cout << "y " << circle.getPosition().y << " dy " << dy << " height " << pad.getHeight() << endl;
  //cout << "x " << circle.getPosition().x << " dx " << dx << endl;
  //cout << "pad x" << pad.getPosition().x << " pad y " << pad.getPosition().y << endl;
  if ((dx > 0) && (dx < 20) && (dy > (pad.getHeight()*-1)) && (dy < 0)){
    cout << "collide" << endl;
    x *= -1;
  }
}

void scored(int scoreNum, sf::Text scoreText){
  scoreNum+=1;
  scoreText.setString(std::to_string(scoreNum));
}

void reset(sf::CircleShape ball){
  ball.setPosition(500,100);
}

int main(int argc, char** argv)
{
  // create main window; Style::Close disables resizing
  sf::RenderWindow App(sf::VideoMode(800,600,32), "Pong - CSCI437");//, sf::Style::Close);
  App.setFramerateLimit(60);
  //App.setKeyRepeatEnabled(false);

  Paddle paddle;
  sf::CircleShape ball;
  int deltaMs = 0;
  int diffX;
  int diffY;
  int ballSpeedX = 2;
  int ballSpeedY = 2;
  init(paddle, ball);
  int leftScore;
  int rightScore;
  sf::Text leftScoreText;
  sf::Text rightScoreText;
  sf::Font font;

  //font.loadFromFile("~/Pong/Arial.ttf");
  if(!font.loadFromFile("../Arial.ttf")){
    App.close();
  }
  leftScoreText.setFont(font);
  leftScoreText.setString(std::to_string(leftScore));
  leftScoreText.setCharacterSize(50);
  leftScoreText.setPosition(300,20);
  leftScoreText.setFillColor(sf::Color::White);
  rightScoreText.setFont(font);
  rightScoreText.setString("0");
  rightScoreText.setCharacterSize(50);
  rightScoreText.setPosition(500,20);
  rightScoreText.setFillColor(sf::Color::White);

/*
  sf::VertexArray lines(sf::TriangleStrip, 11);
  lines[0].position = sf::Vector2f(398, 0);
  lines[1].position = sf::Vector2f(402, 0);
  lines[2].position = sf::Vector2f(398, 40);
  lines[3].position = sf::Vector2f(402, 40);
  lines[4].position = sf::Vector2f(402, 40);
  lines[5].position = sf::Vector2f(398, 80);
  lines[6].position = sf::Vector2f(402, 80);
  lines[7].position = sf::Vector2f(402, 80);
  lines[8].position = sf::Vector2f(398, 120);
  lines[9].position = sf::Vector2f(402, 120);
  lines[10].position = sf::Vector2f(398, 160);
  lines[11].position = sf::Vector2f(402, 160);
  lines[4].color = sf::Color::Black;
  lines[5].color = sf::Color::Black;
  lines[6].color = sf::Color::Black;
*/



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
    App.draw(leftScoreText);
    App.draw(rightScoreText);
    //App.draw(lines);

    // display
    App.display();

    update(deltaMs, paddle, ball, ballSpeedX, ballSpeedY, diffX, diffY);

    if(ball.getPosition().x > 800){
      scored(leftScore, leftScoreText);
      reset(ball);
    }
    else if(ball.getPosition().x < 0){
      cout << "hello" << endl;
      scored(rightScore, rightScoreText);
      reset(ball);
    }
    if(ball.getPosition().y > 600 || ball.getPosition().y < 0){
      ballSpeedY *= -1;
    }
  }

  //Shutdown() --

  // Done.
  return 0;
}
