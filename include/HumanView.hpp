#ifndef HUMANVIEW_HPP_INCLUDED
#define HUMANVIEW_HPP_INCLUDED

class HumanView {

private:

public:
  HumanView();
  void moveUp(Logic &thisLogic);
  void moveDown(Logic &thisLogic);
  void update(sf::RenderWindow &ThisApp, Logic thisLogic);

};


#endif
