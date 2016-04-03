#!/bin/bash
function clean {
  rm *.o
  rm *.gcov
  rm *.gcno
  rm Makefile
  rm Makefile.Debug
  rm Makefile.Release
  rm *.pro.user
  rm moc_*
  rm ui_*
  rm qrc_*
  rm -rf debug
  rm -rf release
}

rm create_*
clean

cd src; clean; cd ..
cd cpp; clean; cd ..
