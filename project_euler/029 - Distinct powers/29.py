nums = set()

for a in range(2,101):
    for b in range(2,101):
        n = a**b
        nums.add(n)

print len(nums)
        
