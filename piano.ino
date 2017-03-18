#define NTD0 -1
#define NTD1 294
#define NTD2 330
#define NTD3 350
#define NTD4 393
#define NTD5 441
#define NTD6 495
#define NTD7 556

#define NTDL1 147
#define NTDL2 165
#define NTDL3 175
#define NTDL4 196
#define NTDL5 221
#define NTDL6 248
#define NTDL7 278

#define NTDH1 589
#define NTDH2 661
#define NTDH3 700
#define NTDH4 786
#define NTDH5 882
#define NTDH6 990
#define NTDH7 112
//c pinlv
#define WHOLE 1
#define HALF 0.5
#define QUARTER 0.25
#define EIGHTH 0.25
#define SIXTEENTH 0.625

int tune[]=
{
  NTD2,NTD3,
  // wo zai

  NTD2,NTD3,NTD3,NTD2,NTD2,NTD3,NTD0,NTDL5,NTD1,
  // we huan lu de li bian xiang zhe 

  NTDL6,NTD0,NTD0,NTD0,NTD1,NTD2,
  // ni  ni zai

  NTD2,NTD3,NTD0,NTD2,NTD5,NTD3,NTD5,NTD3,NTD1,
  // yuan fang de shan shang chun feng shi

  NTDL6,NTD0,NTD0,NTD0,NTD5,NTD5,NTD3,
  //li  jin tian de 

  NTD5,NTD5,NTD6,NTD5,NTD0,NTD1,NTD2,
  // feng cui xiang ni  xiale 

  NTDL6,NTD0,NTD0,NTD0,NTD1,NTD2,
  //yu wo shuo

  NTD3,NTD2,NTD3,NTDL5,NTD0,NTDL5,NTDL5,NTD2,
  //suo you de jiu dou bu ru 

  NTD1,NTD0,NTD0,NTD1,NTD2,
  // ni wo zai 

  NTD2,NTD3,NTD3,NTD3,NTD2,NTD5,NTD5,NTD3,NTD3,NTD2,NTD3,NTD1,
  //gu lou de ye se zhong wei ni chang hua xiang zi

  NTDL6,NTD0,NTD0,NTD0,NTD1,NTD2,
  //lai zai bie 

  NTD3,NTD3,NTD5,NTD5,NTD3,NTD0,NTDL5,NTD1,
  //chu chen mo xiang yu he qi 

  NTDL6,NTD0,NTD0,NTD0,NTD5,NTD5,NTD3,
  //dai fei ji fei

  NTD5,NTD5,NTD3,NTD3,NTD5,NTD0,NTDL5,NTD1,
  //guo che shui ma long de cheng

  NTDL6,NTD0,NTD0,NTD0,NTD1,NTD2,
  //shi qian li

  NTD3,NTDL5,NTD0,NTDL5,NTD2,
  //zhi wai bu li

  NTD1,NTD0,NTD0,NTD3,NTD3,NTD3,NTD5,
  //kai   ba suo you de 

  NTD6,NTD6,NTD5,NTD6,NTDH1,NTDH1,NTDH1,NTD7,NTD3,
  // chun tian dou rou jin le yige qing

  NTD5,NTD0,NTD0,NTD3,NTD3,NTD3,NTD5,NTD5,
  // cheng  ba suo you ting bu

  NTD6,NTD6,NTD6,NTD5,NTD6,NTD5,NTDH2,NTDH1,NTDH1,NTD7,NTD2,
  //xia de yan yu  bian cheng mimi guan shang le

  NTD3,NTD0,NTD0,NTD0,NTD3,NTD2,NTD1,
  // men mo min de

  NTD2,NTD3,NTD2,NTD1,NTD2,NTDL5,NTDL5,NTD6,NTD5,NTD2,
  //qin su a  qing wen shei lai jiang ta dai

  NTD2,NTD3,NTD0,NTD0,NTD3,NTD2,NTD1,
  //zou ne  zhi hao ba

  NTD2,NTD2,NTD2,NTD1,NTD2,NTDL6,NTD1,NTD2,
  // sui yue hua cheng ge  liu zai shan

  NTD1,NTD0,NTD0,NTD3,NTD3,NTD3,NTD5,
  //he  ba suo you de

  NTD6,NTD6,NTD5,NTD6,NTDH1,NTDH1,NTDH1,NTD7,NTD3,
  // chuan tian dou rou jin le yi ge qing

  NTD5,NTD0,NTD0,NTD3,NTD3,NTD3,NTD5,NTD5,
  //cheng  ba suo you ting bu

  NTD6,NTD6,NTD6,NTD5,NTD6,NTD5,NTDH2,NTDH1,NTDH1,NTD7,NTD2,
  //xia de yan yu bian cheng mi mi guan shang le 

  NTD3,NTD0,NTD0,NTD0,NTD3,NTD2,NTD1,
  // men mo ming de

  NTD2,NTD3,NTD2,NTD1,NTD2,NTDL5,NTDL5,NTD6,NTD5,NTD2,
  //qin su a qin wen shei lai jiang ta dai 

  NTD2,NTD3,NTD0,NTD0,NTD3,NTD2,NTD1,
  //zou ne zhi hao ba 

  NTD2,NTD2,NTD2,NTD1,NTD2,NTDL6,NTD1,NTD2,
  //sui yue hua cheng ge liu zai shan

  NTD1,NTD0,NTD0,NTD2,NTD3,
  //he wo zai 
  
  NTD2,NTD3,NTD3,NTD3,NTD2,NTD3,NTD0,NTD5,NTD1,
  //er huan lu de li bian xiang zhe
  
  NTD6,NTD0,NTD0,NTD0,NTD1,NTD2,
  // ni ni zai

  NTD2,NTD3,NTD0,NTD2,NTD5,NTD3,NTD5,NTD3,
  //yuan fang de shan shang chun feng shi

  NTD6,NTD0,NTD0,NTD0,NTD5,NTD5,NTD3,
  //li jin tian de 

  NTD5,NTD5,NTD5,NTD6,NTD5,NTD0,NTD1,NTD2,
  //feng you cui xiang ni xia le 

  NTDL6,NTD0,NTD0,NTD0,NTD1,NTD2,
  //yu wo shuo

  NTD3,NTD2,NTD3,NTDL5,NTD0,NTDL5,NTDL5,NTD2,
  //suo you de jiu dou bu ru

  NTD1,NTD0,
  //ni
};
float durt[]=
{
  0.25,0.75,
  // wo zai

  0.25,0.75,0.25,0.25,0.25,1.25,0.5,0.25,0.25,
   // er huan lu de li bian xiang zhe

  1,1,1,0.5,0.25,0.25,
  // ni  ni zai

  0.25,0.75,0.25,0.25,0.25,1.25,0.5,0.5,0.5,
  // yuan fang de shan shang chun feng shi

  1,1,1,0.25,0.25,0.25,0.25,
 //li  jin tian de 

  1,0.5,0.25,1.25,0.5,0.25,0.25,
  // feng cui xiang ni  xiale

  1,1,1,0.5,0.25,0.25,
  //yu wo shuo

  0.25,0.25,0.25,0.375,0.75,0.25,0.5,0.5,
  //suo you de jiu dou bu ru 

  1,1,1,0.25,0.75,
  // ni wo zai 

  0.25,0.5,0.25,0.5,0.25,0.5,0.25,0.25,0.25,0.5,0.5,0.5,
  //gu lou de ye se zhong wei ni chang hua xiang zi

  1,1,1,0.5,0.25,0.25,
  //lai zai bie 

  1,0.25,0.75,0.25,0.75,0.5,0.25,0.25,
  //chu chen mo xiang yu he qi 

  1,1,1,0.25,0.25,0.25,0.25,
  //dai fei ji fei

  1,0.5,0.25,0.5,0.75,0.25,0.5,0.25,
  //guo che shui ma long de cheng

  1,1,1,0.5,0.25,0.25,
  //shi qian li

  0.25,1.35,1,0.5,0.5,
  //zhi wai bu li

  1,1,0.25,0.25,0.5,0.5,0.5,
  //kai   ba suo you de 

  0.5,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,
  // chun tian dou rou jin le yige qing

  1,1,0.75,0.25,0.25,0.25,0.25,0.25,
  // cheng  ba suo you ting bu

  0.25,0.25,0.25,0.25,0.5,0.25,0.5,0.75,0.5,0.5,0.5,
  //xia de yan yu  bian cheng mimi guan shang le

  1,1,1,0.25,0.25,0.25,0.25,
  // men mo min de

  0.5,0.25,0.75,0.25,0.75,0.25,0.25,0.25,0.5,0.25,
  //qin su a  qing wen shei lai jiang ta dai

  0.25,1.5,1,0.25,0.25,0.25,0.25,
  //zou ne  zhi hao ba

  0.5,0.5,0.5,0.25,1.25,0.5,0.5,0.5,
  // sui yue hua cheng ge  liu zai shan 

  1,1,0.5,0.25,0.25,0.25,0.25,0.25,
  //he  ba suo you de

  0.25,0.25,0.25,0.25,0.5,0.25,0.5,0.75,0.5,0.5,0.5,
  // chuan tian dou rou jin le yi ge qing

  1,1,1,0.25,0.25,0.25,0.25,
  //cheng  ba suo you ting bu

  0.5,0.25,1.25,0.25,1.25,0.25,0.25,0.25,0.5,0.25,
  //xia de yan yu bian cheng mi mi guan shang le 

  0.25,0.75,1,0.25,0.25,0.25,0.25,
  // men mo ming de

  0.5,0.5,0.5,0.25,1.25,0.5,0.5,0.5,
  //qin su a qin wen shei lai jiang ta dai 

  1,1,1,0.25,0.75,
  //zou ne zhi hao ba 

  0.25,0.75,0.25,0.25,0.25,1.25,0.5,0.25,0.25,
  //sui yue hua cheng ge liu zai shan

  1,1,1,0.25,0.75,
  //he wo zai 

  0.25 ,0.75,0.25,0.25,0.25,1.25,0.5,0.25,0.25,
  //er huan lu de li bian xiang zhe

  1,1,1,0.5,0.25,0.25,
  // ni ni zai

  0.25,0.75,0.25,0.25,0.25,1.25,0.5,0.5,0.5,
  //yuan fang de shan shang chun feng shi

  1,1,1,0.25,0.25,0.25,0.25,
  //li jin tian de 

  0.75,0.25,0.5,0.25,1.25,0.5,0.25,0.25,
  //feng you cui xiang ni xia le 
  
  1,1,1,0.5,0.25,0.25,
  //yu wo shuo

  0.25,0.25,0.25,1.25,0.75,0.25,0.5,0.5,
  //suo you de jiu dou bu ru

  1,1,
  //ni



};

