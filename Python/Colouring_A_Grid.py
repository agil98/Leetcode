from itertools import product
import numpy as np

# Brute force method
# https://math.stackexchange.com/questions/3215805/coloring-a-3-times-n-board-using-3-colors

def findValid(n):
	n, m = n, 3
	x = product(['R','G','B'], repeat=n*m)
	x = np.reshape(list(x), (-1, n, m))
	print(x)

	valid = 0
	validarr = []

	for j in x:

		yes = 1

		# Check col
		for i in range(3):
			if len(np.unique(j[:,i:i+1])) == 1:
				yes = 0
				break

		if yes:
			# Check rows
			for i in range(n):
				if len(np.unique(j[i])) == 1:
					yes = 0
					break

		if yes:
			valid += 1
			validarr.append(j.tolist())

	return valid,validarr

x,y = findValid(3)
print(x)