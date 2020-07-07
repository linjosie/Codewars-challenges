using namespace std;

string get_planet_name(int id)
{
  switch(id){
      case 1:
      return "Mercury";
      break;
      case 2:
      return "Venus";
      break;
      case 3:
      return "Earth";
      break;
      case 4:
      return "Mars";
      break;
      case 5:
      return "Jupiter";
      break;
      case 6:
      return "Saturn";
      break;
      case 7:
      return "Uranus";
      break;
      case 8: 
      return "Neptune";
      break;

  }
  
}

//// other solutions

std::string get_planet_name(int id)
{
  std::string array[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
  return array[id-1];
}

