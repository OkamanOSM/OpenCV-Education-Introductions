import cv2
 
face_cascade = cv2.CascadeClassifier('/home/okaman/.local/lib/python3.11/site-packages/cv2/data/haarcascade_frontalcatface.xml')
cap = cv2.VideoCapture(0)

x = True

while x:
    ret, capture = cap.read()
    gray = cv2.cvtColor(capture, cv2.COLOR_BGR2GRAY)
    gray = capture

    faces = face_cascade.detectMultiScale(gray, scaleFactor= 1.3, minNeighbors= 5, minSize=(50,50))

    for (x,y,w,h) in faces:
        cv2.rectangle(capture,(x,y),(x+w,y+h),(0,255,0),2)

    cv2.imshow('Yuz tanimlama', capture)


    if cv2.waitKey(1) & 0xFF == ord('q'):
        x = False
cap.release()
cv2.destroyAllWindows()
