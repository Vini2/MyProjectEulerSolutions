
longest_chain_len = -1
starting_number = 0

for i in range(13, 1000000):

    n = i

    chain_len = 1

    while n != 1:

        # If n is even
        if n % 2 == 0:
            n = int(n/2)

        # If n is odd
        else:
            n = 3 * n + 1

        chain_len += 1

    if chain_len > longest_chain_len:
        longest_chain_len = chain_len
        starting_number = i

print(longest_chain_len, starting_number)