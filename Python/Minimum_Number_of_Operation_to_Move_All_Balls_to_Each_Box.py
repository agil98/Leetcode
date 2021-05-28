class Solution:
    def minOperations(self, boxes: str) -> List[int]:
        numBoxes = len(boxes)
        output = []
        boxesCount = [i for i in range(numBoxes) if boxes[i] == '1']
        for i in range(numBoxes):
            output.append(sum([abs(i - j) for j in boxesCount]))
        return output