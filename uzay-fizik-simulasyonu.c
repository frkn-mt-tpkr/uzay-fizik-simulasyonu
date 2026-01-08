#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

double g[] = {3.7, 8.87, 9.81, 3.71, 24.79, 10.44, 8.69, 11.15};
char *gn[] = {"Merkur", "Venus", "Dunya", "Mars", "Jupiter", "Saturn", "Uranus", "Neptun"};
char ad[50];

void d1(double *p, double *t) {
    int i;
    double h;
    printf("\n============================================\n");
    printf("  SERBEST DUSME DENEYI - %s\n", ad);
    printf("  Girilen sure: %.2f saniye\n", *t);
    printf("============================================\n");
    printf("  %-12s | %15s\n", "Gezegen", "Kat Edilen Yol");
    printf("--------------------------------------------\n");
    for(i = 0; i < 8; i++) {
        h = 0.5 * (*(p+i)) * (*t) * (*t);
        printf("  %-12s | %12.2f metre\n", *(gn+i), h);
    }
    printf("============================================\n");
}

void d2(double *p, double *v) {
    int i;
    double hm;
    printf("\n============================================\n");
    printf("  YUKARI ATIS DENEYI - %s\n", ad);
    printf("  Baslangic hizi: %.2f m/s\n", *v);
    printf("============================================\n");
    printf("  %-12s | %15s\n", "Gezegen", "Maks. Yukseklik");
    printf("--------------------------------------------\n");
    for(i = 0; i < 8; i++) {
        hm = ((*v) * (*v)) / (2.0 * (*(p+i)));
        printf("  %-12s | %12.2f metre\n", *(gn+i), hm);
    }
    printf("============================================\n");
}

void d3(double *p, double *m) {
    int i;
    double G;
    printf("\n============================================\n");
    printf("  AGIRLIK DENEYI - %s\n", ad);
    printf("  Kutle: %.2f kg\n", *m);
    printf("============================================\n");
    printf("  %-12s | %15s\n", "Gezegen", "Agirlik (G)");
    printf("--------------------------------------------\n");
    for(i = 0; i < 8; i++) {
        G = (*m) * (*(p+i));
        printf("  %-12s | %12.2f Newton\n", *(gn+i), G);
    }
    printf("============================================\n");
}

void d4(double *p, double *m, double *h) {
    int i;
    double ep;
    printf("\n============================================\n");
    printf("  POTANSIYEL ENERJI DENEYI - %s\n", ad);
    printf("  Kutle: %.2f kg, Yukseklik: %.2f m\n", *m, *h);
    printf("============================================\n");
    printf("  %-12s | %15s\n", "Gezegen", "Pot. Enerji");
    printf("--------------------------------------------\n");
    for(i = 0; i < 8; i++) {
        ep = (*m) * (*(p+i)) * (*h);
        printf("  %-12s | %12.2f Joule\n", *(gn+i), ep);
    }
    printf("============================================\n");
}

void d5(double *p, double *r, double *h) {
    int i;
    double P;
    printf("\n============================================\n");
    printf("  HIDROSTATIK BASINC DENEYI - %s\n", ad);
    printf("  Yogunluk: %.2f kg/m^3, Derinlik: %.2f m\n", *r, *h);
    printf("============================================\n");
    printf("  %-12s | %15s\n", "Gezegen", "Basinc (P)");
    printf("--------------------------------------------\n");
    for(i = 0; i < 8; i++) {
        P = (*r) * (*(p+i)) * (*h);
        printf("  %-12s | %12.2f Pascal\n", *(gn+i), P);
    }
    printf("============================================\n");
}

void d6(double *p, double *r, double *V) {
    int i;
    double fk;
    printf("\n============================================\n");
    printf("  ARSIMET KALDIRMA KUVVETI - %s\n", ad);
    printf("  Yogunluk: %.2f kg/m^3, Hacim: %.4f m^3\n", *r, *V);
    printf("============================================\n");
    printf("  %-12s | %15s\n", "Gezegen", "Kaldirma Kuv.");
    printf("--------------------------------------------\n");
    for(i = 0; i < 8; i++) {
        fk = (*r) * (*(p+i)) * (*V);
        printf("  %-12s | %12.2f Newton\n", *(gn+i), fk);
    }
    printf("============================================\n");
}

void d7(double *p, double *L) {
    int i;
    double T;
    printf("\n============================================\n");
    printf("  BASIT SARKAC PERIYODU - %s\n", ad);
    printf("  Sarkac uzunlugu: %.2f m\n", *L);
    printf("============================================\n");
    printf("  %-12s | %15s\n", "Gezegen", "Periyot (T)");
    printf("--------------------------------------------\n");
    for(i = 0; i < 8; i++) {
        T = 2.0 * M_PI * sqrt((*L) / (*(p+i)));
        printf("  %-12s | %12.2f saniye\n", *(gn+i), T);
    }
    printf("============================================\n");
}

void d8(double *p, double *m) {
    int i;
    double T;
    printf("\n============================================\n");
    printf("  SABIT IP GERILMESI - %s\n", ad);
    printf("  Kutle: %.2f kg\n", *m);
    printf("============================================\n");
    printf("  %-12s | %15s\n", "Gezegen", "Gerilme (T)");
    printf("--------------------------------------------\n");
    for(i = 0; i < 8; i++) {
        T = (*m) * (*(p+i));
        printf("  %-12s | %12.2f Newton\n", *(gn+i), T);
    }
    printf("============================================\n");
}

