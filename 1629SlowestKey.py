class Solution:
    def slowestKey(self, releaseTimes: List[int], keysPressed: str) -> str:
        longestDuration = releaseTimes[0]
        longestKey = keysPressed[0]
        for i in range(1, len(releaseTimes)):
            if(releaseTimes[i]-releaseTimes[i-1]>longestDuration or (releaseTimes[i]-releaseTimes[i-1]==longestDuration and longestKey<keysPressed[i])):
                longestKey = keysPressed[i]
                longestDuration = releaseTimes[i]-releaseTimes[i-1]
        return longestKey
