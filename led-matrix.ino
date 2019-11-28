#define ROW_1 2
#define ROW_2 3
#define ROW_3 4
#define ROW_4 5
#define ROW_5 6
#define ROW_6 7
#define ROW_7 8
#define ROW_8 9

#define COL_1 10
#define COL_2 11
#define COL_3 12
#define COL_4 13
#define COL_5 A0
#define COL_6 A1
#define COL_7 A2
#define COL_8 A3

const byte rows[] = {
  ROW_1, ROW_2, ROW_3, ROW_4, ROW_5, ROW_6, ROW_7, ROW_8
};
const byte col[] = {
  COL_1, COL_2, COL_3, COL_4, COL_5, COL_6, COL_7, COL_8
};

byte ALL[] = {B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111};
byte EX[] = {B00000000, B00010000, B00010000, B00010000, B00010000, B00000000, B00010000, B00000000};
byte A[] = {B00000000, B00111100, B01100110, B01100110, B01111110, B01100110, B01100110, B01100110};
byte B[] = {B01111000, B01001000, B01001000, B01110000, B01001000, B01000100, B01000100, B01111100};
byte C[] = {B00000000, B00011110, B00100000, B01000000, B01000000, B01000000, B00100000, B00011110};
byte D[] = {B00000000, B00111000, B00100100, B00100010, B00100010, B00100100, B00111000, B00000000};
byte E[] = {B00000000, B00111100, B00100000, B00111000, B00100000, B00100000, B00111100, B00000000};
byte F[] = {B00000000, B00111100, B00100000, B00111000, B00100000, B00100000, B00100000, B00000000};
byte G[] = {B00000000, B00111110, B00100000, B00100000, B00101110, B00100010, B00111110, B00000000};
byte H[] = {B00000000, B00100100, B00100100, B00111100, B00100100, B00100100, B00100100, B00000000};
byte I[] = {B00000000, B00111000, B00010000, B00010000, B00010000, B00010000, B00111000, B00000000};
byte J[] = {B00000000, B00011100, B00001000, B00001000, B00001000, B00101000, B00111000, B00000000};
byte K[] = {B00000000, B00100100, B00101000, B00110000, B00101000, B00100100, B00100100, B00000000};
byte L[] = {B00000000, B00100000, B00100000, B00100000, B00100000, B00100000, B00111100, B00000000};
byte M[] = {B00000000, B00000000, B01000100, B10101010, B10010010, B10000010, B10000010, B00000000};
byte N[] = {B00000000, B00100010, B00110010, B00101010, B00100110, B00100010, B00000000, B00000000};
byte O[] = {B00000000, B00111100, B01000010, B01000010, B01000010, B01000010, B00111100, B00000000};
byte P[] = {B00000000, B00111000, B00100100, B00100100, B00111000, B00100000, B00100000, B00000000};
byte Q[] = {B00000000, B00111100, B01000010, B01000010, B01000010, B01000110, B00111110, B00000001};
byte R[] = {B00000000, B00111000, B00100100, B00100100, B00111000, B00100100, B00100100, B00000000};
byte S[] = {B00000000, B00111100, B00100000, B00111100, B00000100, B00000100, B00111100, B00000000};
byte T[] = {B00000000, B01111100, B00010000, B00010000, B00010000, B00010000, B00010000, B00000000};
byte U[] = {B00000000, B01000010, B01000010, B01000010, B01000010, B00100100, B00011000, B00000000};
byte V[] = {B00000000, B00100010, B00100010, B00100010, B00010100, B00010100, B00001000, B00000000};
byte W[] = {B00000000, B10000010, B10010010, B01010100, B01010100, B00101000, B00000000, B00000000};
byte X[] = {B00000000, B01000010, B00100100, B00011000, B00011000, B00100100, B01000010, B00000000};
byte Y[] = {B00000000, B01000100, B00101000, B00010000, B00010000, B00010000, B00010000, B00000000};
byte Z[] = {B00000000, B00111100, B00000100, B00001000, B00010000, B00100000, B00111100, B00000000};

byte SPACE[] = {B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111};

