import sys

def main():

    for i in range(20, sys.maxsize):

        evenly_divisible = True

        for j in range(20):
            if not i % (j+1) == 0:
                evenly_divisible = False
                break

        if evenly_divisible:
            print(f"Smallest positive number that is evenly divisible by all of the numbers from 1 to 20: {i}")
            break


if __name__ == "__main__":
    main()