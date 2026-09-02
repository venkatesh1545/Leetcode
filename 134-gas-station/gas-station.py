class Solution(object):
    def canCompleteCircuit(self, gas, cost):
        total = 0
        start = 0
        current = 0
        for i in range(len(gas)):
            difference = gas[i] - cost[i]
            total += difference
            current += difference
            if current < 0:
                start = i + 1
                current = 0
            
        if total >= 0:
            return start
        return -1

        