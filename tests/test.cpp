#include "../header/rectangle.hpp"

#include "gtest/gtest.h"


TEST(Rectangle, ConstructorHeight) {
	Rectangle* r = new Rectangle(6,8);
	EXPECT_EQ(r->get_height(),8);
       }
TEST(Rectangle, ConstructorWidth) {
    	Rectangle* r = new Rectangle(6,8);
   	EXPECT_EQ(r->get_width(),6); 
}

TEST(Rectangle, ConstructorBigNumber) {
    	Rectangle* r = new Rectangle(1000000000,1000000000);
   	EXPECT_EQ(r->get_height(),1000000000); 
	EXPECT_EQ(r->get_width(),1000000000); 
}

TEST(Rectangle, Area) {
    Rectangle* r = new Rectangle(6,8);
    EXPECT_EQ(r->area(),48); 
}

TEST(Rectangle, BigArea) {
    Rectangle* r = new Rectangle(1000,1000);
    EXPECT_EQ(r->area(),1000000); 
}

TEST(Rectangle, ZeroArea) {
    Rectangle* r = new Rectangle(0,0);
    EXPECT_EQ(r->area(),0); 
}

TEST(Rectangle, Perimeter) {
    Rectangle* r = new Rectangle(6,8);
   EXPECT_EQ(r->perimeter(),28); 
}

TEST(Rectangle, BigPerimeter) {
    Rectangle* r = new Rectangle(1000,1000);
   EXPECT_EQ(r->perimeter(),4000); 
}

TEST(Rectangle, ZeroPerimeter) {
    Rectangle* r = new Rectangle(0,0);
   EXPECT_EQ(r->perimeter(),0); 
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
