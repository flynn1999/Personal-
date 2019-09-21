### Author: Flynn Gaur
### Course: CSc 110 - 11AM
### Description: This program processes a CSV file and gives
###              either the average or the maximim or the 
###              minimum value as output for a user defined column

import sys
import os 
import math
cwd = os.path.dirname(os.path.realpath(__file__))
sys.path.insert(0, cwd)
from graphics import graphics



def main():
    '''
    This function takes the file name, column number 
    and the desired operation as input. It also calls 
    the functions read and process
    '''

    info=input_info()
    wishlist_info=info[0]
    all_expenses=info[1]
    savings=info[2]
    
    canvas_height = 500
    canvas_width = 1000
    gui = graphics(canvas_width, canvas_height, 'Finance Application')
    while True:
        gui.clear()
        gui.rectangle(0, 0, canvas_width, canvas_height, 'white')
        print_percent_bar(gui)
        print_upper_half(gui,wishlist_info,all_expenses,savings)
        gui.update_frame(30)

    
    
def input_info():
    food=0
    bills=0
    edu=0
    misc=0
    groceries=0
    fun=0
    print('Welcome To Finance Application')
    print('******************************')
    salary=float(input('Enter your monthly salary:\n'))
    print('Input your expenses from various categories.')
    print('------------------------------------------------------------------------------------')
    print("Enter every entry for amount spent on the following categories:")
    print("Enter nothing (empty string) when you're done with that category.")
    print("Food:")
    user_input=0
    while user_input!='':
        food+=float(user_input)
        user_input=input()
    print('Total: '+str(food))
    print('')
   # min_food=input('What is the minimum amount you want to spend on food?\n')
    
    print("Monthly Bills")
    user_input=0
    while user_input!='':
        bills+=float(user_input)
        user_input=input()
    print('Total: '+str(bills))
    print('')
    
    print("Transportation & Health")
    user_input=0
    while user_input!='':
        misc+=float(user_input)
        user_input=input()
    print('Total: '+str(misc))
    print('')
    
    print("Education")
    user_input=0
    while user_input!='':
        edu+=float(user_input)
        user_input=input()
    print('Total: '+str(edu))
    print('')
    
    print("Miscellaneous")
    user_input=0
    while user_input!='':
        groceries+=float(user_input)
        user_input=input()
    print('Total: '+str(groceries))
    print('')
   # min_groceries=input('What is the minimum amount you want to spend on this category?\n')
    
    print("Entertainment")
    user_input=0
    while user_input!='':
        fun+=float(user_input)
        user_input=input()
    print('Total: '+str(fun))
    print('')
 #   min_fun=input('What is the minimum amount you want to spend on this category?\n')
    
    all_expenses=[food,bills,misc,edu,groceries,fun]
    expenditure=float(food)+float(bills)+float(misc)+float(edu)+float(groceries)+float(fun)
  #  min_expenditure=float(min_food)+float(bills)+float(misc)+float(edu)+float(groceries)+float(fun)
    savings=float(salary-expenditure)
  #  min_expenses=[min_food,min_groceries,min_fun]
    
  #  print('Enter which one of these matters the most:')
  #  print('1. Food\n2.Clothing, Appliances, Groceries etc.\n3. Fun')
    
    
    print('Thank you for you input!')
    print('----------------------------------------------------------------------------------------------------------------------------------')
    print('\nWishlist')
    print('*********')
    print('Would you like to import your wishlist as a text file or input it right now?')
    print('Max limit is 10')
    choice=input("Enter 'text' to import text file and 'type' to type out your wishlist\n")
    if choice=='text':
        print("The format of the wishlist is to be like this:\n")
        print('Item Name : Item Price')
        wishlist=read_wishlist()
    elif choice=='type':
        wishlist=type_wishlist()
        
    wishlist_info=calculate(wishlist,savings)
    info=[wishlist_info,all_expenses,savings]
    return info
 #   print_upper_half(wishlist_info,all_expenses)
  #  print_percent_bar(gui)

