class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        islands = 0
        for row in range(len(grid)):
            for col in range(len(grid[0])):
                if grid[row][col] == '1':
                    self.dfs(grid, row, col)
                    islands += 1
        return islands
    
    def dfs(self, grid, row, col):
            grid[row][col] = '0'
            adjacentCoordinates = [(row - 1, col), (row + 1, col), (row, col - 1), (row, col + 1)]
            for row, col in adjacentCoordinates:
                if row >= 0 and col >= 0 and row < len(grid) and col < len(grid[0]) and grid[row][col] == '1':
                    self.dfs(grid, row, col)