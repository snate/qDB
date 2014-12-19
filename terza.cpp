#include"terza.h"

void ShowOutcome::setupUi(QDialog *Dialog)
{
    if (Dialog->objectName().isEmpty())
        Dialog->setObjectName(QString::fromUtf8("Dialog"));
    Dialog->setFixedSize(600, 484);
    outPreviousButton = new QToolButton(Dialog);
    outPreviousButton->setObjectName(QString::fromUtf8("outPreviousButton"));
    outPreviousButton->setGeometry(QRect(410, 45, 41, 29));
    frame = new QFrame(Dialog);
    frame->setObjectName(QString::fromUtf8("frame"));
    frame->setGeometry(QRect(290, 250, 261, 159));
    frame->setFrameShape(QFrame::StyledPanel);
    frame->setFrameShadow(QFrame::Raised);
    label_23 = new QLabel(frame);
    label_23->setObjectName(QString::fromUtf8("label_23"));
    label_23->setGeometry(QRect(10, 12, 81, 17));
    outCapacity = new QTextEdit(frame);
    outCapacity->setObjectName(QString::fromUtf8("outCapacity"));
    outCapacity->setGeometry(QRect(10, 80, 231, 31));
    label_24 = new QLabel(frame);
    label_24->setObjectName(QString::fromUtf8("label_24"));
    label_24->setGeometry(QRect(70, 51, 81, 17));
    outName = new QTextEdit(Dialog);
    outName->setObjectName(QString::fromUtf8("outName"));
    outName->setGeometry(QRect(150, 31, 101, 31));
    label_14 = new QLabel(Dialog);
    label_14->setObjectName(QString::fromUtf8("label_14"));
    label_14->setGeometry(QRect(40, 124, 66, 17));
    label_17 = new QLabel(Dialog);
    label_17->setObjectName(QString::fromUtf8("label_17"));
    label_17->setGeometry(QRect(40, 170, 66, 17));
    outLabelName = new QLabel(Dialog);
    outLabelName->setObjectName(QString::fromUtf8("outLabelName"));
    outLabelName->setGeometry(QRect(40, 35, 66, 17));
    label_15 = new QLabel(Dialog);
    label_15->setObjectName(QString::fromUtf8("label_15"));
    label_15->setGeometry(QRect(40, 81, 81, 17));
    outNextButton = new QToolButton(Dialog);
    outNextButton->setObjectName(QString::fromUtf8("outNextButton"));
    outNextButton->setGeometry(QRect(470, 45, 41, 29));
    outVendor = new QTextEdit(Dialog);
    outVendor->setObjectName(QString::fromUtf8("outVendor"));
    outVendor->setGeometry(QRect(150, 71, 101, 31));
    outPrice = new QTextEdit(Dialog);
    outPrice->setObjectName(QString::fromUtf8("outPrice"));
    outPrice->setGeometry(QRect(150, 163, 101, 31));
    outType = new QTextEdit(Dialog);
    outType->setObjectName(QString::fromUtf8("outType"));
    outType->setGeometry(QRect(150, 120, 101, 31));
    softFrame = new QFrame(Dialog);
    softFrame->setObjectName(QString::fromUtf8("softFrame"));
    softFrame->setGeometry(QRect(30, 250, 251, 156));
    softFrame->setFrameShape(QFrame::StyledPanel);
    softFrame->setFrameShadow(QFrame::Raised);
    label_16 = new QLabel(softFrame);
    label_16->setObjectName(QString::fromUtf8("label_16"));
    label_16->setGeometry(QRect(10, 24, 101, 17));
    propFrame = new QFrame(softFrame);
    propFrame->setObjectName(QString::fromUtf8("propFrame"));
    propFrame->setGeometry(QRect(0, 76, 120, 80));
    propFrame->setFrameShape(QFrame::StyledPanel);
    propFrame->setFrameShadow(QFrame::Raised);
    label_18 = new QLabel(propFrame);
    label_18->setObjectName(QString::fromUtf8("label_18"));
    label_18->setGeometry(QRect(10, 24, 81, 17));
    label_19 = new QLabel(propFrame);
    label_19->setObjectName(QString::fromUtf8("label_19"));
    label_19->setGeometry(QRect(10, 0, 81, 17));
    outAvailable = new QTextEdit(propFrame);
    outAvailable->setObjectName(QString::fromUtf8("outAvailable"));
    outAvailable->setGeometry(QRect(10, 43, 101, 31));
    frame_3 = new QFrame(softFrame);
    frame_3->setObjectName(QString::fromUtf8("frame_3"));
    frame_3->setGeometry(QRect(120, 75, 131, 81));
    frame_3->setFrameShape(QFrame::StyledPanel);
    frame_3->setFrameShadow(QFrame::Raised);
    label_20 = new QLabel(frame_3);
    label_20->setObjectName(QString::fromUtf8("label_20"));
    label_20->setGeometry(QRect(10, 3, 81, 17));
    label_21 = new QLabel(frame_3);
    label_21->setObjectName(QString::fromUtf8("label_21"));
    label_21->setGeometry(QRect(10, 25, 66, 17));
    outMonths = new QTextEdit(frame_3);
    outMonths->setObjectName(QString::fromUtf8("outMonths"));
    outMonths->setGeometry(QRect(10, 43, 101, 31));
    label_22 = new QLabel(softFrame);
    label_22->setObjectName(QString::fromUtf8("label_22"));
    label_22->setGeometry(QRect(10, 4, 81, 17));
    outSupportedOS = new QTextEdit(softFrame);
    outSupportedOS->setObjectName(QString::fromUtf8("outSupportedOS"));
    outSupportedOS->setGeometry(QRect(10, 41, 231, 31));
    closeButton = new QPushButton(Dialog);
    closeButton->setObjectName(QString::fromUtf8("closeButton"));
    closeButton->setGeometry(QRect(460, 440, 98, 27));
    attention = new QLabel(Dialog);
    attention->setObjectName(QString::fromUtf8("label_19"));
    attention->setGeometry(QRect(370, 151, 66, 17));

    retranslateUi(Dialog);

    QMetaObject::connectSlotsByName(Dialog);
} // setupUi


