//
//  cinder_example.h
//  cinder_boost_practice
//
//  Created by Kita Yui on 2014/11/26.
//  Copyright (c) 2014年 takram. All rights reserved.
//

#ifndef __cinder_boost_practice__cinder_example__
#define __cinder_boost_practice__cinder_example__

#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

class CinderExample {
  public:
  CinderExample();
  // virtual ~CinderExample();

  virtual void setup();
  virtual void mouseDown(cinder::app::MouseEvent event);
  virtual void update();
  virtual void draw();
};

#endif /* defined(__cinder_boost_practice__cinder_example__) */
