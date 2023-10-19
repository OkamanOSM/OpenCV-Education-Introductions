import os 
import cv2

capture = cv2.imread("/home/okaman/Downloads/Untitled.png")

if capture is not None:

    bgr_image = cv2.cvtColor(capture, cv2.COLOR_BGR2GRAY)
    hsv_image = cv2.cvtColor(capture, cv2.COLOR_BGR2HSV)
    x = cv2.cvtColor(capture, cv2.COLOR_HSV2RGB)

    cv2.imshow("ekran", bgr_image)
    cv2.waitKey(3000)
    cv2.imshow("ekran", hsv_image)
    cv2.waitKey(3000)
    cv2.imshow("ekran", x)
    cv2.waitKey(3000)
    
    cv2.imwrite('gray_scaled_image.jpg', bgr_image)
else:
    print("goruntu alma basarisiz")
cv2.destroyAllWindows()