byte LETTERS[][8] = {
  {B00000000, B00111100, B01100110, B01100110, B01111110, B01100110, B01100110, B01100110},
  {B01111000, B01001000, B01001000, B01110000, B01001000, B01000100, B01000100, B01111100},
  {B00000000, B00011110, B00100000, B01000000, B01000000, B01000000, B00100000, B00011110},
  {B00000000, B00111000, B00100100, B00100010, B00100010, B00100100, B00111000, B00000000},
  {B00000000, B00111100, B00100000, B00111000, B00100000, B00100000, B00111100, B00000000},
  {B00000000, B00111100, B00100000, B00111000, B00100000, B00100000, B00100000, B00000000},
  {B00000000, B00111110, B00100000, B00100000, B00101110, B00100010, B00111110, B00000000},
  {B00000000, B00100100, B00100100, B00111100, B00100100, B00100100, B00100100, B00000000},
  {B00000000, B00111000, B00010000, B00010000, B00010000, B00010000, B00111000, B00000000},
  {B00000000, B00011100, B00001000, B00001000, B00001000, B00101000, B00111000, B00000000},
  {B00000000, B00100100, B00101000, B00110000, B00101000, B00100100, B00100100, B00000000},
  {B00000000, B00100000, B00100000, B00100000, B00100000, B00100000, B00111100, B00000000},
  {B00000000, B00000000, B01000100, B10101010, B10010010, B10000010, B10000010, B00000000},
  {B00000000, B00100010, B00110010, B00101010, B00100110, B00100010, B00000000, B00000000},
  {B00000000, B00111100, B01000010, B01000010, B01000010, B01000010, B00111100, B00000000},
  {B00000000, B00111000, B00100100, B00100100, B00111000, B00100000, B00100000, B00000000},
  {B00000000, B00111100, B01000010, B01000010, B01000010, B01000110, B00111110, B00000001},
  {B00000000, B00111000, B00100100, B00100100, B00111000, B00100100, B00100100, B00000000},
  {B00000000, B00111100, B00100000, B00111100, B00000100, B00000100, B00111100, B00000000},
  {B00000000, B01111100, B00010000, B00010000, B00010000, B00010000, B00010000, B00000000},
  {B00000000, B01000010, B01000010, B01000010, B01000010, B00100100, B00011000, B00000000},
  {B00000000, B00100010, B00100010, B00100010, B00010100, B00010100, B00001000, B00000000},
  {B00000000, B10000010, B10010010, B01010100, B01010100, B00101000, B00000000, B00000000},
  {B00000000, B01000010, B00100100, B00011000, B00011000, B00100100, B01000010, B00000000},
  {B00000000, B01000100, B00101000, B00010000, B00010000, B00010000, B00010000, B00000000},
  {B00000000, B00111100, B00000100, B00001000, B00010000, B00100000, B00111100, B00000000}
};

byte DISP[] = {B10010001,
               B00010000,
               B00010000,
               B00010000,
               B00010000,
               B00010000,
               B00010000,
               B10010001
              };

byte initialBoard[8] = {
  B00000000,
  B00000000,
  B00011000,
  B00011000,
  B00000000,
  B00000000,
  B00000000,
  B00000000
};
byte newBoard[8];


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  // Set all used pins to OUTPUT
  // This is very important! If the pins are set to input
  // the display will be very dim.
  for (byte i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);

  for (int i = 0; i < 8; i++) {
    newBoard[i] = initialBoard[i];
  }
}

int time_count = 0;

void loop() {
  byte staticBoard[8];
  for (int i = 0; i < 8; i++) {
    staticBoard[i] = newBoard[i];
  }
  
  for (int i = 0; i < 2000; i++) {
    drawScreen(staticBoard);
  }

  evolve(staticBoard, newBoard);


  // put your main code here, to run repeatedly:
  // time_count++;

  //  parser("ZOE", 3);
  //
  //  // space
  //  delay(1000);
  //
  //  parser("Peter", 5);
  //
  //  // space
  //  delay(1000);
  //
  //  parser("Mike", 4);
  //
  //  // space
  //  delay(1000);
}

void parser(char value[], int length) {
  if (length <= 0) {
    return;
  }
  byte disp[8];
  for (int i = 0; i < length; i++) {
    char c = value[i];
    lookup(c, disp);

    for (int j = 0; j < 2000; j++) {
      drawScreen(disp);
    }
  }
}

void  drawScreen(byte buffer2[]) {
  // Turn on each row in series
  for (byte i = 0; i < 8; i++) {
    digitalWrite(rows[i], HIGH);    //initiate whole row
    for (byte a = 0; a < 8; a++) {
      // if You set (~buffer2[i] >> a) then You will have positive
      digitalWrite(col[a], (~buffer2[i] >> a) & 0x01); // initiate whole column

      // delayMicroseconds(100);       // uncoment deley for diferent speed of display
      // delayMicroseconds(1000);
      //delay(10);
      //delay(100);

      digitalWrite(col[a], 1);      // reset whole column
    }
    digitalWrite(rows[i], LOW);     // reset whole row
    // otherwise last row will intersect with next row
  }
}

char lowerToUpper(char c) {
  if (c <= 90 && c >= 65) {
    return c;
  }
  if (c < 97 || c > 122) {
    return 0;
  }

  return c - 32;
}

void lookup(char c, byte disp[]) {
  char capitalChar = lowerToUpper(c);
  if (c == 0) {
    return;
  }

  int index = (int)capitalChar - 65;
  for (int i = 0; i < 8; i++) {
    disp[i] = LETTERS[index][i];
  }
}

// 1. Any live cell with two or three neighbors survives.
// 2. Any dead cell with three live neighbors becomes a live cell.
// 3. All other live cells die in the next generation. Similarly, all other dead cells stay dead.

void evolve(byte board[8], byte newBoard[8]) {
  for (byte row = 0; row < 8; row++) {
    for (byte col = 0; col < 8; col++) {
      byte cell = (board[row] >> col) & 0x01;
      int count = 0;
      for (char sibRow = -1; sibRow < 2; sibRow++) {
        for (char sibCol = -1; sibCol < 2; sibCol++) {
          if (sibRow != 0 && sibCol != 0) {
            char siblingRow = (row + sibRow) % 8;
            char siblingCol = (col + sibCol) % 8;
            byte siblingCell = (board[siblingRow] >> siblingCol) & 0x01;
            if (siblingCell == 1) {
              count++;
            }
          }
        }
      }

      if (cell == 1) {
        if (count < 2 || count > 3) {
          newBoard[row] = newBoard[row] & (~(0x01 << col));
        }
        if (count == 2 || count == 3) {
          newBoard[row] = newBoard[row] | (0x01 << col);
        }
      }

      if (cell == 0) {
        if (count == 3) {
          newBoard[row] = newBoard[row] | (0x01 << col);
        }
      }
    }
  }
}
