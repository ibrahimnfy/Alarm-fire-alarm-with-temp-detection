# main
- `mainwindow w` ile GUI ekranı çalışır.  

# mainwindow

## MainWindow
- Arayüz objelerini temsil eden `ui` nesnesi oluşturulur ve Qt Designer’da çizilen objeler pencereye eklenir.  
- Bir `QTextEdit` objesi arayüze eklenmiştir.  
- Ardından client’lerin iletişim kuracağı **server nesnesi** tanımlanır.  
- `connect` ile server’da yeni bir bağlantı kurulduğunda ve bağlantı sırada bulunuyorken client’e özel **socket** oluşturulur.  
- Socket okumaya hazır olduğunda okunur ve socket’in ilk byte’ı `y` veya `Y` ise `alarm()` fonksiyonu çağırılır.  
  (Burada bilerek tek karakter okuması yapılıyor çünkü en azından bir byte geldiğine emin oluyoruz socket okumaya hazır olduğunda.)

## alarm
- `alarmTimer` oluşturulmuş (**nullptr değil**) **ve** aynı anda aktif çalışıyorsa → `return`. Çünkü halihazırda çalışan bir alarm var demektir.  
- Eğer `alarmTimer` oluşturulmamışsa (**nullptr**) → yeni bir `alarmTimer` tanımlanır.  
- `connect` içine, `alarmTimer` timeout olduğunda giriyoruz ve başlangıçta `false` olarak tanımlanmış `alarmVisible` ile yanıp sönen bir görüntü elde ediyoruz.  
  (Buraya ilk girişimiz, fonksiyonun sonunda `alarmTimer`’ın **0.1 saniyelik** başlatılmasıyla oluyor.)  
- Eğer `alarmVisible == false` (yani alarm sönük) ise:  
  - `ui` üzerine yeniden “Alarm” yazılır.  
  - Arka plan kırmızı yapılır.  
  - `alarmTimer` **2 saniye** bekleyecek şekilde başlatılır.  
  - `alarmVisible = true` yapılır.  
- 2 saniye görüntü verildikten sonra yeniden `connect` içine girilir:  
  - Bu sefer `alarmVisible == true` olduğundan ekrandaki görüntü **silinir**.  
  - `alarmVisible = false` yapılır.  
  - `alarmTimer` **0.1 saniye** olarak kurulup, 0.1 saniye görüntünün sönmesi sağlanır.  
- Bu döngü, program tamamen kapatılmadığı sürece şu şekilde devam eder:  
  - **2 saniye alarm, 0.1 saniye susma.**
