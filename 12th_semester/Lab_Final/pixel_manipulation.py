import cv2, numpy as np
from google.colab.patches import cv2_imshow
from google.colab import files

img = cv2.imread('lena.jpg', 0)
if img is None:
    files.upload()
    img = cv2.imread('lena.jpg', 0)

cv2_imshow(img)

# Pixel manipulation
for i in range(img.shape[0]):
    for j in range(img.shape[1]):
        img[i,j] = 255 if img.item(i,j) > 155 else 0

cv2_imshow(img)
cv2.imwrite('output.jpg', img)
