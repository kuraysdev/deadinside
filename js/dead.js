function deadinside(num) {
  if(num < 7) return;
  let num2 = num - 7;
  console.log(num + ' - 7 = ' + num2);
  deadinside(num2);
}

console.log('Я гуль');
deadinside(1000);
