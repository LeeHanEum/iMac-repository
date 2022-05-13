from selenium import webdriver
import time

##url = input("url을 입력 > ")
driver = webdriver.Chrome('/Users/leehaneum/developing/Python/chromedriver')

driver.get("http://intra.finmate.kr")

##if "http" in url :
   ## driver.get(url)
##else :
    ##driver.get("https://" + url)

##time.sleep(5)
##driver.quit()