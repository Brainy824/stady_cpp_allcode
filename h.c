#include<stdio.h>

int dfs(int **grid,int  gridSize,int * gridColSize,int sr,int sc)
{
    //越界判断
    if(sr < 0 || sr >= gridSize)
        return 0;
    if(sc < 0 || sc >= gridColSize[0])
        return 0;
    if(grid[sr][sc] == 0)
        return 0;
    //将这个点清零
    grid[sr][sc] = 0;
    //返回面积
    return 1 + dfs(grid,gridSize,gridColSize,sr + 1,sc)
             + dfs(grid,gridSize,gridColSize,sr - 1,sc)
             + dfs(grid,gridSize,gridColSize,sr,sc + 1)
             + dfs(grid,gridSize,gridColSize,sr,sc - 1);

}
int maxAreaOfIsland(int** grid, int gridSize, int* gridColSize){
    int area = 0,j = 0 ,i = 0,max = 0;
    for(i = 0; i < gridSize; i++)
    {
        for(j = 0; j < gridColSize[0]; j++)
        {
            area = dfs(grid,gridSize,gridColSize,i,j);
            max = max > area ? max : area;
        }
    }
    return max;
}
int main()
{
    maxAreaOfIsland(int** grid, int gridSize, int* gridColSize);
    return 0;
}