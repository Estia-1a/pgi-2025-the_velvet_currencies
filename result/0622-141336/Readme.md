# Daily Evaluation 22/06 - 14:13:36
You can find below how you did for each feature. 
 You should merge the pull request to keep the eval and automatically close and open the issues you have finished!
# Milestone  Tutorial
Score : 4/23 :  17%
## Detail by Feature
| Feature     | Score       | Missed tests                                                                                                                                                                                              | Stdout                            |
| :---------- | :---------- | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :-------------------------------- |
| dimension   | 0/4 :  0%   | Dimension 64x64<br>Dimension 1x1<br>Dimension 32x64<br>Dimension 64x32                                                                                                                                    | 64 , 64<br>1 , 1<br>32 , 64<br>6… |
| first_pixel | 0/5 :  0%   | First Pixel 64x64 : 255,0,0<br>First Pixel Red : 255,0,0<br>First Pixel Green : 0,255,0<br>First Pixel Blue : 0,0,255<br>First Pixel 1 2 3 : 1,2,3                                                        | first_pixel 255 0 0<br>first_pix… |
| tenth_pixel | 0/5 :  0%   | Tenth Pixel 64x64 : 255,0,0<br>Tenth Pixel Red : 255,0,0<br>Tenth Pixel Green : 0,255,0<br>Tenth Pixel Blue : 0,0,255<br>Tenth Pixel 11 12 13 : 1,2,3                                                     | tenth_pixel: 0,255,0<br>tenth_pi… |
| second_line | 0/5 :  0%   | Second line First Pixel 64x64 : 255,0,0<br>Second line First Pixel Red : 255,0,0<br>Second line First Pixel Green : 0,255,0<br>Second line First Pixel Blue : 0,0,255<br>Second line First Pixel 21 22 23 | <br><br><br><br>                  |
| print_pixel | 4/4 :  100% |                                                                                                                                                                                                           |                                   |

# Milestone  statistiques
Score : 14/26 :  53%
## Detail by Feature
| Feature         | Score       | Missed tests                                                                        | Stdout                            |
| :-------------- | :---------- | :---------------------------------------------------------------------------------- | :-------------------------------- |
| max_pixel       | 4/4 :  100% |                                                                                     |                                   |
| min_pixel       | 4/4 :  100% |                                                                                     |                                   |
| min_component R | 0/3 :  0%   | Min Component R of black 8x8<br>Min Component R of white 8x8<br>Min Component 2 0 5 | min_component R : (0,0)<br>min_c… |
| min_component G | 0/3 :  0%   | Min Component G of black 8x8<br>Min Component G of white 8x8<br>Min Component 2 0 5 | min_component G : (0,0)<br>min_c… |
| min_component B | 0/3 :  0%   | Min Component B of black 8x8<br>Min Component B of white 8x8<br>Min Component 2 0 5 | min_component B : (0,0)<br>min_c… |
| max_component R | 2/3 :  66%  | Max Component 2 0 255                                                               | max_component R (1, 0): 255       |
| max_component G | 2/3 :  66%  | Max Component 2 0 255                                                               | max_component G (1, 0): 255       |
| max_component B | 2/3 :  66%  | Max Component 2 0 255                                                               | max_component B (1, 0): 255       |

# Milestone  colors
Score : 29.779999999999998/35 :  85%
## Detail by Feature
| Feature              | Score                      | Missed tests                                                                                                                                         | Stdout           |
| :------------------- | :------------------------- | :--------------------------------------------------------------------------------------------------------------------------------------------------- | :--------------- |
| color_red            | 5/5 :  100%                |                                                                                                                                                      |                  |
| color_blue           | 5/5 :  100%                |                                                                                                                                                      |                  |
| color_green          | 5/5 :  100%                |                                                                                                                                                      |                  |
| color_gray           | 5/5 :  100%                |                                                                                                                                                      |                  |
| color_invert         | 5/5 :  100%                |                                                                                                                                                      |                  |
| color_gray_luminance | 4.779999999999999/5 :  95% |                                                                                                                                                      |                  |
| color_desaturate     | 0/5 :  0%                  | Convert red image to GRAY<br>Convert blue image to GRAY<br>Convert green Image to GRAY<br>Convert white Image to GRAY<br>convert black Image to GRAY | <br><br><br><br> |

# Milestone  transform
Score : 6/15 :  40%
## Detail by Feature
| Feature           | Score       | Missed tests                                                   | Stdout   |
| :---------------- | :---------- | :------------------------------------------------------------- | :------- |
| rotate_cw         | 0/3 :  0%   | rotate square image<br>rotate large image<br>rotate high image | <br><br> |
| rotate_acw        | 0/3 :  0%   | rotate square image<br>rotate large image<br>rotate high image | <br><br> |
| mirror_horizontal | 0/3 :  0%   | mirror square image<br>mirror large image<br>mirror high image | <br><br> |
| mirror_vertical   | 3/3 :  100% |                                                                |          |
| mirror_total      | 3/3 :  100% |                                                                |          |

# Milestone  resize
Score : 0/60 :  0%
## Detail by Feature
| Feature        | Score      | Missed tests                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           | Stdout                            |
| :------------- | :--------- | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :-------------------------------- |
| scale_nearest  | 0/20 :  0% | scale_nearest 0.3<br>scale_nearest 0.5<br>scale_nearest 2<br>scale_nearest 1.3<br>scale_nearest 0.3<br>scale_nearest 0.5<br>scale_nearest 2<br>scale_nearest 1.3<br>scale_nearest 0.3<br>scale_nearest 0.5<br>scale_nearest 2<br>scale_nearest 1.3<br>scale_nearest 0.3<br>scale_nearest 0.5<br>scale_nearest 2<br>scale_nearest 1.3<br>scale_nearest 0.3<br>scale_nearest 0.5<br>scale_nearest 2<br>scale_nearest 1.3                                                                                 | <br><br><br><br><br><br><br><br>… |
| scale_bilinear | 0/20 :  0% | scale_bilinear 0.21<br>scale_bilinear 0.76<br>scale_bilinear 1.41<br>scale_bilinear 2.12<br>scale_bilinear 0.21<br>scale_bilinear 0.76<br>scale_bilinear 1.41<br>scale_bilinear 2.12<br>scale_bilinear 0.21<br>scale_bilinear 0.76<br>scale_bilinear 1.41<br>scale_bilinear 2.12<br>scale_bilinear 0.21<br>scale_bilinear 0.76<br>scale_bilinear 1.41<br>scale_bilinear 2.12<br>scale_bilinear 0.21<br>scale_bilinear 0.76<br>scale_bilinear 1.41<br>scale_bilinear 2.12                               | <br><br><br><br><br><br><br><br>… |
| scale_crop     | 0/20 :  0% | scale_crop 0 0 10 10<br>scale_crop 100 100 90 90<br>scale_crop 1 1 3 3<br>scale_crop 1 1 10 10<br>scale_crop 0 0 10 10<br>scale_crop 100 100 90 90<br>scale_crop 1 1 3 3<br>scale_crop 1 1 10 10<br>scale_crop 0 0 10 10<br>scale_crop 100 100 90 90<br>scale_crop 1 1 3 3<br>scale_crop 1 1 10 10<br>scale_crop 0 0 10 10<br>scale_crop 100 100 90 90<br>scale_crop 1 1 3 3<br>scale_crop 1 1 10 10<br>scale_crop 0 0 10 10<br>scale_crop 100 100 90 90<br>scale_crop 1 1 3 3<br>scale_crop 1 1 10 10 | <br><br><br><br><br><br><br><br>… |

