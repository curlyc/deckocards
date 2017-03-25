#include "Arduboy2.h"
Arduboy2 ab;
// 0 is not drawn 1 has been drawn
int carddraw = 0;
int ad = 0; //ace of daimonds
int d2 = 0; //2 of diamonds
int d3 = 0; //3 of diamonds
int d4 = 0; //4 of daimonds
int d5 = 0; //5 of daimonds
int d6 = 0; //6 of daimonds
int d7 = 0; //7 of daimonds
int d8 = 0; //8 of daimonds
int d9 = 0; //9 of daimonds
int d10 = 0;//10 of daimonds
int jd = 0;//jack of daimonds
int qd = 0;//queen of daimonds
int kd = 0;//king of daimonds
int ah = 0; //ace of hearts
int h2 = 0; //2 of hearts
int h3 = 0; //3 of hearts
int h4 = 0; //4 of hearts
int h5 = 0; //5 of hearts
int h6 = 0; //6 of hearts
int h7 = 0; //7 of hearts
int h8 = 0; //8 of hearts
int h9 = 0; //9 of hearts
int h10 = 0;//10 of hearts
int jh = 0;//jack of hearts
int qh = 0;//queen of hearts
int kh = 0;//king of hearts
int ac = 0; //ace of clubs
int c2 = 0; //2 of clubs
int c3 = 0; //3 of clubs
int c4 = 0; //4 of clubs
int c5 = 0; //5 of clubs
int c6 = 0; //6 of clubs
int c7 = 0; //7 of clubs
int c8 = 0; //8 of clubs
int c9 = 0; //9 of clubs
int c10 = 0;//10 of clubs
int jc = 0;//jack of clubs
int qc = 0;//queen of clubs
int kc = 0;//king of clubs
int sa = 0; //ace of spades
int s2 = 0; //2 of spades
int s3 = 0; //3 of spades
int s4 = 0; //4 of spades
int s5 = 0; //5 of spades
int s6 = 0; //6 of spades
int s7 = 0; //7 of spades
int s8 = 0; //8 of spades
int s9 = 0; //9 of spades
int s10 = 0;//10 of spades
int js = 0;//jack of spades
int qs = 0;//queen of spades
int ks = 0;//king of spades
//

void setup() {
ab.begin();
ab.setFrameRate(60);
ab.clear();
}

