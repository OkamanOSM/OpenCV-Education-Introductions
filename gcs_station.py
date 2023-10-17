import serial
import threading

# Seri bağlantı portunu ve baud hızını ayarlayın (cihazınıza göre değiştirin).
ser = serial.Serial('COM3', 115200)

def receive_data():
    try:
        while True:
            data = ser.readline().decode('utf-8')
            print("Gelen Veri:", data)
    except KeyboardInterrupt:
        #ser.close()
        pass
    
def send_data():
    try:
        while True:
            user_input = input("Veri göndermek için bir mesaj girin: ")
            ser.write(user_input.encode('utf-8'))
    except KeyboardInterrupt:
        pass


receive_thread = threading.Thread(target=receive_data)
send_thread = threading.Thread(target=send_data)

receive_thread.start()
send_thread.start()

receive_thread.join()
send_thread.join()