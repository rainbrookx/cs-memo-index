import threading
import time
 
 
# 睡眠排序算法
def sleep_sort(numbers):
    def sleep_and_print(number):
        time.sleep(number)
        print(number)
 
    for number in numbers:
        # 创建一个新线程，让其在number秒后输出
        thread = threading.Thread(target=sleep_and_print, args=[number])
        thread.start()
 
 
numbers = [5, 3, 6, 1, 2, 4]
sleep_sort(numbers)
