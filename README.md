ActiveJson
==========

Concept
----
__map.json__
```JSON
{
  "id" : 0,
  "description" : "hello world",
  
  objects : [
    {
      "name" : "market",
      "x" : 15, "y" : 20
    },
    {
      "name" : "enemy",
      "x" : 100, "y" : 140
    }
  ]
}
```
__ActiveJson Script___
```
class Map
  int id;
  string description;
  
  vector<class Object
    string name;
    int x;
    int y;
  end> objects;
end
```
__C++ Usage__
```C++
map = Map::load("map.json");

printf("id : %d\n", map.id);
printf("desc : %s\n", map.description.c_str());

for(auto object : m.objects){
  printf("obj name : %s\n", object.name.c_str());
  printf("obj x,y : %d, %d\n", object.x, object.y);
}
```
```C++
Map m;

m.id = 1234;
m.decription = "bye";

Map::Object obj;
obj.name = "man";
obj.x = 14; obj.y = 20;

m.objects.push_back(obj);

m.save("output.json");
```
