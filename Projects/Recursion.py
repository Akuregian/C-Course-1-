import matplotlib.pyplot as plt

def n_To_The_Power(number, power):
	for i in range(0, number):
		element = i**power
		if i == 0:
			sequence = [element]
		else:
			sequence.append(element)
	return sequence

def n_Factorial(number):
	factorial = 1
	newSequence = []
	for i in range (1, number + 1):
		factorial = factorial * i
		if i == 0:
			newSequence = [factorial]
		else:
			newSequence.append(factorial)
	return newSequence


def Fibonacci(n): 
	a = 0
	b = 1
	fib_List = []
	if n < 0: 
		print("Incorrect input") 
	elif n == 0: 
		return a 
	elif n == 1: 
		return b 
	else: 
		for i in range(2,n):
			c = a + b 
			a = b
			b = c 
			fib_List.append(b)
		return fib_List 

def my_List():
	list = []
	for i in range(0, 10):
		input_List = input("Enter 10 elements in a list to be graphed: ")
		list.append(input_List)
	print(list)

def main():
	print(n_To_The_Power(10, 2))
	print(n_To_The_Power(10, 3))
	print(n_To_The_Power(10, 4))
	print(n_Factorial(8))
	print(Fibonacci(9))
	#my_List()

plt.rcParams["figure.figsize"] = (15, 8)
plt.plot(n_To_The_Power(30, 2), '-r', label = 'n^2')
plt.plot(n_To_The_Power(27, 3), '-b', label = 'n^3')
plt.plot(n_To_The_Power(15, 4), '-g', label = 'n^4')
plt.plot(n_Factorial(8), '-k', label = '!n')
plt.plot(Fibonacci(25), '--', label = 'Fibonacci')
plt.xlabel("Iterations")
plt.ylabel("Values")
plt.legend()
plt.show()

if __name__ == '__main__':
	main()