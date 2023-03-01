from selenium import webdriver
from selenium.webdriver.common.keys import Keys
import time
from selenium.webdriver.common.action_chains import ActionChains
import pickle
from upx import password,log

options = webdriver.ChromeOptions()
options.add_argument("user-agent=Mozilla/5.0 (X11; Ubuntu; Linux x86_64; rv:84.0) Gecko/20100101 Firefox/84.0")
options.add_argument("--disable-blink-features=AutomationControlled")

driver = webdriver.Chrome(executable_path="C:\1sem\FUCKING-SHIT\bot\chromedriver.exe",options=options)

login = "1677074588577@upx.bet"
password = "i7PTqCFumRDCUg6AHgP6"

try:
    driver.get("https://up0pu6x.tech/")
    driver.set_window_size(1000, 1000)
    time.sleep(8)

    # pickle.dump(driver.get_cookies(),open(f"{log}_cookies",'wb'))
    # driver.get("https://up4kr5x.tech/")
    # time.sleep(8)
    # for cookie in pickle.load(open(f"{log}_cookies", "rb")):
    #     driver.add_cookie(cookie)
    # time.sleep(5)
    # print(1)
    # driver.refresh()
    # time.sleep(10)

except Exception as ex:
    print(ex)
finally:
    driver.close()
    driver.quit()

    
