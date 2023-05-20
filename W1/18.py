Input = int(input())
for _ in range(Input):
    x,y,z = map(int, input().split())
    print((5*x + 10*y)/z)