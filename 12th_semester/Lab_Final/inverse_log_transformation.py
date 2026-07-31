import cv2
import numpy as np
from google.colab.patches import cv2_imshow
from google.colab import files

img = cv2.imread('lena.jpg', 0)
if img is None:
    files.upload()
    img = cv2.imread('lena.jpg', 0)

# Inverse Log Transformation
img_norm = img / 255.0
inverse_log = np.exp(img_norm) - 1
inverse_log = (inverse_log / inverse_log.max()) * 255
inverse_log = inverse_log.astype(np.uint8)

cv2_imshow(img)
cv2_imshow(inverse_log)
