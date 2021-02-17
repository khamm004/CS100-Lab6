#include "../header/rectangle.hpp"

void Rectangle::Rectangle(int w, int h){
        this->width=-1;
        this->height=-1;
}

void Rectangle::set_width(int w) {
    this->width = w;
}

void Rectangle::set_height(int h) {
    this->height = h;
}

int Rectangle::get_width() {
    return this->width;
}

int Rectangle::get_height() {
    return this->height;
}

int Rectangle::area() {
    return -1;
}

int Rectangle::perimeter() {
    return -1;
}
