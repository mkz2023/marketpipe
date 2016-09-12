#! /bin/bash
#como publicar los cambios en git esta medio aburrido, mejor que lo haga bash por nosotros
git add *
git commit -m $1
git remote add origin git@github.com:mquinteror/pos.git
git push -u origin master
git status
