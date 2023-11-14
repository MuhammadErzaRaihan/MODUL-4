def main():
    E, Z = map(int, input().split())
    Max = abs(E - Z)

    if E < Z:
        for i in range(Max + 1):
            j = 1
            print(f"{E} {Z} - ", end="")

            E = E + j
            Z = Z - j
    else:
        for i in range(Max + 1):
            j = 1
            print(f"{E} {Z} - ", end="")

            E = E - j
            Z = Z + j

if __name__ == "__main__":
    main()
