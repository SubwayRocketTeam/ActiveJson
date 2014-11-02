#pragma once

#include <string>
#include <vector>

class Map{
public:
  static bool load(const std::string &path, Map &dst);
  bool save(const std::string &path);
  
public:
  class Object{
  public:
    string name;
    int x;
    int y;
  };
public:
  int id;
  std::string description;
  
  vector<Object> objects;
}
