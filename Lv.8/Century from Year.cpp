int centuryFromYear(int year) 
{
  if(year%100 == 0){
    return year/100;
  }
  else return year/100+1 ;
}

///////other solutions 

constexpr int centuryFromYear(int year) 
{
    return (year + 99) / 100;
}

/////

int centuryFromYear(int year) 
{
return year%100==0?year/100:year/100+1;
}
