import os
import serial
import time

port = "COM7"

ser = serial.Serial(port, 9600, timeout=1)
time.sleep(2)

#while True:
#    if ser.in_waiting > 0:
#        raw = ser.readline()
#        text = ''.join(chr(b) for b in raw if chr(b).isdigit())
#        if text:
#            print(text)

while True:
    if ser.in_waiting > 0:
        raw = ser.readline()
        appID = ''.join(chr(b) for b in raw if chr(b).isdigit())
        if len(appID) > 2:
            appID = appID[1:-1]
            print(appID)
            os.startfile(f"steam://rungameid/{appID}")