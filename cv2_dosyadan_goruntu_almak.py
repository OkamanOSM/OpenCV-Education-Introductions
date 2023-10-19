import os
import cv2

image = cv2.imread("/home/okaman/Downloads/Untitled.png")
cv2.imshow("ekran", image)
cv2.waitKey(10000)
cv2.destroyAllWindows()