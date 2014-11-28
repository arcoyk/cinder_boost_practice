//
//  cinder_example.cpp
//  cinder_boost_practice
//
//  Created by Kita Yui on 2014/11/26.
//  Copyright (c) 2014年 takram. All rights reserved.
//

#include "cinder_example.h"

#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

class CinderExample : public cinder::app::AppBasic {
  public:
  void setup();
  void mouseDown(cinder::app::MouseEvent event);
  void update();
  void draw();
};

void CinderExample::setup() {
}

void CinderExample::mouseDown(cinder::app::MouseEvent event) {

}

void CinderExample::update() {

}

void CinderExample::draw() {
  ci::gl::clear(cinder::Color(0, 0, 0));
}
