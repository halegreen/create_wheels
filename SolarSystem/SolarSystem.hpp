#ifndef SOLARSYSTEM_HPP
#define SOLARSYSTEM_HPP

#include "Star.hpp"
#include <GLUT/glut.h>
#include <iostream>

#define Star_Num 10

class SolarSystem {
public:
  SolarSystem();
  ~SolarSystem();

  void onDisplay();
  void onUpdate();
  void onKeyboard(unsigned char key, int x, int y);

private:
  Star *stars[Star_Num];

  GLdouble viewX, viewY, viewZ;
  GLdouble centerX, centerY, centerZ;
  GLdouble upX, upY, upZ;
};

#endif
