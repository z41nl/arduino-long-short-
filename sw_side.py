import serial

PORT = "COM3"
ser = serial.Serial(PORT, 115200, timeout=1)
print("Ready")

def short_action():
    print("SHORT button pressed")

    # aoi

def long_action():
    print("LONG button pressed")

    # api
while True:

    msg = ser.readline().decode().strip()

    if not msg:
        continue

    print("Received:", msg)

    if msg == "SHORT":
        short_action()

    elif msg == "LONG":
        long_action()
