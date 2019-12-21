# -*- coding: utf-8 -*-

import glob
import numpy as np


path=glob.glob('nose_vector_45_nor')
dir_list = glob.glob(f'{path[0]}/*')
for d in dir_list:
    file_list=glob.glob(f'{d}/*.txt')
    for file in file_list:
        name=file.split('\\')[-1]
        point_arr=[]
        point_list=open(file,'r').read().split('\n')
        for idx,point in enumerate(point_list):
            print(point)
            if idx==len(point_list)-1:
                continue
            #row_data=list(map(eval,point.split(' '))) 
            list=[]
            a,b,c,d,e,f=map(eval,point.split())
            list.append(a)
            list.append(b)
            list.append(c)
            list.append(d)
            list.append(e)
            list.append(f)
            row_data=list
            print(row_data)
            #row_data=list(eval(input()))
            point_arr.append(row_data)
        #######以下为数据处理过程
        point_arr=np.array(point_arr)
        data_scale=0.006
        max_z=np.max(point_arr[:,2])
        min_z=np.min(point_arr[:,2])
        moveZ=(max_z+min_z)/2
        point_arr[:,0]=point_arr[:,0]*data_scale
        point_arr[:,1]=point_arr[:,1]*data_scale
        point_arr[:,2]=(point_arr[:,2]-moveZ)*data_scale
        
        #######将处理完的数据写入文件
        f_output=open('{name}','w')
        for points in point_arr:
            i = 0 
            for point in points:
                if i<3:
                    point=float('%.6f' %point)
                f_output.write(str(point))
                f_output.write(' ')
                i += 1
            f_output.write('\n')
        f_output.close()
        
