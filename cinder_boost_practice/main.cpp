#include <iostream>
#include <string>
#include <boost/format.hpp>
#include <boost/function.hpp>

#include "boost_example.h"
#include "cinder_example.h"

int main ()
{
  yui::BoostExample example = yui::BoostExample();
  CinderExample c_example = CinderExample();
  c_example.draw();
}