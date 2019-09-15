#include <SFML/Graphics.hpp>
#include <iostream>
#include <paddle.hpp>
#include <Logic.hpp>

using namespace std;

  Logic::Logic() {

  }

  void Logic::init() {

  leftPaddle.setSize(20, 100);
  leftPaddle.setPosition(100, 300);
  leftPaddle.setColor(sf::Color::White);

  rightPaddle.setSize(20, 100);
  rightPaddle.setPosition(700, 300);
  rightPaddle.setColor(sf::Color::White);

  ball.setRadius(10);
  ball.setPosition(500, 100);

  ballSpeedX = 3;
  ballSpeedY = 3;
  }

  void Logic::update(){
    ball.move(getBallSpeedX(), getBallSpeedY());
    if(checkCollision(rightPaddle) || checkCollision(leftPaddle)) {
      ballSpeedX *= -1;
    }
    /*
    dx = (ball.getPosition().x + 2*ball.getRadius()) - paddle.getPosition().x;
    dy = (ball.getPosition().y + 2*ball.getRadius()) - (paddle.getPosition().y + paddle.getHeight());
    //cout << "y " << circle.getPosition().y << " dy " << dy << " height " << pad.getHeight() << endl;
    //cout << "x " << circle.getPosition().x << " dx " << dx << endl;
    //cout << "pad x" << pad.getPosition().x << " pad y " << pad.getPosition().y << endl;
    if ((dx > 0) && (dx < 20) && (dy > (rightPaddle.getHeight()*-1)) && (dy < 0)){
      cout << "collide" << endl;
      ballSpeedX *= -1;
      */
  }

  void Logic::reset(){
    ball.setPosition(500,100);
  }

  sf::Vector2f Logic::getBallPosition() {
    return (ball.getPosition());
  }

  int Logic::getBallSpeedX() {
    return ballSpeedX;
  }

  void Logic::reflectBallX() {
    ballSpeedX *= -1;
  }

  int Logic::getBallSpeedY() {
    return ballSpeedY;
  }

  void Logic::reflectBallY() {
    ballSpeedY *= -1;
  }

  int Logic::getBallRadius() {
    return ball.getRadius();
  }

  sf::CircleShape Logic::getBall(){
    return ball;
  }

  Paddle Logic::getLeftPaddle() {
    return leftPaddle;
  }

  sf::Vector2f Logic::getLeftPaddlePosition() {
    return leftPaddle.getPosition();
  }

  void Logic::moveLeftPaddle(int x, int y) {
    leftPaddle.move(x, y);
  }

  Paddle Logic::getRightPaddle(){
    return rightPaddle;
  }

  sf::Vector2f Logic::getRightPaddlePosition() {
    return rightPaddle.getPosition();
  }

  void Logic::moveRightPaddle(int x, int y) {
    rightPaddle.move(x, y);
  }

  bool Logic::checkCollision(Paddle thisPaddle) {
    dx = (ball.getPosition().x + 2*ball.getRadius()) - thisPaddle.getPosition().x;
    dy = (ball.getPosition().y + 2*ball.getRadius()) - (thisPaddle.getPosition().y + thisPaddle.getHeight());
    //cout << "y " << circle.getPosition().y << " dy " << dy << " height " << pad.getHeight() << endl;
    //cout << "x " << circle.getPosition().x << " dx " << dx << endl;
    //cout << "pad x" << pad.getPosition().x << " pad y " << pad.getPosition().y << endl;
    if ((dx > 0) && (dx < 20) && (dy > (thisPaddle.getHeight()*-1)) && (dy < 0)){
      cout << "collide" << endl;
      return true;
    }
    return false;
  };
