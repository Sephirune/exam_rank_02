typedef struct  s_point
{
    int         x;
    int         y;
}               t_point;

void fill(char **tab, t_point size, t_point cur, char target)
{
    if (cur.x < 0 || cur.x >= size.x || cur.y < 0 || cur.y >= size.y)
        return;
    
    if (tab[cur.y][cur.x] != target)
        return;
    
    tab[cur.y][cur.x] = 'F';
    
    fill(tab, size, (t_point){cur.x, cur.y - 1}, target);
    fill(tab, size, (t_point){cur.x, cur.y + 1}, target);
    fill(tab, size, (t_point){cur.x - 1, cur.y}, target);
    fill(tab, size, (t_point){cur.x + 1, cur.y}, target);
}

void flood_fill(char **tab, t_point size, t_point begin)
{
    if (begin.x < 0 || begin.x >= size.x || begin.y < 0 || begin.y >= size.y)
        return;
    
    fill(tab, size, begin, tab[begin.y][begin.x]);
}