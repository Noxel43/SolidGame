import serial
ser = serial.Serial('COM7', 9600, timeout=1)
print("Port open:", ser.is_open)
ser.close()