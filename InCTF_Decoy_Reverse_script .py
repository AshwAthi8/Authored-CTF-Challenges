
#part1
#inctf{Y0u_F
a='}[2waHmrgxj'

flag1=[0,0,0,0,0,0,0,0,0,0,0]
c=0
while(c>=0 and c<=4):
	flag1[c]=(chr(ord(a[c+6])-4))
	c=c+1
i=0
while(c>=5 and c<10):
	flag1[c]=(chr(ord(a[i])-2))
	c=c+1
	i=i+1
flag1[10]=(chr(ord(a[5])-2))
flag1=''.join(flag1)
	
	
#part2
#0und_Th3_n3
c='#f}wLG{ L} '
flag2=''
for i in c:
	flag2=flag2+chr(((ord(i))^0x13))


#part3
#3dl3_In_Th|
c=1
i=10
flag3=[0,0,0,0,0,0,0,0,0,0,0]

a=[0x6e,0x5d,0x39,0x55,0x66,0x39,0x70,0x1e,0x41,0x15,0x7d]

while(i>=0):

	flag3[i]=(a[i]^c)
	
	c=a[i]
	i=i-1

flag3=''.join(list(map(chr,flag3)))

#part4
#z_H4y$t4cK}
a=[123,96,73,53,122,37,117,53,100,76,126]

flag4=''
for i in range(11):
	flag4=flag4+chr(a[i]-1)

print(flag1+flag2+flag3+flag4)


#inctf{Y0u_F0und_Th3_n33dl3_In_Th|z_H4y$t4cK}





