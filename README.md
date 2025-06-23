<div align="center">

# 42 Libft Projesi

[![forthebadge](https://forthebadge.com/images/badges/made-with-c.svg)](https://forthebadge.com)
[![forthebadge](https://forthebadge.com/images/badges/built-with-love.svg)](https://forthebadge.com)

<p align="center">
  <img src="https://img.shields.io/badge/42-İstanbul-000000?style=for-the-badge&logo=42" />
  <img src="https://img.shields.io/badge/Dil-C-blue?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Durum-Tamamlandı-success?style=for-the-badge" />
</p>
</div>

## 📋 İçindekiler

- [Proje Hakkında](#proje-hakkında)
- [Fonksiyonlar](#fonksiyonlar)
- [Kurulum ve Kullanım](#kurulum-ve-kullanım)
- [Bonus Bölümü](#bonus-bölümü)
- [Testler](#testler)

## Proje Hakkında

Libft projesi, 42 okulunun ilk projesidir ve temel C fonksiyonlarını içeren bir kütüphane oluşturmayı amaçlar. Bu kütüphane, ilerideki projelerde sürekli olarak kullanılacak ve genişletilebilecektir. Proje, standart C kütüphanesindeki bazı fonksiyonları yeniden yazmayı ve bazı ek yardımcı fonksiyonlar oluşturmayı içerir.

## Fonksiyonlar

### İlk Bölüm - Libc Fonksiyonları

Bu bölüm, standart C kütüphanesindeki bazı temel fonksiyonların yeniden yazılmış versiyonlarını içerir:

| Fonksiyon | Açıklama |
|-----------|----------|
| ft_isalpha | Bir karakterin alfabetik olup olmadığını kontrol eder |
| ft_isdigit | Bir karakterin rakam olup olmadığını kontrol eder |
| ft_isalnum | Bir karakterin alfanümerik olup olmadığını kontrol eder |
| ft_isascii | Bir karakterin ASCII tablosunda olup olmadığını kontrol eder |
| ft_isprint | Bir karakterin yazdırılabilir olup olmadığını kontrol eder |
| ft_strlen | Bir dizinin uzunluğunu hesaplar |
| ft_memset | Belleğin belirli bir alanını belirtilen değerle doldurur |
| ft_bzero | Belleğin belirli bir alanını sıfırlar |
| ft_memcpy | Bir bellek alanından başka bir bellek alanına veri kopyalar |
| ft_memmove | Çakışma olsa bile bellek alanları arasında veri kopyalar |
| ft_strlcpy | Bir diziden başka bir dizine belirli bir uzunlukta güvenli kopyalama yapar |
| ft_strlcat | Bir dizinin sonuna başka bir diziyi güvenli bir şekilde ekler |
| ft_toupper | Küçük harfi büyük harfe çevirir |
| ft_tolower | Büyük harfi küçük harfe çevirir |
| ft_strchr | Bir dizide belirli bir karakteri ilk bulunduğu yerden itibaren arar |
| ft_strrchr | Bir dizide belirli bir karakteri sondan başlayarak arar |
| ft_strncmp | İki diziyi belirtilen karakter sayısı kadar karşılaştırır |
| ft_memchr | Bellek bloğu içinde belirli bir baytı arar |
| ft_memcmp | İki bellek bloğunu karşılaştırır |
| ft_strnstr | Bir dizi içinde başka bir alt diziyi arar |
| ft_atoi | Bir dizi içindeki sayısal değeri tam sayıya çevirir |
| ft_calloc | Belirli bir boyutta bellek alanı ayırır ve sıfırla doldurur |
| ft_strdup | Bir dizinin dinamik olarak çoğaltılmış kopyasını oluşturur |

### İkinci Bölüm - Ek Fonksiyonlar

Bu bölüm, standart kütüphanede olmayan ancak yararlı olan fonksiyonları içerir:

| Fonksiyon | Açıklama |
|-----------|----------|
| ft_substr | Bir diziden alt dizi çıkarır |
| ft_strjoin | İki diziyi birleştirerek yeni bir dizi oluşturur |
| ft_strtrim | Bir dizinin başındaki ve sonundaki belirli karakterleri keser |
| ft_split | Bir diziyi belirli bir ayırıcı karaktere göre böler |
| ft_itoa | Tam sayıyı dizi biçimine dönüştürür |
| ft_strmapi | Dizinin her karakterine bir fonksiyon uygular |
| ft_striteri | Dizinin her karakterine bir fonksiyon uygular (işaretçi ile) |
| ft_putchar_fd | Bir karakteri belirtilen dosya tanımlayıcısına yazar |
| ft_putstr_fd | Bir diziyi belirtilen dosya tanımlayıcısına yazar |
| ft_putendl_fd | Bir diziyi belirtilen dosya tanımlayıcısına yazar ve yeni satır ekler |
| ft_putnbr_fd | Bir sayıyı belirtilen dosya tanımlayıcısına yazar |

## Kurulum ve Kullanım

1. Projeyi klonlayın:
   ```bash
   git clone <repo-url> libft
   cd libft
   ```

2. Kütüphaneyi derleyin:
   ```bash
   make
   ```

3. Bonus fonksiyonlarını da derlemek için:
   ```bash
   make bonus
   ```

4. Kütüphaneyi temizlemek için:
   ```bash
   make clean    # Sadece .o dosyalarını siler
   make fclean   # Hem .o dosyalarını hem de kütüphaneyi siler
   make re       # Temizler ve yeniden derler
   ```

5. Kendi programınızda kullanmak için:
   ```c
   #include "libft.h"
   
   int main(void)
   {
       // Libft fonksiyonlarını kullanabilirsiniz
       ft_putstr_fd("Merhaba 42!", 1);
       return (0);
   }
   ```

6. Programınızı derlemek için:
   ```bash
   gcc -o program program.c libft.a
   ```

## Bonus Bölümü

Bağlı listeler üzerinde işlem yapmak için ek fonksiyonlar:

| Fonksiyon | Açıklama |
|-----------|----------|
| ft_lstnew | Yeni bir liste düğümü oluşturur |
| ft_lstadd_front | Liste başına yeni bir düğüm ekler |
| ft_lstsize | Listedeki düğüm sayısını hesaplar |
| ft_lstlast | Listenin son düğümünü döndürür |
| ft_lstadd_back | Liste sonuna yeni bir düğüm ekler |
| ft_lstdelone | Bir düğümün içeriğini siler |
| ft_lstclear | Bir listeyi ve tüm düğümlerini siler |
| ft_lstiter | Listenin her düğümüne bir fonksiyon uygular |
| ft_lstmap | Listenin her düğümüne bir fonksiyon uygular ve yeni bir liste oluşturur |

## Testler

Projeyi test etmek için çeşitli test frameworkleri kullanabilirsiniz:

- [Libftdestructor](https://github.com/t0mm4rx/libftdestructor)
- [Libftest](https://github.com/jtoty/Libftest)
- [libft-unit-test](https://github.com/alelievr/libft-unit-test)
- [libft-war-machine](https://github.com/ska42/libft-war-machine)

## Notlar

- Projede sadece izin verilen fonksiyonlar kullanılmıştır.
- Tüm fonksiyonlar 42 Norm kurallarına göre yazılmıştır.
- Bu kütüphane ilerideki 42 projeleri için temel oluşturmaktadır.

---

<p align="center">
  <img src="https://img.shields.io/badge/42-İstanbul-000000?style=for-the-badge" />
</p>

