#include "Game.h"

void main(int argc, char** argv[]) {
	Game game;

	sf::Texture bonesTexture;
	bonesTexture.loadFromFile("Sprites/Bones.png");
	sf::Sprite bone(bonesTexture);
	sf::Vector2u size = bonesTexture.getSize();
	bone.setOrigin(size.x / 2, size.y / 2);
	bone.setScale(sf::Vector2f(1.5f, 1.5f));
	sf::Vector2f increment(0.4f, 0.4f);

	while (!game.GetWindow()->IsDone()) {
		game.HandleInput();
		game.Update();
		game.Render();
	}
}