int length;
int tonepin=6;
int ledp=1;
void setup()
{
  pinMode(tonepin,OUTPUT);
  pinMode(ledp,OUTPUT);
  length=sizeof(tune)/sizeof(tune[0]);
}
void loop()
{
  for(int x=0;x<length;x++)
  {
    tone(tonepin,tune[x]);
    digitalWrite(ledp, HIGH); 
    delay(900*durt[x]);
    noTone(tonepin);
    
  }
  delay(2000);
}

// huan le song
//----------------------
//   NTD3,NTD3,NTD4,NTD5,
//   NTD5,NTD4,NTD3,NTD2,
//   NTD1,NTD1,NTD2,NTD3,
//   NTD3,NTD2,NTD2,
//   NTD3,NTD3,NTD4,NTD5,
//   NTD5,NTD4,NTD3,NTD2,
//   NTD1,NTD1,NTD2,NTD3,
//   NTD2,NTD1,NTD1,
//   NTD2,NTD2,NTD3,NTD1,
//   NTD2,NTD3,NTD4,NTD3,NTD1,
//   NTD2,NTD3,NTD4,NTD3,NTD2,
//   NTD1,NTD2,NTDL5,NTD0,
//   NTD3,NTD3,NTD4,NTD5,
//   NTD5,NTD4,NTD3,NTD4,NTD2,
//   NTD1,NTD1,NTD2,NTD3,
//   NTD2,NTD1,NTD1
//   1,1,1,1,
//   1,1,1,1,
//   1,1,1,1,
//   1+0.5,0.5,1+1,
//   1,1,1,1,
//   1,1,1,1,
//   1,1,1,1,
//   1+0.5,0.5,1+1,
//   1,1,1,1,
//   1,0.5,0.5,1,1,
//   1,0.5,0.5,1,1,
//   1,1,1,1,
//   1,1,1,1,
//   1,1,1,0.5,0.5,
//   1,1,1,1,
//   1+0.5,0.5,1+1,