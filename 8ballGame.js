var userName = '';
const userQuestion = 'Will I become a werewolf tonight?';

userName ? console.log('Hello, ' + userName) : console.log('Hello,');

console.log('So you just actually asked me: ' + userQuestion );

var randomNumber = Math.floor(Math.random() * 4);
var eightBall = '';

switch (randomNumber) {
  case 0:
    eightBall = 'It is certain';
    break;
  case 1:
    eightBall = 'It is decidedly so';
    break;  
  case 2:
    eightBall = 'Nope NOPe NOPE';
    break; 
  case 3:
    eightBall = 'No no no no no no no no, yes!';
    break; 
}

console.log(eightBall)
