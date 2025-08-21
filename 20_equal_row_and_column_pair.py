# LeetCode 2352: Equal Row and Column Pairs
# https://leetcode.com/problems/equal-row-and-column-pairs/description/

class Solution:
    def equalPairs(self, grid: List[List[int]]) -> int:
        
        length = len(grid)
        count = 0

        rows = [tuple(row) for row in grid]
        # make a tuple cuz they are immutable and hence use less memory        

        columns = []
        # create columns as tuples
        
        for c in range(length):
            col = []

            for r in range(length):
                col.append(grid[r][c])

            columns.append(tuple(col))

        for row in rows:
            for col in columns:

                if col == row:
                    count += 1

        return count