#ifndef LOGIC_HPP_INCLUDED
#define LOGIC_HPP_INCLUDED

#include <paddle.hpp>

class Logic {

private:

  Paddle leftPaddle;
  Paddle rightPaddle;
  sf::CircleShape ball;
  int diffX;
  int diffY;
  int ballSpeedX;
  int ballSpeedY;
  int dx;
  int dy;

public:

  Logic();
  void init();
  void update();
  void reset();

  sf::Vector2f getBallPosition();
  int getBallSpeedX();
  void reflectBallX();
  int getBallSpeedY();
  void reflectBallY();
  int getBallRadius();
  sf::CircleShape getBall();

  Paddle getLeftPaddle();
  sf::Vector2f getLeftPaddlePosition();
  void moveLeftPaddle(int x, int y);

  Paddle getRightPaddle();
  sf::Vector2f getRightPaddlePosition();
  void moveRightPaddle(int x, int y);

  bool checkCollision(Paddle thisPaddle);

};

#endif
