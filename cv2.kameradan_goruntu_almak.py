import cv2
import os

capture = cv2.VideoCapture(0)
while True:
    ret, frame = capture.read()
    if ret == 1:

        cv2.imshow("ekran", frame)
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break
capture.release()
cv2.destroyAllWindows()
