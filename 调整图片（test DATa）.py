from PIL import Image
import os
path='C:/Users/admin/Desktop/Artifical/new/trainData'
a='/'
images=os.listdir('C:\\Users\\admin\\Desktop\\Artifical\\new\\trainData')

y=0
for image in images:
    im = Image.open(path+a+image) 
    img1 = im.resize((50,50))
    y+=1
    p=str(y)
    img1.save('C:/Users/admin/Desktop/Artifical/new/3'+a+p+'.jpeg','jpeg')
    print(image) 

    
   
    