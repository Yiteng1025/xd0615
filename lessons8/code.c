#include <Adafruit_NeoPixel.h>  //导入头文件

#define PIN 2	 // 输入像素Neopixel连接到

#define NUMPIXELS      12 // 条中新像素的数量

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
//创建对象

int delayval = 100; // 定时延迟（以毫秒为单位）

int redColor = 0;
int greenColor = 0;
int blueColor = 0;

void setup() {   // 初始化NeoPixel库。
  pixels.begin();
}

void loop() {
  setColor();

  for (int i=0; i < NUMPIXELS; i++) {
    // 像素。颜色采用RGB值，从0到255
    pixels.setPixelColor(i, pixels.Color(redColor, greenColor, blueColor));

    // 这会将更新后的像素颜色发送到硬件。
    pixels.show();

    // 延迟一段时间（以毫秒为单位）。
    delay(delayval);
  }
}

// setColor()
// 选择随机值以设置RGB
void setColor(){
  redColor = random(0, 255);        //从0到255随机生成一个像素值
  greenColor = random(0,255);       //从0到255随机生成一个像素值
  blueColor = random(0, 255);       //从0到255随机生成一个像素值
}