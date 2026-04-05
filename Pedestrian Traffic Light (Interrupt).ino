// C++ code

// Pin LED
// Kendaraan
const int KendM = 13; 
const int KendK = 12; 
const int KendH = 11;

// Pedestrian 
const int PedM = 9; 
const int PedH = 8;

// Pin Tombol 
const int Tombol_1 = 3; 
const int Tombol_2 = 2;

volatile bool interruptTriggered = false; 

void btnInterrupt() { 
  interruptTriggered = true; 
}

void setup() {
  pinMode(KendM, OUTPUT); 
  pinMode(KendK, OUTPUT); 
  pinMode(KendH, OUTPUT);
  
  pinMode(PedM, OUTPUT); 
  pinMode(PedH, OUTPUT);
  
  pinMode(Tombol_1, INPUT_PULLUP); 
  pinMode(Tombol_2, INPUT_PULLUP);
  
  attachInterrupt(digitalPinToInterrupt(Tombol_1), btnInterrupt, FALLING); 
  attachInterrupt(digitalPinToInterrupt(Tombol_2), btnInterrupt, FALLING);
  
  // Kondisi Awal 
  digitalWrite(PedM, HIGH); 
  digitalWrite(KendH, HIGH); 
}

void loop() { 
  if (interruptTriggered) { 
    interruptTriggered = false;	
    // Matikan Kondisi Awal
    digitalWrite(PedM, LOW);
    digitalWrite(KendH, LOW);
    
    // Nyalain Lampu Penyebrangan
    digitalWrite(PedH, HIGH); 
    digitalWrite(KendM, HIGH); 
    delay(5000); 
    
    // Akhiri Penyebrangan
    digitalWrite(KendM, LOW);
    
    digitalWrite(PedH, LOW); 
    digitalWrite(PedM, HIGH);
    
    for (int i = 0; i < 3; i++) { 
      digitalWrite(KendK, HIGH); 
      delay(300); 
      digitalWrite(KendK, LOW); 
      delay(300); 
    } 
  }
  
  // Kembali ke Kondisi Awal
  digitalWrite(KendH, HIGH); 
}
