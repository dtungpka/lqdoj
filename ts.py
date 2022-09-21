#create a testset
#first line is the number of test cases
#secon is n with n < 1000
#third is a array of i numbers sep by space (i random numbers < 1000)
#save it to a file test1.txt
import random
import sys

def main():
    #number of test cases
    f = open("test1.txt", "w")
    t = 3
    f.write(str(t) + "\n")
    for i in range(t):
        #number of elements
        n = random.randint(1, 1000)
        f.write(str(n) + "\n")
        for j in range(n):
            f.write(str(random.randint(1, 1000)) + " ")
        f.write("\n")
    f.close()

if __name__ == "__main__":
    main()
