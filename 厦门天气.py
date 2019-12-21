import numpy as np
import matplotlib.pyplot as plt
import csv
f = open('C:\\Users\\admin\\Desktop\\Artifical\\liujiawe n\\厦门201904.csv',encoding='UTF-8')

L=list(csv.reader(f))
def Sum_Size(size_list):#列表元素大小统计函数

    sum_最高气温 = sum_最低气温 = sum = 0
    j=0
    y=[]
    for size in size_list:
        y.append(size)
        sum+=int(size)
        j+=1                     
    
    x=range(0,j)
    plt.plot(x,y,label='high')

   # plt.imshow()

    plt.show()
    sum/=j
    return sum
low=[]
high=[]

for i in range(1,3):#第i列
    num=0
    L_colomn = []

    for j in range(1,len(L)):#第j行
    
        L_colomn.append(L[j][i])
        
    sum_size = Sum_Size(L_colomn)
    
    print('合计为{1:.2f}摄氏度'.format(i+1,sum_size))
    for k in L_colomn:
        num+=1
        if i==1:
            high.append(k)
            print(k)
        else :
            low.append(k)

x1=range(0,num)
x2=range(0,num)
y1=high
y2=low
plt.plot(x1,high,label='highest')
plt.plot(x2,low,label='lowest')
plt.xlabel('days')
plt.ylabel('tempture')
plt.legend()
plt.show()
b1=b2=b3=b4=0
for i in range(3,4):#第i列
    num=0
    L_colomn = []
    if i==3:
        for j in range(1,len(L)):#第j行
    
            L_colomn.append(L[j][i])
        for k in L_colomn:
            if k=='阴':
                b1+=1
            if k=='晴':
                b2+=1
            if k=='多云':
                b3+=1
            if k=='雾':
                b4+=1
                
            

sum1=b1+b2+b3+b4 
b1/=sum1
b2/=sum1
b3/=sum1
b4/=sum1

labels='overcast','sun','cloud','fog'
sizes=[b1,b2,b3,b4]
explode=(0, 0.1, 0,0)
fig1, ax1 = plt.subplots()
ax1.pie(sizes,labels=labels,autopct='%1.0f%%',startangle=10)
plt.legend()
plt.show()
