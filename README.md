# Burası tamamıyla 42'de hazırlamış olduğum projelerle dolu olacak.

												                                                      LİBFT

		memset: Void olduğu için chara çeviriyoruz. Yeni bir pointer adresi tanımlayıp onda işlem yapıyoruz.
			** 3 parametre alır. (void *b, int c, size_t len)
			**Bu fonksiyon genellikle bellek bloklarını sıfırlamak veya belirli bir değerle doldurmak için kullanılır.

		
		bzero: Verilen dizinde n kadar NULL ataması yapar.
			**2 parametre alır. (void *s, size_t n)
				printf(“%c”, str[6]) değerimizde öncesine NULL atanmışsa o indexi gösterir.


		memcpy: Src’yi Dest’e kopyalar. Strcpy, string dizilerin kopyalanması için kullanılırken, memcpy bellek bloklarının kopyalanması için kullanılır.
			**3 parametre alır. (void *dst, const void *src, size_t len)
				NULL kontrolü için;
					if (!dst && !src)
						return (0);


		memmove: Fonksiyonda verilen “src” dizisi, dışarıdan girdiğimiz “len” uzunluğunun son sayısından başlayarak “dst” in içine “len” i birer azaltarak yazdırır.(Çakışmaları önler.)
				memmove ile memcpy arasındaki fark; memmove sondan başlar, memcpy baştan başlayarak yazar.


		strchr: Fonksiyonda verilen “s” dizisi NULL değilse ve dışarıdan girilen “c” parametresi varsa “c” parametresinden itibaren yazar.
			** 2 parametre alır. (const char *s, int c)
				Eğer “c” dizisinin içinde yoksa NULL döndürür.


		strrchr: Fonksiyonda verilen “s” dizisini strlen ile saydırıp geriye doğru giderek dışarıdan girilen parametreye eşitliğini kontrol eder. Eşitse eşitlikten itibaren yazdırır.(Çakışmaları önler.)


		memchr: Fonksiyonda verilen “s” dizisinde “n” kadar ki kısma kadar “c” varsa “c” dahil geri kalanını yazdırır.
			** 3 parametre alır. (const void *s, int c, size_t n)
				Yoksa NULL döndürür.
				memchr, bellek bloğu içerisinde arama yaparken; strchr, karakter dizisi içinde arama yapar.


		memcmp: “s1” ve “s2” dizisini “n” kadar karşılaştırır. Farklı olduğu yerde “s1” den “s2” yi çıkartır.
			** 3 parametre alır. (const void *s1, const void *s2, size_t n)


		strncmp: “s1” ve “s2” dizisini “n” kadar karşılaştırır. Farklı bir karakter bulursa “s1” deki karakterin ascii karşılığını çıkartarak return eder.
			** 3 parametre alır. (const void *s1, const void *s2, size_t n)


		strlcat: “dest” ve “src” yi boyut kontrolü yaparak (taşmaları önlemek için güvenlik amacıyla) “dest” in sonuna “src” yi yazdırır. (size kadar)
			** 3 parametre alır. (char *dst, const char *src, size_t n)

		
		strlcpy: size kadarını kopyalar.


		
		strnstr:  (“Samanlıkta iğne aramak.” ) Aranan kelimenin ilk harfi ile aradığımız dizinin ilk harfleri örtüşene kadar kontrol eder. İlk harfi örtüştüğünde diğer harfler kontrol edilir. Tam eşleşme sağlandığında bulunduğu adresi döndürür.(Geri kalanın tamamını döndürür.)
			** 3 parametre alır. (const char *haystack, const char *needle, size_t len)


		strdup: Fonksiyonda verilen “s1” dizisinin uzunluğunu bulup malloc’la bellekte yeni bir yer oluşturup “s1” dizisini, yeni oluşturduğumuz adrese kopyalar. Yeni oluşan değeri return eder.
			* 1 parametre alır. (const char *s1)


		calloc: Malloc’la açtığı yere NULL atar.


		strrim:  S1 	= Ana dizin 
				  Set		= Kırpılması istenen kısım
				  Start 	= Ana dizinin başlangıç indexi
				  End 	= Ana dizinin bitiş indexi

				S1’de, set’in indexini artırarak check eder. Eğer uyuşma sağlanırsa s1’de uyuşan kısmı kırpar.(start indexini değiştirir.) Uyuşma sağlanmadığında ise s1, end’e gider ve aynı işlemi son indexten geriye doğru tekrarlar.(End indexini değiştirir.) Uyuşma sağlanmadığında trimlemeyi(kırpmayı) bırakır. Ptr’ın(mallocla yeni s1 kadar yer açılan) içine kırpılan s1’i yazdırır.


		substr: Verilen “s” dizisinin “start” değerinden başlayıp “len” kadarını yeni bir char * a kopyalar.
			** 3 parametre alır. (char const *s, unsigned int start, size_t len)


		strjoin: “s1” ve “s2” dizisini strlen ile saydırarak +NULL kadar mallocla yer açarak yeni bir dizi oluşturur. Yeni oluşturduğu diziye önce “s1” i yazdırır. Devamına “s2”yi yazdırır. Sonuna NULL atıp return eder.


		split: Girilen tek boyutlu char dizisini, parametredeki (örnek “.”, “-“) karakterlerle ayırarak çift **’lı char dizisi yapar. Tüm dizi boyunca devam eder. (www.google.com) “www”, “google”, “com” gibi argümanları böler.
				(*f) kullanarak fonksiyon içinde fonksiyon çağrılır.


		strmapi: “s” dizisinin her bir indexine parametredeki fonksiyon uygulanır.
			** 2 parametre alır. (char const *s, char (*f))
				Mallocla yer açıp yeni bir diziye yazar.

		striteri: diziye, parametredeki fonksiyon uygulanır.


		putchar_fd: #include <fcntl.h> kütüphanesi ile çağırılır. Cat komutu ile görüntülenebilir.


		putstr_fd: char dizisi tanımlayıp içine yazdırıyoruz.


		putendl_fd: sonuna newline atar.


		itoa: “-123” için bir char * a 5 byte’lık yer açar sondan geriye doğru sayıyı kopyalar.
			ar	-rc
			ar	= arşivleme
			r 	= replace
			c	= create
				#ifndef = daha önce tanımlanıp tanımlanmadığını kontrol eder.
				#define = tanımlama yapar.


		lstnew: content ile yeni bir düğüm oluşturur ve yeni düğümün adresini döndürür.
		
		
		lstadd_front: new’i list’in başına ekler.


		lstsize: lst listesinin uzunluğunu döndürür.


		lstlast: lst listesinin son düğümünü döndürür.


		lstadd_back: new’i listenin sonuna ekler.


		lstdelone: gelen lst structının contentini del fonksiyonuna gönderir. Sonra freeler.


		lstclear: temp bir sonraki contenti gösterir, delone bir öncekini freeler sonra devam eder. Listenin sonuna kadar devam eder. 