void d9(double *p, double *m, double *a, int *y) {
    int i;
    double N;
    printf("\n============================================\n");
    printf("  ASANSOR DENEYI - %s\n", ad);
    printf("  Kutle: %.2f kg, Ivme: %.2f m/s^2\n", *m, *a);
    printf("  Hareket: %s\n", (*y == 1) ? "Yukari hizlaniyor/Asagi yavasliyor" : "Asagi hizlaniyor/Yukari yavasliyor");
    printf("============================================\n");
    printf("  %-12s | %15s\n", "Gezegen", "Etkin Agirlik");
    printf("--------------------------------------------\n");
    for(i = 0; i < 8; i++) {
        if(*y == 1)
            N = (*m) * ((*(p+i)) + (*a));
        else
            N = (*m) * ((*(p+i)) - (*a));
        printf("  %-12s | %12.2f Newton\n", *(gn+i), N);
    }
    printf("============================================\n");
}

void menu() {
    printf("\n********************************************\n");
    printf("        UZAY SIMULASYONU - %s\n", ad);
    printf("********************************************\n");
    printf("  1. Serbest Dusme Deneyi\n");
    printf("  2. Yukari Atis Deneyi\n");
    printf("  3. Agirlik Deneyi\n");
    printf("  4. Kutlecekimsel Potansiyel Enerji Deneyi\n");
    printf("  5. Hidrostatik Basinc Deneyi\n");
    printf("  6. Arsimet Kaldirma Kuvveti Deneyi\n");
    printf("  7. Basit Sarkac Periyodu Deneyi\n");
    printf("  8. Sabit Ip Gerilmesi Deneyi\n");
    printf("  9. Asansor Deneyi\n");
    printf(" -1. Cikis\n");
    printf("********************************************\n");
}

int main() {
    int s, y;
    double t, v, m, h, r, V, L, a;
    
    printf("********************************************\n");
    printf("*       UZAY FIZIK SIMULASYONU             *\n");
    printf("********************************************\n");
    printf("Bilim insaninin adini giriniz: ");
    scanf("%s", ad);
    printf("\nHos geldin, %s\n", ad);
    
    while(1) {
        menu();
        printf("Seciminiz: ");
        scanf("%d", &s);
        
        if(s == -1) break;
        
        switch(s) {
            case 1:
                printf("Sure (saniye): ");
                scanf("%lf", &t);
                if(t < 0) printf("[!] Negatif deger pozitife donusturuldu.\n");
                t = (t < 0) ? -t : t;
                d1(g, &t);
                break;
            case 2:
                printf("Baslangic hizi (m/s): ");
                scanf("%lf", &v);
                if(v < 0) printf("[!] Negatif deger pozitife donusturuldu.\n");
                v = (v < 0) ? -v : v;
                d2(g, &v);
                break;
            case 3:
                printf("Kutle (kg): ");
                scanf("%lf", &m);
                if(m < 0) printf("[!] Negatif deger pozitife donusturuldu.\n");
                m = (m < 0) ? -m : m;
                d3(g, &m);
                break;
            case 4:
                printf("Kutle (kg): ");
                scanf("%lf", &m);
                printf("Yukseklik (m): ");
                scanf("%lf", &h);
                if(m < 0 || h < 0) printf("[!] Negatif deger(ler) pozitife donusturuldu.\n");
                m = (m < 0) ? -m : m;
                h = (h < 0) ? -h : h;
                d4(g, &m, &h);
                break;
            case 5:
                printf("Sivi yogunlugu (kg/m^3): ");
                scanf("%lf", &r);
                printf("Derinlik (m): ");
                scanf("%lf", &h);
                if(r < 0 || h < 0) printf("[!] Negatif deger(ler) pozitife donusturuldu.\n");
                r = (r < 0) ? -r : r;
                h = (h < 0) ? -h : h;
                d5(g, &r, &h);
                break;
            case 6:
                printf("Sivi yogunlugu (kg/m^3): ");
                scanf("%lf", &r);
                printf("Batan hacim (m^3): ");
                scanf("%lf", &V);
                if(r < 0 || V < 0) printf("[!] Negatif deger(ler) pozitife donusturuldu.\n");
                r = (r < 0) ? -r : r;
                V = (V < 0) ? -V : V;
                d6(g, &r, &V);
                break;
            case 7:
                printf("Sarkac uzunlugu (m): ");
                scanf("%lf", &L);
                if(L < 0) printf("[!] Negatif deger pozitife donusturuldu.\n");
                L = (L < 0) ? -L : L;
                d7(g, &L);
                break;
            case 8:
                printf("Kutle (kg): ");
                scanf("%lf", &m);
                if(m < 0) printf("[!] Negatif deger pozitife donusturuldu.\n");
                m = (m < 0) ? -m : m;
                d8(g, &m);
                break;
            case 9:
                printf("Kutle (kg): ");
                scanf("%lf", &m);
                printf("Ivme (m/s^2): ");
                scanf("%lf", &a);
                printf("Asansor hareketi:\n");
                printf("  1. Yukari ivmelenerek hizlaniyor / Asagi ivmelenerek yavasliyor\n");
                printf("  2. Asagi ivmelenerek hizlaniyor / Yukari ivmelenerek yavasliyor\n");
                printf("Seciminiz (1/2): ");
                scanf("%d", &y);
                if(m < 0 || a < 0) printf("[!] Negatif deger(ler) pozitife donusturuldu.\n");
                m = (m < 0) ? -m : m;
                a = (a < 0) ? -a : a;
                d9(g, &m, &a, &y);
                break;
            default:
                printf("\n[!] Gecersiz secim! Lutfen 1-9 arasi veya -1 giriniz.\n");
        }
    }
    
    printf("\n********************************************\n");
    printf("  Program sonlandirildi.\n");
    printf("  Gule gule, %s!\n", ad);
    printf("********************************************\n");
    
    return 0;
}