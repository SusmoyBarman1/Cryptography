
def main():

    # Two random 25 digit prime numbers
    p = 4204650316989497082781693
    q = 1635003833305901453551133

    # First part of public key:
    n = p*q
    '''
    print(f"\nFirst part of public key: {n}\n")
    print(f"\nType of first part of public key: {type(n)}\n")
    '''

    # Finding other part of public key.
    # e stands for encrypt
    phi = (p-1)*(q-1)    
    e = 2

    while (e < phi):

        # e must be co-prime to phi and
        # smaller than phi.
        if (gcd(e, phi)==1):
            break
        else:
            e = e + 1
    
    # Private key (d stands for decrypt)
    # choosing d such that it satisfies
    # d*e = 1 + k * totient
    k = 2;  # A constant value
    d = (1 + (k*phi))/e

# Returns gcd of a and b
def gcd(a, h):
    temp
    while (1):
        temp = a%h
        if (temp == 0):
          return h
        a = h
        h = temp


if __name__ == "__main__":
    main()