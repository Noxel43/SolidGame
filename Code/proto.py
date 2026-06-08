import os
import serial
import time

appID = str("")
port = "COM7"

ser = serial.Serial(port, 9600, timeout=1)
time.sleep(2)

while True:
    if ser.in_waiting > 0:
        data = ser.readline().decode('utf-8').strip()
        print(data)