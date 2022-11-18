import string
f = open("test1.mem",'w')
for i in range(256):
    if (i+1)%16 == 0:
        s = "{hex:2X}\n"
    else:
        s = "{hex:2X} "
    f.write(s.format(hex=i))
f.close()