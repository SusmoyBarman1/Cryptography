import random

def lehmann(n, t):

	# generating a random base less than n
	a = random.randint(2, n-1)

	# calculating exponent
	e =(n-1)/2

	while(t>0):

		result =((int)(a**e))% n

		if((result % n)== 1 or (result % n)==(n-1)):
			a = random.randint(2, n-1)
			t-= 1

		else:
			return -1

	return 1

def main():

    for i in range(21):
        # n = int(input("Number: ")) # number to be tested
        # t = int(input("Epochs: ")) # number of tries
        print()

        n = i+1
        t = 2000
        
        if (n is 1):
            print("1 is composite")
        # if n is 2, it is prime
        elif(n is 2):
            print("2 may be Prime.")

        # if even, it is composite
        elif(n % 2 == 0):
            print(n, "is Composite")

        # if odd, check
        else:
            flag = lehmann(n, t)

            if(flag is 1):
                print(n, "may be Prime.")

            else:
                print(n, "is Composite.")


if __name__ == "__main__":
    main()