void ShowOutcome::retranslateUi(QDialog *Dialog)
{
    Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
    outPreviousButton->setText(QApplication::translate("Dialog", "<", 0, QApplication::UnicodeUTF8));
    label_23->setText(QApplication::translate("Dialog", "Hardware", 0, QApplication::UnicodeUTF8));
    label_24->setText(QApplication::translate("Dialog", "Capacit\303\240", 0, QApplication::UnicodeUTF8));
    label_14->setText(QApplication::translate("Dialog", "Categoria", 0, QApplication::UnicodeUTF8));
    label_17->setText(QApplication::translate("Dialog", "Prezzo", 0, QApplication::UnicodeUTF8));
    outLabelName->setText(QApplication::translate("Dialog", "Nome", 0, QApplication::UnicodeUTF8));
    label_15->setText(QApplication::translate("Dialog", "Produttore", 0, QApplication::UnicodeUTF8));
    outNextButton->setText(QApplication::translate("Dialog", ">", 0, QApplication::UnicodeUTF8));
    label_16->setText(QApplication::translate("Dialog", "OS supportati", 0, QApplication::UnicodeUTF8));
    label_18->setText(QApplication::translate("Dialog", "Disponibile", 0, QApplication::UnicodeUTF8));
    label_19->setText(QApplication::translate("Dialog", "Proprietario", 0, QApplication::UnicodeUTF8));
    label_20->setText(QApplication::translate("Dialog", "Shareware", 0, QApplication::UnicodeUTF8));
    label_21->setText(QApplication::translate("Dialog", "Mesi", 0, QApplication::UnicodeUTF8));
    label_22->setText(QApplication::translate("Dialog", "Software", 0, QApplication::UnicodeUTF8));
    closeButton->setText(QApplication::translate("Dialog", "Chiudi", 0, QApplication::UnicodeUTF8));
    attention->setText(QApplication::translate("Dialog", " ", 0, QApplication::UnicodeUTF8));
} // retranslateUi
