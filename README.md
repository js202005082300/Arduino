<<<<<<< HEAD
# Arduino 
=======
# Arduino

## Tutorials
+ SENSOR KIT : 58/332
+ STARTER KIT : 96/217

## Linux installation
[Installation portable](https://www.arduino.cc/en/Guide/PortableIDE)
[Téléchargement](https://www.arduino.cc/en/Main/Software)
[Installation à partir des dépots](https://doc.ubuntu-fr.org/arduino)
```
sudo apt-get update
sudo apt-get install arduino            (installer arduino présent dans les dépots Universe d'Ubuntu)
sudo apt-get install arduino-mk         (programmer Arduino en ligne de commandes)
sudo apt-get remove arduino arduino-mk  (suppression des paquets Arduino)
sudo apt autoremove                     (supprimer les dépendances installées)
```
[Installation en dur](https://vitux.com/how-to-install-arduino-ide-on-ubuntu/)
```
cd /home/$USER/Téléchargements/
tar -xf arduino-1.8.12-linux64.tar.xz   (décompresser le dossier d'archives)
cd arduino-1.8.12/
mkdir /home/$USER/Bureau/Arduino/arduino-1.8.12/portable
mkdir /home/$USER/Bureau/Arduino/arduino-1.8.12/portable/sketchbook
mkdir /home/$USER/Bureau/Arduino/arduino-1.8.12/portable/staging
mkdir /home/$USER/Bureau/Arduino/arduino-1.8.12/portable/packages
./arduino   (portable execution)   ou   sudo ./install.sh   (installation)
```

## Libraries path
Fichier -> Préférences : 
C:\Users\js201\OneDrive\Formations\Programmation\Arduino\cours

## Yún Rev. 2
[Config.. Yún Rev. 2](https://www.arduino.cc/en/Guide/ArduinoYunRev2#toc22)

## Drone experimentation
[Drone assemblage](https://www.robotshop.com/community/blog/show/comment-fabriquer-un-droneuav-lecon-5-assemblage)

## Repository Arduino
+ Initialiser le premier PC (dépot existant)
[Créer un nouveau dépot](https://github.com/new)
```
git init
git config --global core.autocrlf false
git add *
git commit -a -m "Update files"
git push https://github.com/js202005082300/Arduino.git
```
+ Initialiser le second PC
```
git init
git pull https://github.com/js202005082300/Arduino.git
```
+ Configuration sur les deux PC
```
git config --global user.email "js201910271836@outlook.com"
git config --global user.name "js"
git remote add origin https://github.com/js202005082300/Arduino.git
```
+ Lors de chaque nouveau partage entre pc.
```
git pull https://github.com/js202005082300/Arduino.git
git add *
git commit -a -m "Update files"
git push https://github.com/js202005082300/Arduino.git
```

>>>>>>> 79786a709d44602268680f0880c19b4ab7ac4c91
