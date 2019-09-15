#include <SFML/Graphics.hpp>
#include <iostream>
#include <paddle.hpp>
#include <Logic.hpp>
#include <AIView.hpp>
#include <HumanView.hpp>

using namespace std;

const int FPS = 60;
const float frame = 1000/FPS;

void scored(int &scoreNum, sf::Text &scoreText, Logic thisLogic){
  scoreNum+=1;
  scoreText.setString(std::to_string(scoreNum));
  thisLogic.reflectBallX();
}

void reset(sf::CircleShape &circle){
  circle.setPosition(500,100);
}

int main(int argc, char** argv)
{
  // create main window; Style::Close disables resizing
  sf::RenderWindow App(sf::VideoMode(800,600,32), "Pong - CSCI437");//, sf::Style::Close);
  App.setFramerateLimit(60);
  //App.setKeyRepeatEnabled(false);


  int leftScore;
  int rightScore;
  sf::Text leftScoreText;
  sf::Text rightScoreText;
  sf::Font font;

  int deltaMs = 0;

  Logic logic;
  logic.init();

  AIView aiview;
  HumanView humanview;

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
      humanview.moveUp(logic);
   }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
      humanview.moveDown(logic);
    }
   }

   App.clear(sf::Color::Black);
   logic.update();
   aiview.update(App, logic);
   humanview.update(App, logic);

    // clear screen and fill with blue

    App.draw(logic.getBall());
    App.draw(leftScoreText);
    App.draw(rightScoreText);
    //App.draw(lines);

    // display
    App.display();

    if(logic.getBallPosition().x > 800){
      scored(leftScore, leftScoreText, logic);
      logic.reset();
    }
    else if(logic.getBallPosition().x < 0){
      cout << "hello" << endl;
      scored(rightScore, rightScoreText, logic);
      logic.reset();
    }
    if((logic.getBallPosition().y + logic.getBallRadius()*2 > 600) || logic.getBallPosition().y < 0){
      logic.reflectBallY();
    }
  }

  //Shutdown() --

  // Done.
  return 0;
}
