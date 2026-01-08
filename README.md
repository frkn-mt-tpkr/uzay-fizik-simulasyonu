# Uzay Fizik Simülasyonu (Space Physics Simulation)

Bu proje, Güneş Sistemi'ndeki 8 farklı gezegende temel fizik deneylerini simüle eden konsol tabanlı bir C uygulamasıdır. "Algoritmalar ve Programlama" dersi kapsamında geliştirilmiştir.

## 👨‍💻 Proje Sahibi
* **Adı Soyadı:** Furkan Umut Topkır
* **Ders:** Algoritmalar ve Programlama
* **Yıl:** 2026

## 🚀 Proje Hakkında
Uzay Fizik Simülasyonu, kullanıcıların Merkür, Venüs, Dünya, Mars, Jüpiter, Satürn, Uranüs ve Neptün gezegenlerinde 9 farklı fizik deneyini gerçekleştirmesine olanak tanır. Program, her gezegenin kendine özgü yerçekimi ivmesini (g) kullanarak hesaplamalar yapar ve sonuçları karşılaştırmalı olarak sunar.

### Özellikler
* **Kullanıcı Girişi:** Bilim insanı (kullanıcı) adı ile kişiselleştirilmiş deneyim.
* **Modüler Yapı:** Her deney için özelleştirilmiş fonksiyonlar.
* **Pointer Aritmetiği:** Dizi erişimleri pointer'lar kullanılarak yapılmıştır.
* **Girdi Doğrulama:** Negatif değer girişlerini engelleyen/düzelten kontrol mekanizmaları.

## 🧪 Deneyler
Program aşağıdaki 9 fizik deneyini simüle etmektedir:

1.  **Serbest Düşme Deneyi:** Belirli bir sürede cismin kat ettiği yolu hesaplar.
2.  **Yukarı Atış Deneyi:** Belirli bir ilk hızla atılan cismin çıkabileceği maksimum yüksekliği hesaplar.
3.  **Ağırlık Deneyi:** Bir cismin farklı gezegenlerdeki ağırlığını (Newton) hesaplar.
4.  **Kütleçekimsel Potansiyel Enerji Deneyi:** Belirli bir yükseklikteki cismin potansiyel enerjisini hesaplar.
5.  **Hidrostatik Basınç Deneyi:** Sıvı içerisindeki basınca derinlik ve yoğunluk etkisini hesaplar.
6.  **Arşimet Kaldırma Kuvveti Deneyi:** Sıvı içindeki cisme etkiyen kaldırma kuvvetini hesaplar.
7.  **Basit Sarkaç Periyodu Deneyi:** Sarkacın salınım periyodunu hesaplar.
8.  **Sabit İp Gerilmesi Deneyi:** Asılı bir kütlenin ipte oluşturduğu gerilmeyi hesaplar.
9.  **Asansör Deneyi:** İvmelenen bir asansör içindeki cismin etkin ağırlığını hesaplar.

## ⚙️ Kurulum ve Derleme
Bu proje standart C kütüphanelerini (`stdio.h`, `math.h`) kullanır. Linux (Ubuntu), macOS veya Windows (MinGW) ortamlarında GCC derleyicisi ile derleyebilirsiniz.

**Gereksinimler:**
* GCC Derleyicisi
* Math kütüphanesi (Linux/macOS için `-lm` bayrağı gereklidir)

**Derleme Komutu:**
Terminali açın ve kaynak kodun bulunduğu dizine giderek şu komutu çalıştırın:

```bash
gcc uzay-fizik-simulasyonu.c -o uzay_simulasyonu -lm
Çalıştırma Komutu:

Bash

./uzay_simulasyonu
📖 Kullanım
Programı başlattığınızda isminizi girin.

Ana menüden yapmak istediğiniz deneye ait numarayı (1-9) girin.

İstenen fiziksel değerleri (kütle, hız, süre vb.) girin.

Not: Negatif değer girerseniz program otomatik olarak mutlak değere çevirecektir.

Sonuçlar tüm gezegenler için tablo halinde listelenecektir.

Çıkış yapmak için menüde -1 tuşlayın.

🛠 Teknik Detaylar
Dil: C

Gezegen verileri ve isimleri dizilerde (arrays) tutulmaktadır.

Bellek Yönetimi: Fonksiyon parametreleri pointer olarak geçirilmiş, dizi erişimleri *(p+i) şeklinde pointer aritmetiği ile sağlanmıştır.