def calculate(wishlist,savings):
    wishlist_info=[]
    temp=[]
    for k,v in wishlist.items():
     #   print(savings)
        time=(int(v)//int(savings))
        temp=[k,str(v),str(time)]
        wishlist_info.append(temp)
    return wishlist_info
  #  print(wishlist_info)
       # print(k+' : '+str(v)+' : '+str(time))
    
    
def read_wishlist():
    wishlist={}
    file_name=input('Enter the name of the wishlist file:\n')
    file=open(file_name)
    data=file.readlines()
    for i in data:
        lines=i.strip('\n')
        lines=i.split(' : ')
        wishlist[lines[0]]=lines[1]
    return wishlist
    
        
def type_wishlist():
    wishlist={}
    item_name=' '
    print("Enter the Items & the prices of the items from the wishlist.")
    print('Type END when you want to stop adding items to the wishlist')
    while True:
        item_name=input('Item Name: ')
        if item_name=='END':
            break
        item_price=float(input('Item Price: '))
        wishlist[item_name]=item_price
    return wishlist
    



def print_upper_half(gui,wishlist_info,all_expenses,savings):
    wishlist=[]
    prices=[]
    time=[]
    for i in wishlist_info:
        wishlist.append(i[0])
        prices.append(i[1])
        time.append(i[2])

    gui.rectangle(0,0,1000,500,'grey15')
    gui.rectangle(500,175,500,45,'light grey')
    gui.rectangle(0,0,1000,45,'light grey')
        
   # wishlist = ['ps4', 'switch', 'hooker', 'h', 'g', 'a', 'x', 'c', 'b', 'w']   #replace with the actual list
    list_1 = ['Food', 'Bills', 'Transportation', 'Education', 'Miscellaneous', 'Entertainment']  #replace with the actual list
    gui.text(30, 10, 'Wish List Item', 'black', 20)
    gui.text(200, 10, 'Price', 'black', 20)
    gui.text(350, 10, 'Saving Time', 'black', 20)

    gui.line(500, 550, 500, -10, 'black')

    gui.text(700, 5, 'Expenses', 'black', 30)
    x_coord = 510
    y_coord = 55
    i_value = 0
    i=0
    for expense in list_1:
        if i_value == 3:
            x_coord = 700
            y_coord = 55
        i_value += 1
        gui.text(x_coord, y_coord, expense, 'white', 15) #type of expense
        gui.text(x_coord + 125, y_coord, '$'+str(all_expenses[i]), 'red', 15) #amount of money
        y_coord += 30
        i+=1
    gui.line(-10, 45, 1010, 45, 'black')
    gui.line(500, 175, 1010, 175, 'black') 
    gui.line(500, 220, 1010, 220, 'black')
    gui.text(700, 178, 'Savings', 'black', 30)
    gui.text(550, 240, '$'+str(savings), 'green', 30)
    gui.text(750, 240, 'Per Month', 'forest green', 30)
    x = 30
    y = 60
    gui.line(160,-10,160,510,'black')
    gui.line(320,-10,320,510,'black')

    i=0
    while i<len(wishlist):
        gui.text(x, y, wishlist[i], 'deep sky blue', 15)
        gui.text(x+170, y, '$'+str(prices[i]), 'green', 15)
        months=int(time[i])  
        years=months//12
        if years!=0:
            months=months%12
            gui.text(x+320, y, str(years)+' yrs '+str(months)+' month(s)', 'white', 15)
        elif months==0:
            months=months+1
            gui.text(x+320, y, str(months)+' month(s)', 'white', 15)
        else:
            months=time[i]
            gui.text(x+320, y, str(months)+' month(s)', 'white', 15)
        y += 25
        i+=1
    exp=0
    for i in all_expenses:
        exp+=i
    food=all_expenses[0]
    bills=all_expenses[1]
    trans=all_expenses[2]
    edu=all_expenses[3]
    misc=all_expenses[4]
    fun=all_expenses[5]
    food_len=(food/exp)*1000
    bills_len=(bills/exp)*1000
    trans_len=(trans/exp)*1000
    edu_len=(edu/exp)*1000
    misc_len=(misc/exp)*1000
    fun_len=(fun/exp)*1000
    i=0
    x=0
    y=370
    gui.rectangle(x, 370, food_len, 130, 'violet')
    gui.rectangle(x+food_len,370,bills_len,130,'purple')
    gui.rectangle(x+food_len+bills_len,370,trans_len,130,'green')
    gui.rectangle(x+food_len+bills_len+trans_len,370,edu_len,130,'yellow')
    gui.rectangle(x+food_len+bills_len+trans_len+edu_len,370,misc_len,130,'orange')
    gui.rectangle(x+food_len+bills_len+trans_len+edu_len+misc_len,370,fun_len,130,'red')

        
        
def print_percent_bar(gui):
    list_1 = ['Food', 'Bills', 'Transportation', 'Education', 'Miscellaneous', 'Entertainment']  #replace with the actual list
    gui.line(-10, 345, 1010, 345, 'black')
    gui.text(100, 400, 'Finance Percentages: ', 'black',  15)
    gui.line(-10, 370, 1010, 370, 'black')
    gui.rectangle(0, 370, 1000, 130, 'black')



main()