#include "include/animation.hpp"

Animation::Animation() : frame_time(100) {}

Animation::Animation(std::vector<sf::Texture> textures, int frame_time = 100) :
    textures(textures), frame_time(frame_time)
{}

void Animation::update(int delta_millis) {
    if (elapsed += delta_millis > frame_time) {
        i++;
        elapsed = delta_millis;
    }
}

sf::Texture& get_current_tex() {
    return &textures.at(i);
}
