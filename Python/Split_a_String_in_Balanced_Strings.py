class Solution:
    def balancedStringSplit(self, s: str) -> int:
        output = counter = 0
        
        for char in s:
            
            if char == 'L':
                counter -= 1
            else:
                counter += 1
            
            if counter == 0:
                output +=1
                
        return output
