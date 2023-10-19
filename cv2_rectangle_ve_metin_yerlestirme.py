import os
import cv2

capture = cv2.imread("/home/okaman/Downloads/Untitled.png")

if capture is not None:
    cv2.imshow("ekran", capture)
    cv2.waitKey(3000)
    
    #rectangle 
    start_point = (100,100) 
    end_point = (300, 150)
    color = (255,0,0) #mavi yesil kirmizi
    thickness = 2

    cv2.rectangle(capture,start_point, end_point, color, thickness)
    cv2.imshow("yeni_goruntu",capture)
    cv2.waitKey(5000)
    
    text = "Eagle Tech"
    org = (105,125)
    font = cv2.FONT_HERSHEY_SIMPLEX
    font_scale = 0.8
    font_color = (0,0,0) 
    font_thickness = 1
    cv2.putText(capture, text, org, font, font_scale, font_color, font_thickness)
    cv2.imshow("fontlu gorunut", capture)
    cv2.waitKey(3000)

else:
    print("hatali veri")


cv2.destroyAllWindows()


