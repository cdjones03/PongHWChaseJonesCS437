#include <SFML/Graphics.hpp>

int main(int argc, char** argv)
{
  // create main window; Style::Close disables resizing
  sf::RenderWindow App(sf::VideoMode(800,600,32), "Pong - CSCI437", sf::Style::Close);

  // start main loop
  while(App.isOpen())
  {
    // process events
    sf::Event Event;
    while(App.pollEvent(Event))
    {
      // Exit
      if(Event.type == sf::Event::Closed)
        App.close();
    }

    // clear screen and fill with blue
    App.clear(sf::Color::Red);

    // display
    App.display();
  }

  // Done.
  return 0;
}
