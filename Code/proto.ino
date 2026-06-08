import serial
import time

port = "COM7"

ser = serial.Serial(port, 9600, timeout=1)
time.sleep(2)

ser.write(b"Hello\n")