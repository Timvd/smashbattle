#pragma once

namespace network {
class CommandGeneratePowerup;
}

class MinePowerUp : public GameplayObject {
public:
	MinePowerUp(SDL_Surface * surface, SDL_Rect * clip, SDL_Rect * position, int ammount, Main &main);
	~MinePowerUp();

	virtual void move(Level * level);
	virtual void process();

	virtual void hit_player(Player * player);
	virtual void hit_npc(NPC * npc);

	virtual void copyTo(network::CommandGeneratePowerup &powerup);
	
	SDL_Surface * surface;
	SDL_Rect * clip;
	int ammount;

	Main &main_;

protected:

	virtual void draw_impl(SDL_Surface * screen, int frames_processed = 0);

};
