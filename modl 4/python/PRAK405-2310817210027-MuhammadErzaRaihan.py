def main():
    x, n = map(int, input(" ").split())
    total = 0

    for i in range(1, x + 1):
        baris = 0

        for j in range(i, 0, -1):
            baris += j * n
            if j == i:
                print(f"({j} * {n})", end="")
            else:
                print(f" + ({j} * {n})", end="")

        print(f" = {baris}")
        total += baris

    print(total)

if __name__ == "__main__":
    main()
