class Solution:
    def decode(self, encoded: List[int], first: int) -> List[int]:
        decoded = []
        decoded.append(first)
        for num in range(0, len(encoded)):
            decoded.append(decoded[num] ^ encoded[num])
        return decoded
