#ifndef AIVIEW_HPP_INCLUDED
#define AIVIEW_HPP_INCLUDED

class AIView {

private:

public:
  AIView();
  void moveUp(Logic &thisLogic);
  void moveDown(Logic &thisLogic);
  void update(sf::RenderWindow &ThisApp, Logic &thisLogic);

};

#endif
