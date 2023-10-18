h,w = input().split(" ")
h,w = int(h),int(w)
popit=[input() for i in range(h)]
all0s=0
for line in popit:
    all0s+=line.count("0")

all1s=(h*w)-all0s

print(min([all1s,all0s]))


     
