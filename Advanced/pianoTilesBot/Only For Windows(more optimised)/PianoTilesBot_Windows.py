# install all dependency with pip install -r requirements.txt

import mss
import win32api, win32con
import time

# globals
x1, x2, x3, x4 = 1270, 1381, 1513, 1625
y = 470 # constant for mss function
start_y = 781
y2 = y # increse as the game speed increases
x_cords = [0, x2-x1, x3-x1, x4-x1]
score = 0

# Mouse Controls
def click(x, y):
    win32api.SetCursorPos((x, y))
    win32api.mouse_event(win32con.MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0)
    win32api.mouse_event(win32con.MOUSEEVENTF_LEFTUP, 0, 0, 0, 0)

# Screen Capture
def screenShot():
    with mss.mss() as sct:
        mon = {"top": y, "left": x1, "width": x4-x1+1, "height": 2}
        img = sct.grab(mon)
    return img

# Starting the game
#img = screenShot() //uncomment in windows 11 to avoid auto minimization of all windows
time.sleep(5)
click(x1, start_y)
click(x2, start_y)
click(x3, start_y)
click(x4, start_y)

# Game loop
while True:
    img = screenShot()
    if score == 900:
        y2 += 20
    if score == 1000:
        y2 += 30
    if score == 1250:
        y2 += 50
    if score >= 1400 and score%100==0:
        y2 += 20

    for x in x_cords:
        if img.pixel(x, 0)[0] < 50: # increase to 70 if misses blue tiles
            click(x+x1, y2+10)
            score += 1
    # Fail Safe, terminates if mouse goes out of gameBox
    mousePos, _ =  win32api.GetCursorPos()
    if x1 > mousePos or x4 < mousePos:
        print("Fuck! not again!")
        exit(0)
