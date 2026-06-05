import serial
import time

ser = serial.Serial('COM5', 9600)  # change COM

priority = {
    "AMBULANCE": 1,
    "FIRE": 2,
    "POLICE": 3
}

print("CPU Running Normal Tasks...\n")

while True:
    if ser.in_waiting:
        task = ser.readline().decode().strip()

        if task in priority:
            print(f"\n🚨 Interrupt Received: {task}")
            print("Pausing current task...")

            print(f"Handling {task} (Priority {priority[task]})")
            time.sleep(2)

            print("Resuming previous task...\n")
    else:
        print("Running normal task...")
        time.sleep(2)