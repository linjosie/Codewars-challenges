bool divide(unsigned weight)
{
    return weight%2 == 0 && weight/2 >1;
}

////other solution

bool divide(unsigned weight)
{
    return (weight != 2 && weight%2 == 0);
    
}
