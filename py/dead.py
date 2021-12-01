def deadinside(num):
  if(num<7): return;
  num2 = num - 7;
  print(num,"- 7 =",num2);
  deadinside(num2);

print("Я гуль");
deadinside(1000);
