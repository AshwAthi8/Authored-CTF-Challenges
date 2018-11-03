# Odd_Even

### Description
Its a windows executable.  

### Level 
Medium level

### flag
inctf{0DD_4nD_3v3N_C4n_n3V3r_B3_T0geth3r}

### How to solve
Load this binary file in IDA, analysing the main and the related functions.
Two things to notice:
- It takes command line input
- Scans input through fgets

It prints “Wr0ng input!!!” for all the dissatisfying cases. 

The  inputs is itself is printed as flag, odd characters of the flag is the command line argument and fgets input from the user are the even characters for the flag string.

```python
a= 'f`c(I>fJZb5BrQZQL'
d='-gsM!T;:Q?S>9K0A2'
ar=''
br=''
q=''
l=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
#with argument
for i in range(0,17):
	l[i]=(chr((ord(a[i])^4)+3))
for i in range(0,17):
	if((i%2)==0):
		l[i]=(chr(ord(l[i])^8))
l=l[::-1]
for i in range(0,17):
	ar=ar+chr((ord(l[i])+4)^3)

#with fgets
for i in d:
	q=q+chr((ord(i)^5)+8)
q=q[::-1]
for i in range(0,17):
	br=br+chr((ord(q[i])-10)^(5+i))
z=''
for k in range(34):
	if((k%2)==0):
		z=z+(br[int(k/2)])
	else:
		z=z+(ar[int(k/2)])

print(z)
```

Output : 0DD_4nD_3v3N_C4n_n3V3r_B3_T0geth3r

inctf{0DD_4nD_3v3N_C4n_n3V3r_B3_T0geth3r}
