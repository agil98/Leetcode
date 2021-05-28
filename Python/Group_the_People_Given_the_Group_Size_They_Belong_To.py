class Solution:
    def groupThePeople(self, groupSizes: List[int]) -> List[List[int]]:
        groups = {}
        resultingGroups = []
        
        for i in range(0,len(groupSizes)):
            if groupSizes[i] in groups:
                groups[groupSizes[i]].add(i)
            else:
                groups[groupSizes[i]] = {i}

        
        for index in groups:
            newGroup = []
            for p in groups[index]:
                if (len(newGroup) == index):
                    resultingGroups.append(newGroup)
                    newGroup = []
                newGroup.append(p)
            resultingGroups.append(newGroup)
            
        return resultingGroups