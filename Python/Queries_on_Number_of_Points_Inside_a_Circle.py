class Solution:
    def countPoints(self, points: List[List[int]], queries: List[List[int]]) -> List[int]:
        output = [0] * len(queries)
        index = 0
        for circle in queries:
            x = circle[0]
            y = circle[1]
            circleRad = circle[2]
            for point in points:
                rad = ((point[0]-x)**2+(point[1]-y)**2)**(1/2)
                if rad <= circleRad:
                    output[index] += 1
            index += 1
        return output
