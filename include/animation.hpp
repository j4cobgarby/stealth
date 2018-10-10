#ifndef ANIMATION_HPP_INCLUDED
#define ANIMATION_HPP_INCLUDED

#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>

class Animation {
private: 
    std::vector<sf::Texture> textures;
    int elapsed; // Time since last frame

    int frame_time; // Time to stay on each frame
    size_t i; // current frame index
public:
    Animation();
    Animation(std::vector<sf::Texture> textures, int frame_time = 100);

    void update(int delta_millis);
    sf::Texture& get_current_tex();
};

#endif
