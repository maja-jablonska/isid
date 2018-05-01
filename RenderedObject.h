#ifndef RENDEREDOBJECT_H
#define RENDEREDOBJECT_H

#include <SFML/Graphics.hpp>

// a rendered object is a game object that has its sprite

class RenderedObject {
	sf::Sprite* sprite;
public:
	RenderedObject();
	RenderedObject(sf::Sprite* sprite);
	void render(sf::RenderWindow& window);	
};

#endif
