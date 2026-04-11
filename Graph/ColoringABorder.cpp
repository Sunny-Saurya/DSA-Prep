#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int delRow[4] = {-1, 0, 1, 0};
    int delCol[4] = {0, 1, 0, -1};

    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int newColor) {
        
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> newGrid = grid;
        vector<vector<int>> visited(n, vector<int>(m, 0));

        int currColor = grid[row][col];

        queue<pair<int,int>> q;
        q.push({row, col});
        visited[row][col] = 1;

        solve(grid, newGrid, visited, q, currColor, newColor);

        return newGrid;
    }

    void solve(vector<vector<int>>& grid,
               vector<vector<int>>& newGrid,
               vector<vector<int>>& visited,
               queue<pair<int,int>>& q,
               int currColor,
               int newColor) {

        int n = grid.size();
        int m = grid[0].size();

        vector<pair<int,int>> borders;

        while(!q.empty()){
            auto it = q.front();
            q.pop();

            int r = it.first;
            int c = it.second;

            bool isBorder = false;

            for(int i = 0; i < 4; i++){
                int nr = r + delRow[i];
                int nc = c + delCol[i];

                if(nr < 0 || nr >= n || nc < 0 || nc >= m){
                    isBorder = true;
                }
                else if(grid[nr][nc] != currColor){
                    isBorder = true;
                }
                else if(!visited[nr][nc]){
                    visited[nr][nc] = 1;
                    q.push({nr, nc});
                }
            }

            if(isBorder){
                borders.push_back({r, c});
            }
        }

        // color only borders
        for(auto &cell : borders){
            newGrid[cell.first][cell.second] = newColor;
        }
    }
};