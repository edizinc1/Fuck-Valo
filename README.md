• Interception ve RawAccel driverının bilgisayarınızda kurulmuş olması gerekiyor.​

Eğer nasıl kurulduğunu bilmiyorsanız github sayfalarında açıklamaları var kolayca bilgisayarınıza kurabilirsiniz.
Ayrıca Interception'u PATH'e eklemeniz gerekiyor ( PATH'e eklemek ne bilmiyorsanız Google kullanabilirsiniz. )

github.com/oblitum/Interception
github.com/a1xd/rawaccel

• FuckValo Özellikleri​

Aim Assist bildiğiniz Aim Assist, crossunuzu adamın kafasına yönlendiriyor.
Magnet, crossunuzu siz herhangi bir tuşa basmasanız bile rakip oyuncunun kafasına götürüyor. Mouse Button 4 ile istemediğiniz zaman kapatabilirsiniz.
MouseButton 4 hilenin açma kapama tuşudur, isterseniz açılıp kapandığını anlamak için beep tarzı bir şey ekleyebilirsiniz.
MouseButton 5 hilenin TriggerBotudur, toggle şeklinde değil basılı tutmanız gerekiyor. dllmain.cpp üzerinde basit değişiklikler yaparak toggle şeklinde yapabilirsiniz.

• FOV'u Nasıl Ayarlayabilirim?​

BURADAKİ satırdan fovu istediğiniz gibi ayarlayabilirsiniz. (İsterseniz programı her açtığınızda FOV için input girebilirsiniz fakat ben yapmaya üşendim :D )
Hile config dosyası v.s oluşturmuyor isterseniz bunu kendiniz ekleyebilirsiniz fakat bence gerek yok, zaten 3 tane yazmanız gereken şey var.

• FuckValo Nasıl Kullanılır? ( KESİNLİKLE OYUN VE YA RİOT GAMES LAUNCHER AÇIK İSE BU İŞLEMLERİ YAPMAYIN )​

Detected olup olmaması buraya bağlı işte lütfen dikkatlice okuyun. Ben hileyi kendim kullanırken DLL Hijacking yöntemini kullandım, Interception PATH'de olduğu için DLL Hijacking yaptığınız zaman sorun çıkmaması gerekiyor. Fakat sorun çıkarsa Interception.dll'i DLL Hijacking yapacağınız 32 bit programın dosyalarının içerisine koyun.

Eğer isterseniz 32 bit bir programa Inject edebilirsiniz fakat bunun için LoadLibrary özelliğine sahip bir Injector kullanmanız gerekiyor. Xenos v.s genel olarak bilinen Injectorler kullanırsanız ban yemeniz kaçınılmaz. En iyisi kendi DLL Injectorunuzu yazmak fakat yine de size kalmış. Benim tavsiyem DLL Hijacking yapabileceğiniz bir 32 bit program bulun.

Riot Games ya da VALORANT ile alakalı bir programa inject etmeyi ya da DLL Hijacking yapmayı sakın denemeyin anında ban yersiniz.

• FuckValo Ayarları Nasıl Yapılır?​

DLL Hijacking/Injector kullanarak programı bir şekilde açmayı başardınız, önünüzde boş bir CMD açılacak ve sizden 3 tane input isteyecek. Her ayarı yazdığınızda ENTER basmanız gerekiyor ve bir alt ayarı yazmanız gerekiyor.
1- Oyun içerisindeki sensitivity ayarınız : 0.57 (Kendi oyun içerisindeki sensinizi yazın)
2- Smoothness ayarı : 0.03 - 0.5 (0.03 - 0.04 en iyisidir fazasında ban yersiniz)
3- Hilenin Modu : 3 ( 1 sadece aim assist, 2 hem aim assist hem triggerbot, 3 hepsini kapsıyor )

Bu 3 ayarı yazdıktan sonra CMD kaybolacak, sonra oyunu açabilirsiniz.

• FuckValo Nasıl Buildlenir?​
32 bit olarak Debug/Release (Farketmez) modunda buildleyebilirsiniz.

• S.S.S​
1- Detected olur mu?

Bunu sağlamak size kalmış, kodun içerisine junk code ekleyebilirsiniz VMProtect ile şifreleyebilirsiniz. Asıl önemli olan nasıl Inject ettiğiniz, DLL Hijacking ya da Injector farketmez eğer undetected ise manuel ban dışında ban yemezsiniz.

2- Ban yememek için ne yapmalıyım?

Her maç 1. olmayın, kesinlikle hile ile DM oynamayın ve lütfen ama lütfen ayarları çok yüksekte kullanmayın.,

3- Fix gelebilir mi?

Tabii ki gelebilir, sonuçta VALORANT fakat açık kaynak kodlu olduğu için kendi kodlama yeteneğinize bağlı olarak programı tekrar çalışır hale getirebilirsiniz.

4- Sorunum var yapamadım :(

Konunun altında elimden geldiğince yardımcı olmaya çalışacağım fakat boş zamanım olmayabiliyor. Ama yine de soru sormaktan çekinmeyin.

5- Hazır build yok mu ?

Hazır build eklemeyi isterdim fakat kendiniz buildlemezseniz ban yersiniz. O yüzden kendiniz 32 bit olarak buildleyin.

6- Tuşları değiştirebilir miyim?

Tabii ki tuşları değiştirebilirsiniz, dllmain.cpp içerisinde tüm tuşları değiştirebilirsiniz.

BİLGİLENDİRME : Bundan önceki HWID Bypass konumda kendini akıllı sanan arkadaşın birisi ücretle satmaya çalışmış. Hiçbir şekilde LÜTFEN bu tarz insanlara para vermeyin, hile almak size kalmış tabii ki fakat hile satın alacaksanız da lütfen araştırın ve Google'a bakın.
