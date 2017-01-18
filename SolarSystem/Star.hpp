#ifndef STAR_HPP
#define STAR_HPP

#include <GLUT/glut.h>

class Star {
public:
  // 星球的运行半径
  GLfloat radius;
  // 星球的公转、自传速度
  GLfloat speed, selfSpeed;
  // 星球的中心与父节点星球中心的距离
  GLfloat distance;
  // 星球的颜色
  GLfloat rgbaColor[4];

  // 父节点星球
  Star *parentStar;

  // 构造函数，构造一颗星球时必须提供
  // 旋转半径、旋转速度、自转速度、绕行(父节点)星球
  Star(GLfloat radius, GLfloat distance, GLfloat speed, GLfloat selfSpeed,
       Star *parent);
  // 对一般的星球的移动、旋转等活动进行绘制
  void drawStar();
  // 提供默认实现，负责调用 drawStar()
  virtual void draw() { drawStar(); }
  // 参数为每次刷新画面时的时间跨度
  virtual void update(long timeSpan);

protected:
  GLfloat alphaSelf, alpha;
};

//具有特殊材质的行星
class Planet : public Star {
public:
  Planet(GLfloat radius, GLfloat distance, GLfloat speed, GLfloat selfSpeed,
         Star *parent, GLfloat rgbaColor[3]);
  void drawPlanet();
  virtual void draw() {
    drawPlanet();
    drawStar();
  }
};

//会发光的行星
class LightPlanet : public Planet {
public:
  LightPlanet(GLfloat radius, GLfloat distance, GLfloat speed,
              GLfloat selfSpeed, Star *parent, GLfloat rgbaColor[3]);
  void drawLightPlanet();
  virtual void draw() {
    drawLightPlanet();
    drawPlanet();
    drawStar();
  }
};

#endif
