def speed(sp):
    if int(sp[1])>int(sp[0]):
        return "Yes"
    else:
        return "No"

Input = list(map(int,input().split()))
print(speed(Input))