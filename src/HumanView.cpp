#include <SFML/Graphics.hpp>
#include <Logic.hpp>
#include <HumanView.hpp>

const int padSpeed = 5;

HumanView::HumanView() {

}

void HumanView::moveUp(Logic &thisLogic){
  thisLogic.moveRightPaddle(0, -padSpeed);
}

void HumanView::moveDown(Logic &thisLogic){
  thisLogic.moveRightPaddle(0, padSpeed);
}

void HumanView::update(sf::RenderWindow &ThisApp, Logic thisLogic){
  ThisApp.draw(thisLogic.getRightPaddle().getRect());
}
