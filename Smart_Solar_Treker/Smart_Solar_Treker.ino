// Пины для управления моторами DC
const int motorXPin1 = 8; // Подключение пина 8 к IN1 на драйвере
const int motorXPin2 = 7; // Подключение пина 7 к IN2 на драйвере
const int motorYPin1 = 12; // Подключение пина 12 к IN3 на драйвере
const int motorYPin2 = 11; // Подключение пина 11 к IN4 на драйвере
// Пины для управления скоростью моторов
const int ENA = 9; // Пин управления скоростью мотора X
const int ENB = 10; // Пин управления скоростью мотора Y
// Переменные для хранения текущих координат
int xPos = 0;
int yPos = 0;
void setup() {
// Инициализация пинов для управления моторами DC
pinMode(motorXPin1, OUTPUT);
pinMode(motorXPin2, OUTPUT);
pinMode(motorYPin1, OUTPUT);
pinMode(motorYPin2, OUTPUT);
// Инициализация пинов для управления скоростью моторов
pinMode(ENA, OUTPUT);
pinMode(ENB, OUTPUT);
}
void loop() {
// Считывание значений с фоторезисторов
int tl = analogRead(A0);
int tr = analogRead(A1);
int bl = analogRead(A2);
int br = analogRead(A3);
// Вычисление средних значений и разницы между значениями LDR
int avgX1 = (tl + tr) / 2; // Среднее значение между tl и tr
int avgX2 = (bl + br) / 2; // Среднее значение между bl и br
int avgY1 = (tr + br) / 2; // Среднее значение между tr и br
int avgY2 = (tl + bl) / 2; // Среднее значение между tl и bl
int diffX = abs(avgX1 - avgX2); // Разница между avgX1 и avgX2
int diffY = abs(avgY1 - avgY2); // Разница между avgY1 и avgY2
// Управление мотором X
if (diffX > 2) {
if (avgX1 > avgX2) {
digitalWrite(motorXPin1, HIGH);
digitalWrite(motorXPin2, LOW);
analogWrite(ENA, 255);
} else {
digitalWrite(motorXPin1, LOW);
digitalWrite(motorXPin2, HIGH);
analogWrite(ENA, 255);
}
} else {
digitalWrite(motorXPin1, LOW);
digitalWrite(motorXPin2, LOW);
}
// Управление мотором Y
if (diffY > 2) {
if (avgY1 > avgY2) {
digitalWrite(motorYPin1, HIGH);
digitalWrite(motorYPin2, LOW);
analogWrite(ENB, 255);
} else {
digitalWrite(motorYPin1, LOW);
digitalWrite(motorYPin2, HIGH);
analogWrite(ENB, 255);
}
} else {
digitalWrite(motorYPin1, LOW);
digitalWrite(motorYPin2, LOW);
}
}   