void loop() {
   if (!(ab.nextFrame()))
    return;
    ab.clear();

 if (ab.pressed(UP_BUTTON)){
    carddraw = random(1 ,52);
  }
// SUIT OF DAIMONDS
 if ((carddraw == 1) && (ad == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("A DIAMONDS");
  ad = 1;
 }
 else if ((carddraw == 2) && (d2 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("2 of DIAMONDS");
  d2 = 1;
 }
else if ((carddraw == 3) && (d3 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("3 of DIAMONDS");
  d3 = 1;
 }
 else if ((carddraw == 4) && (d4 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("4 of DIAMONDS");
  d4 = 1;
 }
 else if ((carddraw == 5) && (d5 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("2 of DIAMONDS");
  d5 = 1;
 }
 else if ((carddraw == 6) && (d6 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("6 of DIAMONDS");
  d6 = 1;
 }
 else if ((carddraw == 7) && (d7 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("7 of DIAMONDS");
  d7 = 1;
 }
 else if ((carddraw == 8) && (d8 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("8 of DIAMONDS");
  d8 = 1;
 }
 else if ((carddraw == 9) && (d9 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("9 of DIAMONDS");
  d9 = 1;
 }
 else if ((carddraw == 10) && (d10 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("10 of DIAMONDS");
  d10 = 1;
 }
 else if ((carddraw == 11) && (jd == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("JACK of DIAMONDS");
  jd = 1;
 }
 else if ((carddraw == 12) && (qd == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("QUEEN of DIAMONDS");
  qd = 1;
 }
 else if ((carddraw == 13) && (kd == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("KING of DIAMONDS");
  kd = 1;
 }
 // SUIT OF HEARTS
  if ((carddraw == 14) && (ah == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("A of HEARTS");
  ah = 1;
 }
 else if ((carddraw == 15) && (h2 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("2 of HEARTS");
  h2 = 1;
 }
else if ((carddraw == 16) && (h3 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("3 of HEARTS");
  h3 = 1;
 }
 else if ((carddraw == 17) && (h4 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("4 of HEARTS");
  h4 = 1;
 }
 else if ((carddraw == 18) && (h5 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("5 of HEARTS");
  h5 = 1;
 }
 else if ((carddraw == 19) && (h6 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("6 of HEARTS");
  h6 = 1;
 }
 else if ((carddraw == 20) && (h7 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("7 of HEARTS");
  h7 = 1;
 }
 else if ((carddraw == 21) && (h8 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("8 of HEARTS");
  h8 = 1;
 }
 else if ((carddraw == 22) && (h9 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("9 of HEARTS");
  h9 = 1;
 }
 else if ((carddraw == 23) && (h10 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("10 of HEARTS");
  h10 = 1;
 }
 else if ((carddraw == 24) && (jh == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("JACK of HEARTS");
  jh = 1;
 }
 else if ((carddraw == 25) && (qh == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("QUEEN of HEARTS");
  qh = 1;
 }
 else if ((carddraw == 26) && (kh == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("KING of HEARTS");
  kh = 1;
 }
 // SUIT OF CLUBS
  if ((carddraw == 27) && (ac == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("A of CLUBS");
  ac = 1;
 }
 else if ((carddraw == 28) && (c2 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("2 of CLUBS");
  c2 = 1;
 }
else if ((carddraw == 29) && (c3 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("3 of CLUBS");
  c3 = 1;
 }
 else if ((carddraw == 30) && (c4 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("4 of CLUBS");
  c4 = 1;
 }
 else if ((carddraw == 31) && (c5 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("5 of CLUBS");
  c5 = 1;
 }
 else if ((carddraw == 32) && (c6 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("6 of CLUBS");
  c6 = 1;
 }
 else if ((carddraw == 33) && (c7 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("7 of CLUBS");
  c7 = 1;
 }
 else if ((carddraw == 34) && (c8 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("8 of CLUBS");
  c8 = 1;
 }
 else if ((carddraw == 35) && (c9 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("9 of CLUBS");
  c9 = 1;
 }
 else if ((carddraw == 36) && (c10 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("10 of CLUBS");
  c10 = 1;
 }
 else if ((carddraw == 37) && (jc == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("JACK of CLUBS");
  jc = 1;
 }
 else if ((carddraw == 38) && (qc == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("QUEEN of CLUBS");
  qc = 1;
 }
 else if ((carddraw == 39) && (kc == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("KING of CLUBS");
  kc = 1;
 }
  // SUIT OF SPADES
  if ((carddraw == 40) && (sa == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("A of SPADES");
  sa = 1;
 }
 else if ((carddraw == 41) && (s2 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("2 of SPADES");
  s2 = 1;
 }
else if ((carddraw == 42) && (s3 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("3 of SPADES");
  s3 = 1;
 }
 else if ((carddraw == 43) && (s4 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("4 of SPADES");
  s4 = 1;
 }
 else if ((carddraw == 44) && (s5 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("5 of SPADES");
  s5 = 1;
 }
 else if ((carddraw == 45) && (s6 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("6 of SPADES");
  s6 = 1;
 }
 else if ((carddraw == 46) && (s7 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("7 of SPADES");
  s7 = 1;
 }
 else if ((carddraw == 47) && (s8 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("8 of SPADES");
  s8 = 1;
 }
 else if ((carddraw == 48) && (s9 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("9 of SPADES");
  s9 = 1;
 }
 else if ((carddraw == 49) && (s10 == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("10 of SPADES");
  s10 = 1;
 }
 else if ((carddraw == 50) && (js == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("JACK of SPADES");
  js  = 1;
 }
 else if ((carddraw == 51) && (qs == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("QUEEN of SPADES");
  qs = 1;
 }
 else if ((carddraw == 52) && (ks == 0)) {
   ab.setCursor((30), (10)); 
  ab.print("KING of SPADES");
  ks = 1;
 }
  else {
    carddraw = (random (1 ,52));
  }
ab.display();
}
