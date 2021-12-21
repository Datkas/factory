QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        chicagostylecheesepizza.cpp \
        chicagostyleclampizza.cpp \
        chicagostylepepperonipizza.cpp \
        chicagostylepizzastore.cpp \
        chicagostyleveggiepizza.cpp \
        main.cpp \
        nystylecheezepizza.cpp \
        nystyleclampizza.cpp \
        nystylepepperonipizza.cpp \
        nystylepizzastore.cpp \
        nystyleveggiepizza.cpp \
        pizza.cpp \
        pizzastore.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    chicagostylecheesepizza.h \
    chicagostyleclampizza.h \
    chicagostylepepperonipizza.h \
    chicagostylepizzastore.h \
    chicagostyleveggiepizza.h \
    nystylecheezepizza.h \
    nystyleclampizza.h \
    nystylepepperonipizza.h \
    nystylepizzastore.h \
    nystyleveggiepizza.h \
    pizza.h \
    pizzastore.h
