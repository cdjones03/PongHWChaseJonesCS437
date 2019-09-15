#include <SFML/Graphics.hpp>
#include <Logic.hpp>
#include <AIView.hpp>

const int padSpeed = 5;

AIView::AIView() {

}

void AIView::moveUp(Logic &thisLogic){
  thisLogic.moveLeftPaddle(0, -padSpeed);
}

void AIView::moveDown(Logic &thisLogic){
  thisLogic.moveLeftPaddle(0, padSpeed);
}

void AIView::update(sf::RenderWindow &ThisApp, Logic &thisLogic){
  ThisApp.draw(thisLogic.getLeftPaddle().getRect());
  if(thisLogic.getBallPosition().y < thisLogic.getLeftPaddlePosition().y){
    moveUp(thisLogic);
  }
  else if(thisLogic.getBallPosition().y > thisLogic.getLeftPaddlePosition().y + (int)(thisLogic.getLeftPaddle().getHeight())){
    moveDown(thisLogic);
  }

}
