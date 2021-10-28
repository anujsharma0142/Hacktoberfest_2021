# install all dependency with pip install -r requirements.txt
import mss
import pyautogui as gui
import time

# globals
x1, x2, x3, x4 = 874, 977, 1078, 1151
y = 360 # constant for mss function
start_y = 500
y2 = y # increse as the game speed increases
x_cords = [0, x2-x1, x3-x1, x4-x1]
score = 0

def screenShot(): # Screen Capture
    with mss.mss() as sct:
        gameBox = {"top": y, "left": x1, "width": x4-x1+1, "height": 2}
        img = sct.grab(gameBox)
    return img

# Starting the game
time.sleep(5)
gui.click(x1, start_y)
gui.click(x2, start_y)
gui.click(x3, start_y)
gui.click(x4, start_y)

while True: # Game loop
    img = screenShot()
    
    # decrease or increase y2 values based of your processor speed
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
            gui.click(x+x1, y2+10)
            score += 1
        # Fail safe, terminates if mouse goes out of gameBox
        mousePos = gui.position()[0]
        if x1 > mousePos or x4 < mousePos:
            print('Fuck! not again!')
            exit(0)
