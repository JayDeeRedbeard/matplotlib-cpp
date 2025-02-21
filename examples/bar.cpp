#define _USE_MATH_DEFINES

#include "../matplotlibcpp.h"
#include <iostream>
#include <string>
namespace plt = matplotlibcpp;

int
main(int argc, char **argv)
{
  std::vector<int> test_data;
  for(int i = 0; i < 20; i++)
  {
    test_data.push_back(i);
  }
  plt::rcparams({ { "font.size", "55" } });
  plt::bar(test_data);
  plt::show();
  plt::save("bar_size.png");

  return (0);
}
