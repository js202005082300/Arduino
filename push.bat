@echo off
chcp 65001

::@param token Github

set "UTILISATEUR=js202005082300"
set "DEPOT=Arduino"
set "LIEN=https://github.com/%UTILISATEUR%/%DEPOT%.git"
set "BRANCH=master"
set d=%date:~0,2%-%date:~3,2%-%date:~6,4%
set t=%time:~0,2%:%time:~3,2%:%time:~6,2%
set t=%t: =%

if not exist ".git" ( 
    git init 
    git config --global user.email "js201910271836@outlook.com"
    git config --global user.name "js"
    git branch -M %BRANCH%
    if not exist "README.md" ( echo # %DEPOT%>> README.md )
)

if "%~1" NEQ "" ( echo git remote add origin https://%UTILISATEUR%:%~1@github.com/%UTILISATEUR%/%DEPOT%.git )

git remote add origin https://github.com/js202005082300/%DEPOT%.git
git branch -M %BRANCH%
git pull %LIEN%
git add *
git commit -a -m "%d% %t%"
git push %LIEN%

@echo ON
exit