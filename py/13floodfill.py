def flood_fill(image, x, y, color):
    if image[x][y] == color:
        return
    old_color = image[x][y]
    image[x][y] = color
    if x > 0 and image[x - 1][y] == old_color:
        flood_fill(image, x - 1, y, color)
    if x < len(image) - 1 and image[x + 1][y] == old_color:
        flood_fill(image, x + 1, y, color)
    if y > 0 and image[x][y - 1] == old_color:
        flood_fill(image, x, y - 1, color)
    if y < len(image[0]) - 1 and image[x][y + 1] == old_color:
        flood_fill(image, x, y + 1, color)
image = [
    [1, 1, 1, 1],
    [1, 0, 0, 1],
    [1, 0, 0, 1],
    [1, 1, 1, 1]
]
x = 2
y = 2
color = 2
flood_fill(image, x, y, color)
for row in image:
    print(row)