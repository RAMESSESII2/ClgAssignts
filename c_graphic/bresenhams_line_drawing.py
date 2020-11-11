def brnhms(x0, y0, X, Y):
    dx = X - x0
    dy = Y - y0
    # sx = (X - x0) // dx
    # sy = (Y - y0) // dy
    x = []
    y = []
    p = 2 * dy - dx
    while x0 <= X:
        x.append(x0)
        y.append(y0)
        x0 += 1
        if p >= 0:
            y0 += 1
            p = p + (2 * dy) - (2 * dx)
        else:
            p = p + 2 * dy
    return (x, y)


if __name__ == "__main__":
    # x, y = brnhms(2, 2, 18, 4)
    x, y = brnhms(2, 2, 12, 8)
    print(f"x={x} and y={y}")
