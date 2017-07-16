/********************************************************************************
** Form generated from reading UI file 'editeconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITECONFIG_H
#define UI_EDITECONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "mycombobox.h"
#include "mylineedit.h"

QT_BEGIN_NAMESPACE

class Ui_EditeConfig
{
public:
    QLineEdit *lineEdit;
    QTabWidget *tabWidget;
    QWidget *Setting1Tab;
    QComboBox *PosmodeBox;
    QLabel *label;
    QLabel *label_2;
    QComboBox *FrequencyBox;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *DynamicsBox;
    QLabel *label_6;
    QComboBox *TidecorrBox;
    QLabel *label_7;
    QComboBox *IonooptBox;
    QLabel *label_8;
    QComboBox *TropoptBox;
    QComboBox *SatephBox;
    QLabel *label_9;
    QCheckBox *Posopt1CheckBox;
    QCheckBox *Posopt2CheckBox;
    QCheckBox *Posopt3CheckBox;
    QCheckBox *Posopt4CheckBox;
    QCheckBox *Posopt5CheckBox;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QCheckBox *NavsysGPSCheckBox;
    QCheckBox *NavsysGLONASSCheckBox;
    QCheckBox *NavsysGalileoCheckBox;
    QCheckBox *NavsysSBASCheckBox;
    QCheckBox *NavsysBeiDouCheckBox;
    QCheckBox *NavsysQZSSCheckBox;
    MyComboBox *ElmaskBox;
    MyLineEdit *SnrmaskLine;
    MyLineEdit *ExclsatsLine;
    QWidget *Setting2Tab;
    QLabel *label_13;
    QComboBox *ArmodeBox;
    QComboBox *GloarmodeBox;
    QLabel *label_15;
    MyComboBox *ArthresBox;
    QLabel *label_16;
    QLabel *label_17;
    MyComboBox *ArlockcntBox;
    MyComboBox *ArelmaskBox;
    MyComboBox *ElmaskholdBox_3;
    QLabel *label_18;
    MyComboBox *ArminfixBox;
    QLabel *label_19;
    QLabel *label_44;
    QWidget *Setting3Tab;
    QLabel *label_41;
    MyComboBox *MaxageBox;
    MyComboBox *SlipthresBox;
    MyComboBox *AroutcntBox;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_45;
    MyComboBox *RejionnoBox;
    QLabel *label_46;
    MyComboBox *RejgdopBox;
    QLabel *label_23;
    MyComboBox *NiterBox;
    QLabel *label_47;
    MyLineEdit *BaselenLine;
    QLabel *label_48;
    MyLineEdit *BasesigLine;
    QWidget *InputTab;
    MyComboBox *Inpstr1formatBox;
    MyComboBox *Baudrate1Box;
    MyComboBox *SerialPort1Box;
    QLabel *label_49;
    QLabel *label_50;
    QLabel *label_51;
    QLabel *label_52;
    QComboBox *Inpstrtype2Box;
    QLabel *label_53;
    QLabel *label_54;
    QLabel *label_55;
    MyComboBox *Inpstr2formatBox;
    MyComboBox *Baudrate2Box;
    QLabel *label_56;
    MyComboBox *SerialPort2Box;
    QLabel *label_57;
    QLabel *label_59;
    MyLineEdit *Impstr2PathBox;
    QPushButton *Impstr2PathButton;
    QWidget *tab;
    QComboBox *Outstr1typeBox;
    MyComboBox *OutstrformatBox;
    QLabel *label_72;
    MyLineEdit *Outstr1PathBox;
    QLabel *label_92;
    QLabel *label_93;
    QLabel *label_94;
    QLabel *label_95;
    QPushButton *Outstr1PathButton;
    MyComboBox *BaudrateOutBox;
    QLabel *label_96;
    MyComboBox *SerialPortOutBox;
    QComboBox *Logstr1typeBox;
    QLabel *label_97;
    MyLineEdit *Logstr1PathBox;
    QLabel *label_98;
    QPushButton *Logstr1PathButton;
    QLabel *label_99;
    QWidget *OutputTab;
    QLabel *label_14;
    QComboBox *SolformatBox;
    QLabel *label_58;
    QComboBox *OutheadBox;
    QLabel *label_60;
    QLabel *label_61;
    MyComboBox *TimendecBox;
    QComboBox *TimesysBox;
    QLabel *label_62;
    QLabel *label_63;
    QComboBox *DegformBox;
    MyLineEdit *FieldsepBox;
    QLabel *label_64;
    QLabel *label_65;
    QLabel *label_67;
    QLabel *label_68;
    QLabel *label_69;
    MyComboBox *GeoidBox;
    QComboBox *OutstatBox;
    QComboBox *HeightBox;
    MyLineEdit *Nmeaintv1Box;
    MyLineEdit *Nmeaintv2Box;
    QWidget *StatsTab;
    QLabel *label_20;
    QLabel *label_28;
    MyComboBox *PrnbiasBox;
    QLabel *label_29;
    MyComboBox *PrnionoBox;
    MyComboBox *PrnaccelvBox;
    QLabel *label_31;
    MyComboBox *PrnaccelhBox;
    MyComboBox *PrntropBox;
    QLabel *label_30;
    QLabel *label_34;
    QLabel *label_33;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    MyComboBox *Eratio2Box;
    QLabel *label_26;
    MyComboBox *ErrdopplerBox;
    MyComboBox *ErrphaseblBox;
    MyComboBox *Eratio1Box;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_22;
    QLabel *label_21;
    MyComboBox *ErrphaseBox;
    QLabel *label_27;
    MyComboBox *ErrphaseelBox;
    QFrame *line_8;
    QFrame *line_9;
    QFrame *line_10;
    QFrame *line_11;
    QFrame *line_12;
    QLabel *label_35;
    MyComboBox *ClckstabBox;
    QWidget *FilesTab;
    QLabel *label_32;
    MyLineEdit *SatantfileBox;
    QPushButton *SatantfileButton;
    MyLineEdit *RcvantfileBox;
    QLabel *label_36;
    QPushButton *RcvantfileButton;
    QLabel *label_37;
    MyLineEdit *GeoidfileBox;
    QPushButton *GeoidfileButton;
    QLabel *label_38;
    MyLineEdit *DcbfileBox;
    QPushButton *DcbfileButton;
    QLabel *label_39;
    MyLineEdit *EopfileBox;
    QPushButton *EopfileButton;
    QLabel *label_40;
    MyLineEdit *BlqfileBox;
    QPushButton *BlqfileButton;
    QLabel *label_66;
    MyLineEdit *TempdirBox;
    QPushButton *TempdirButton;
    QWidget *PositionsTab;
    QLabel *label_70;
    QFrame *line_13;
    QFrame *line_14;
    QFrame *line_15;
    QFrame *line_16;
    QFrame *line_17;
    QLabel *label_71;
    QFrame *line_18;
    QFrame *line_19;
    QFrame *line_20;
    QFrame *line_21;
    QFrame *line_22;
    QComboBox *RovpostypeBox;
    MyLineEdit *Rovpos1Box;
    MyLineEdit *Rovpos2Box;
    MyLineEdit *Rovpos3Box;
    QLabel *label_73;
    QLabel *label_74;
    QCheckBox *RovantCheckBox;
    MyComboBox *RovanttypeBox;
    QLabel *label_75;
    MyLineEdit *RovantdeleBox;
    QLabel *label_76;
    MyLineEdit *RovantdeluBox;
    MyLineEdit *RovantdelnBox;
    QLabel *label_77;
    MyLineEdit *BsantdeleBox;
    QLabel *label_78;
    MyLineEdit *BsantdeluBox;
    QLabel *label_79;
    QLabel *label_80;
    MyLineEdit *BsantdelnBox;
    MyLineEdit *Bspos1Box;
    QComboBox *BspostypeBox;
    QLabel *label_81;
    MyLineEdit *Bspos3Box;
    QLabel *label_82;
    MyLineEdit *Bspos2Box;
    MyComboBox *BsanttypeBox;
    QCheckBox *BsantCheckBox;
    QWidget *MiscTab;
    MyComboBox *SvrcycleBox;
    QLabel *label_83;
    MyComboBox *NmeacycleBox;
    QLabel *label_84;
    QLabel *label_85;
    MyComboBox *TimeoutBox;
    MyComboBox *ReconnectBox;
    QLabel *label_86;
    QLabel *label_87;
    MyComboBox *BuffsizeBox;
    MyComboBox *FswapmarginBox;
    QLabel *label_88;
    QComboBox *NavmsgselBox;
    QLabel *label_89;
    QLabel *label_90;
    MyLineEdit *ProxyadrBox;
    MyLineEdit *SbasatselBox;
    QLabel *label_91;
    QPushButton *ReturnButton;
    QPushButton *SaveButton;

    void setupUi(QDialog *EditeConfig)
    {
        if (EditeConfig->objectName().isEmpty())
            EditeConfig->setObjectName(QStringLiteral("EditeConfig"));
        EditeConfig->resize(800, 480);
        lineEdit = new QLineEdit(EditeConfig);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(265, 10, 270, 40));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QLatin1String("border-radius: 15px;\n"
"border: 1px solid black;\n"
""));
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(true);
        tabWidget = new QTabWidget(EditeConfig);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 60, 780, 360));
        Setting1Tab = new QWidget();
        Setting1Tab->setObjectName(QStringLiteral("Setting1Tab"));
        PosmodeBox = new QComboBox(Setting1Tab);
        PosmodeBox->setObjectName(QStringLiteral("PosmodeBox"));
        PosmodeBox->setGeometry(QRect(230, 10, 131, 40));
        PosmodeBox->setEditable(false);
        PosmodeBox->setFrame(true);
        label = new QLabel(Setting1Tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 131, 40));
        label_2 = new QLabel(Setting1Tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(true);
        label_2->setGeometry(QRect(420, 10, 131, 40));
        FrequencyBox = new QComboBox(Setting1Tab);
        FrequencyBox->setObjectName(QStringLiteral("FrequencyBox"));
        FrequencyBox->setEnabled(true);
        FrequencyBox->setGeometry(QRect(630, 10, 131, 40));
        FrequencyBox->setFrame(true);
        label_3 = new QLabel(Setting1Tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 60, 141, 40));
        label_4 = new QLabel(Setting1Tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(420, 60, 141, 40));
        label_5 = new QLabel(Setting1Tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 110, 141, 40));
        DynamicsBox = new QComboBox(Setting1Tab);
        DynamicsBox->setObjectName(QStringLiteral("DynamicsBox"));
        DynamicsBox->setGeometry(QRect(230, 110, 131, 40));
        DynamicsBox->setFrame(true);
        label_6 = new QLabel(Setting1Tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(420, 110, 161, 40));
        TidecorrBox = new QComboBox(Setting1Tab);
        TidecorrBox->setObjectName(QStringLiteral("TidecorrBox"));
        TidecorrBox->setGeometry(QRect(630, 110, 131, 40));
        TidecorrBox->setFrame(true);
        label_7 = new QLabel(Setting1Tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 160, 161, 40));
        IonooptBox = new QComboBox(Setting1Tab);
        IonooptBox->setObjectName(QStringLiteral("IonooptBox"));
        IonooptBox->setGeometry(QRect(190, 160, 171, 40));
        IonooptBox->setFrame(true);
        label_8 = new QLabel(Setting1Tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(420, 160, 171, 40));
        TropoptBox = new QComboBox(Setting1Tab);
        TropoptBox->setObjectName(QStringLiteral("TropoptBox"));
        TropoptBox->setGeometry(QRect(590, 160, 171, 40));
        TropoptBox->setFrame(true);
        SatephBox = new QComboBox(Setting1Tab);
        SatephBox->setObjectName(QStringLiteral("SatephBox"));
        SatephBox->setGeometry(QRect(195, 210, 165, 40));
        SatephBox->setFrame(true);
        label_9 = new QLabel(Setting1Tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 210, 181, 40));
        Posopt1CheckBox = new QCheckBox(Setting1Tab);
        Posopt1CheckBox->setObjectName(QStringLiteral("Posopt1CheckBox"));
        Posopt1CheckBox->setGeometry(QRect(420, 205, 97, 30));
        Posopt2CheckBox = new QCheckBox(Setting1Tab);
        Posopt2CheckBox->setObjectName(QStringLiteral("Posopt2CheckBox"));
        Posopt2CheckBox->setGeometry(QRect(540, 205, 91, 30));
        Posopt3CheckBox = new QCheckBox(Setting1Tab);
        Posopt3CheckBox->setObjectName(QStringLiteral("Posopt3CheckBox"));
        Posopt3CheckBox->setGeometry(QRect(660, 205, 101, 30));
        Posopt4CheckBox = new QCheckBox(Setting1Tab);
        Posopt4CheckBox->setObjectName(QStringLiteral("Posopt4CheckBox"));
        Posopt4CheckBox->setGeometry(QRect(460, 235, 97, 30));
        Posopt4CheckBox->setCheckable(true);
        Posopt4CheckBox->setChecked(false);
        Posopt5CheckBox = new QCheckBox(Setting1Tab);
        Posopt5CheckBox->setObjectName(QStringLiteral("Posopt5CheckBox"));
        Posopt5CheckBox->setGeometry(QRect(610, 235, 97, 30));
        label_10 = new QLabel(Setting1Tab);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 260, 141, 20));
        label_11 = new QLabel(Setting1Tab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 280, 141, 20));
        label_12 = new QLabel(Setting1Tab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(400, 280, 131, 40));
        NavsysGPSCheckBox = new QCheckBox(Setting1Tab);
        NavsysGPSCheckBox->setObjectName(QStringLiteral("NavsysGPSCheckBox"));
        NavsysGPSCheckBox->setGeometry(QRect(540, 275, 61, 20));
        NavsysGLONASSCheckBox = new QCheckBox(Setting1Tab);
        NavsysGLONASSCheckBox->setObjectName(QStringLiteral("NavsysGLONASSCheckBox"));
        NavsysGLONASSCheckBox->setGeometry(QRect(600, 275, 97, 20));
        NavsysGalileoCheckBox = new QCheckBox(Setting1Tab);
        NavsysGalileoCheckBox->setObjectName(QStringLiteral("NavsysGalileoCheckBox"));
        NavsysGalileoCheckBox->setGeometry(QRect(700, 275, 81, 20));
        NavsysSBASCheckBox = new QCheckBox(Setting1Tab);
        NavsysSBASCheckBox->setObjectName(QStringLiteral("NavsysSBASCheckBox"));
        NavsysSBASCheckBox->setGeometry(QRect(610, 305, 61, 20));
        NavsysBeiDouCheckBox = new QCheckBox(Setting1Tab);
        NavsysBeiDouCheckBox->setObjectName(QStringLiteral("NavsysBeiDouCheckBox"));
        NavsysBeiDouCheckBox->setGeometry(QRect(680, 305, 81, 20));
        NavsysQZSSCheckBox = new QCheckBox(Setting1Tab);
        NavsysQZSSCheckBox->setObjectName(QStringLiteral("NavsysQZSSCheckBox"));
        NavsysQZSSCheckBox->setGeometry(QRect(540, 305, 61, 20));
        ElmaskBox = new MyComboBox(Setting1Tab);
        ElmaskBox->setObjectName(QStringLiteral("ElmaskBox"));
        ElmaskBox->setGeometry(QRect(230, 60, 131, 40));
        ElmaskBox->setEditable(true);
        ElmaskBox->setFrame(true);
        SnrmaskLine = new MyLineEdit(Setting1Tab);
        SnrmaskLine->setObjectName(QStringLiteral("SnrmaskLine"));
        SnrmaskLine->setGeometry(QRect(630, 60, 131, 41));
        ExclsatsLine = new MyLineEdit(Setting1Tab);
        ExclsatsLine->setObjectName(QStringLiteral("ExclsatsLine"));
        ExclsatsLine->setGeometry(QRect(160, 260, 201, 41));
        tabWidget->addTab(Setting1Tab, QString());
        Setting2Tab = new QWidget();
        Setting2Tab->setObjectName(QStringLiteral("Setting2Tab"));
        label_13 = new QLabel(Setting2Tab);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 20, 321, 40));
        ArmodeBox = new QComboBox(Setting2Tab);
        ArmodeBox->setObjectName(QStringLiteral("ArmodeBox"));
        ArmodeBox->setGeometry(QRect(350, 20, 221, 40));
        ArmodeBox->setEditable(false);
        ArmodeBox->setFrame(true);
        GloarmodeBox = new QComboBox(Setting2Tab);
        GloarmodeBox->setObjectName(QStringLiteral("GloarmodeBox"));
        GloarmodeBox->setGeometry(QRect(350, 80, 221, 40));
        GloarmodeBox->setEditable(false);
        GloarmodeBox->setFrame(true);
        label_15 = new QLabel(Setting2Tab);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 140, 191, 40));
        ArthresBox = new MyComboBox(Setting2Tab);
        ArthresBox->setObjectName(QStringLiteral("ArthresBox"));
        ArthresBox->setGeometry(QRect(230, 140, 91, 40));
        ArthresBox->setEditable(true);
        ArthresBox->setFrame(true);
        label_16 = new QLabel(Setting2Tab);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(20, 200, 191, 40));
        label_17 = new QLabel(Setting2Tab);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(410, 200, 231, 40));
        ArlockcntBox = new MyComboBox(Setting2Tab);
        ArlockcntBox->setObjectName(QStringLiteral("ArlockcntBox"));
        ArlockcntBox->setGeometry(QRect(230, 200, 91, 40));
        ArlockcntBox->setEditable(true);
        ArlockcntBox->setFrame(true);
        ArelmaskBox = new MyComboBox(Setting2Tab);
        ArelmaskBox->setObjectName(QStringLiteral("ArelmaskBox"));
        ArelmaskBox->setGeometry(QRect(670, 200, 91, 40));
        ArelmaskBox->setEditable(true);
        ArelmaskBox->setFrame(true);
        ElmaskholdBox_3 = new MyComboBox(Setting2Tab);
        ElmaskholdBox_3->setObjectName(QStringLiteral("ElmaskholdBox_3"));
        ElmaskholdBox_3->setGeometry(QRect(670, 260, 91, 40));
        ElmaskholdBox_3->setEditable(true);
        ElmaskholdBox_3->setFrame(true);
        label_18 = new QLabel(Setting2Tab);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(410, 260, 241, 40));
        ArminfixBox = new MyComboBox(Setting2Tab);
        ArminfixBox->setObjectName(QStringLiteral("ArminfixBox"));
        ArminfixBox->setGeometry(QRect(230, 260, 91, 40));
        ArminfixBox->setEditable(true);
        ArminfixBox->setFrame(true);
        label_19 = new QLabel(Setting2Tab);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(20, 260, 191, 40));
        label_44 = new QLabel(Setting2Tab);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(20, 80, 321, 40));
        tabWidget->addTab(Setting2Tab, QString());
        Setting3Tab = new QWidget();
        Setting3Tab->setObjectName(QStringLiteral("Setting3Tab"));
        label_41 = new QLabel(Setting3Tab);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(20, 80, 191, 40));
        MaxageBox = new MyComboBox(Setting3Tab);
        MaxageBox->setObjectName(QStringLiteral("MaxageBox"));
        MaxageBox->setGeometry(QRect(240, 80, 141, 40));
        MaxageBox->setEditable(true);
        MaxageBox->setFrame(true);
        SlipthresBox = new MyComboBox(Setting3Tab);
        SlipthresBox->setObjectName(QStringLiteral("SlipthresBox"));
        SlipthresBox->setGeometry(QRect(670, 20, 91, 40));
        SlipthresBox->setEditable(true);
        SlipthresBox->setFrame(true);
        AroutcntBox = new MyComboBox(Setting3Tab);
        AroutcntBox->setObjectName(QStringLiteral("AroutcntBox"));
        AroutcntBox->setGeometry(QRect(240, 20, 91, 40));
        AroutcntBox->setEditable(true);
        AroutcntBox->setFrame(true);
        label_42 = new QLabel(Setting3Tab);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setGeometry(QRect(410, 20, 241, 40));
        label_43 = new QLabel(Setting3Tab);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(20, 20, 191, 40));
        label_45 = new QLabel(Setting3Tab);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(20, 140, 201, 40));
        RejionnoBox = new MyComboBox(Setting3Tab);
        RejionnoBox->setObjectName(QStringLiteral("RejionnoBox"));
        RejionnoBox->setGeometry(QRect(670, 140, 91, 40));
        RejionnoBox->setEditable(true);
        RejionnoBox->setFrame(true);
        label_46 = new QLabel(Setting3Tab);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setGeometry(QRect(410, 140, 241, 40));
        RejgdopBox = new MyComboBox(Setting3Tab);
        RejgdopBox->setObjectName(QStringLiteral("RejgdopBox"));
        RejgdopBox->setGeometry(QRect(240, 140, 91, 40));
        RejgdopBox->setEditable(true);
        RejgdopBox->setFrame(true);
        label_23 = new QLabel(Setting3Tab);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(20, 200, 231, 40));
        NiterBox = new MyComboBox(Setting3Tab);
        NiterBox->setObjectName(QStringLiteral("NiterBox"));
        NiterBox->setGeometry(QRect(240, 200, 91, 40));
        NiterBox->setEditable(true);
        NiterBox->setFrame(true);
        label_47 = new QLabel(Setting3Tab);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(20, 260, 301, 40));
        BaselenLine = new MyLineEdit(Setting3Tab);
        BaselenLine->setObjectName(QStringLiteral("BaselenLine"));
        BaselenLine->setGeometry(QRect(350, 260, 131, 41));
        label_48 = new QLabel(Setting3Tab);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setGeometry(QRect(513, 260, 16, 40));
        BasesigLine = new MyLineEdit(Setting3Tab);
        BasesigLine->setObjectName(QStringLiteral("BasesigLine"));
        BasesigLine->setGeometry(QRect(550, 260, 131, 41));
        tabWidget->addTab(Setting3Tab, QString());
        InputTab = new QWidget();
        InputTab->setObjectName(QStringLiteral("InputTab"));
        Inpstr1formatBox = new MyComboBox(InputTab);
        Inpstr1formatBox->setObjectName(QStringLiteral("Inpstr1formatBox"));
        Inpstr1formatBox->setGeometry(QRect(680, 50, 81, 41));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        Inpstr1formatBox->setFont(font1);
        Inpstr1formatBox->setEditable(true);
        Baudrate1Box = new MyComboBox(InputTab);
        Baudrate1Box->setObjectName(QStringLiteral("Baudrate1Box"));
        Baudrate1Box->setGeometry(QRect(400, 51, 91, 41));
        Baudrate1Box->setFont(font1);
        Baudrate1Box->setEditable(true);
        SerialPort1Box = new MyComboBox(InputTab);
        SerialPort1Box->setObjectName(QStringLiteral("SerialPort1Box"));
        SerialPort1Box->setGeometry(QRect(100, 50, 171, 41));
        SerialPort1Box->setFont(font1);
        SerialPort1Box->setEditable(true);
        label_49 = new QLabel(InputTab);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(30, 10, 111, 40));
        label_49->setFont(font1);
        label_50 = new QLabel(InputTab);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setGeometry(QRect(10, 50, 81, 40));
        label_51 = new QLabel(InputTab);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setGeometry(QRect(330, 50, 51, 40));
        label_52 = new QLabel(InputTab);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setGeometry(QRect(590, 50, 81, 40));
        Inpstrtype2Box = new QComboBox(InputTab);
        Inpstrtype2Box->setObjectName(QStringLiteral("Inpstrtype2Box"));
        Inpstrtype2Box->setGeometry(QRect(100, 140, 171, 41));
        Inpstrtype2Box->setFont(font1);
        Inpstrtype2Box->setEditable(false);
        label_53 = new QLabel(InputTab);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setGeometry(QRect(10, 140, 81, 40));
        label_54 = new QLabel(InputTab);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setGeometry(QRect(30, 100, 111, 40));
        label_54->setFont(font1);
        label_55 = new QLabel(InputTab);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setGeometry(QRect(330, 200, 51, 40));
        Inpstr2formatBox = new MyComboBox(InputTab);
        Inpstr2formatBox->setObjectName(QStringLiteral("Inpstr2formatBox"));
        Inpstr2formatBox->setGeometry(QRect(680, 200, 81, 41));
        Inpstr2formatBox->setFont(font1);
        Inpstr2formatBox->setEditable(true);
        Baudrate2Box = new MyComboBox(InputTab);
        Baudrate2Box->setObjectName(QStringLiteral("Baudrate2Box"));
        Baudrate2Box->setGeometry(QRect(400, 200, 91, 41));
        Baudrate2Box->setFont(font1);
        Baudrate2Box->setEditable(true);
        label_56 = new QLabel(InputTab);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setGeometry(QRect(590, 200, 81, 40));
        SerialPort2Box = new MyComboBox(InputTab);
        SerialPort2Box->setObjectName(QStringLiteral("SerialPort2Box"));
        SerialPort2Box->setGeometry(QRect(100, 200, 171, 41));
        SerialPort2Box->setFont(font1);
        SerialPort2Box->setEditable(true);
        label_57 = new QLabel(InputTab);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setGeometry(QRect(10, 200, 81, 40));
        label_59 = new QLabel(InputTab);
        label_59->setObjectName(QStringLiteral("label_59"));
        label_59->setGeometry(QRect(10, 260, 81, 40));
        Impstr2PathBox = new MyLineEdit(InputTab);
        Impstr2PathBox->setObjectName(QStringLiteral("Impstr2PathBox"));
        Impstr2PathBox->setGeometry(QRect(100, 260, 611, 40));
        Impstr2PathButton = new QPushButton(InputTab);
        Impstr2PathButton->setObjectName(QStringLiteral("Impstr2PathButton"));
        Impstr2PathButton->setGeometry(QRect(730, 260, 40, 40));
        tabWidget->addTab(InputTab, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        Outstr1typeBox = new QComboBox(tab);
        Outstr1typeBox->setObjectName(QStringLiteral("Outstr1typeBox"));
        Outstr1typeBox->setGeometry(QRect(100, 40, 171, 41));
        Outstr1typeBox->setFont(font1);
        Outstr1typeBox->setEditable(false);
        OutstrformatBox = new MyComboBox(tab);
        OutstrformatBox->setObjectName(QStringLiteral("OutstrformatBox"));
        OutstrformatBox->setGeometry(QRect(680, 90, 81, 41));
        OutstrformatBox->setFont(font1);
        OutstrformatBox->setEditable(true);
        label_72 = new QLabel(tab);
        label_72->setObjectName(QStringLiteral("label_72"));
        label_72->setGeometry(QRect(330, 90, 51, 40));
        Outstr1PathBox = new MyLineEdit(tab);
        Outstr1PathBox->setObjectName(QStringLiteral("Outstr1PathBox"));
        Outstr1PathBox->setGeometry(QRect(100, 140, 611, 40));
        label_92 = new QLabel(tab);
        label_92->setObjectName(QStringLiteral("label_92"));
        label_92->setGeometry(QRect(10, 140, 81, 40));
        label_93 = new QLabel(tab);
        label_93->setObjectName(QStringLiteral("label_93"));
        label_93->setGeometry(QRect(30, 0, 121, 40));
        label_93->setFont(font1);
        label_94 = new QLabel(tab);
        label_94->setObjectName(QStringLiteral("label_94"));
        label_94->setGeometry(QRect(10, 90, 81, 40));
        label_95 = new QLabel(tab);
        label_95->setObjectName(QStringLiteral("label_95"));
        label_95->setGeometry(QRect(590, 90, 81, 40));
        Outstr1PathButton = new QPushButton(tab);
        Outstr1PathButton->setObjectName(QStringLiteral("Outstr1PathButton"));
        Outstr1PathButton->setGeometry(QRect(730, 140, 40, 40));
        BaudrateOutBox = new MyComboBox(tab);
        BaudrateOutBox->setObjectName(QStringLiteral("BaudrateOutBox"));
        BaudrateOutBox->setGeometry(QRect(400, 90, 91, 41));
        BaudrateOutBox->setFont(font1);
        BaudrateOutBox->setEditable(true);
        label_96 = new QLabel(tab);
        label_96->setObjectName(QStringLiteral("label_96"));
        label_96->setGeometry(QRect(10, 40, 81, 40));
        SerialPortOutBox = new MyComboBox(tab);
        SerialPortOutBox->setObjectName(QStringLiteral("SerialPortOutBox"));
        SerialPortOutBox->setGeometry(QRect(100, 90, 171, 41));
        SerialPortOutBox->setFont(font1);
        SerialPortOutBox->setEditable(true);
        Logstr1typeBox = new QComboBox(tab);
        Logstr1typeBox->setObjectName(QStringLiteral("Logstr1typeBox"));
        Logstr1typeBox->setGeometry(QRect(100, 220, 171, 41));
        Logstr1typeBox->setFont(font1);
        Logstr1typeBox->setEditable(false);
        label_97 = new QLabel(tab);
        label_97->setObjectName(QStringLiteral("label_97"));
        label_97->setGeometry(QRect(10, 270, 81, 40));
        Logstr1PathBox = new MyLineEdit(tab);
        Logstr1PathBox->setObjectName(QStringLiteral("Logstr1PathBox"));
        Logstr1PathBox->setGeometry(QRect(100, 270, 611, 40));
        label_98 = new QLabel(tab);
        label_98->setObjectName(QStringLiteral("label_98"));
        label_98->setGeometry(QRect(30, 180, 111, 40));
        label_98->setFont(font1);
        Logstr1PathButton = new QPushButton(tab);
        Logstr1PathButton->setObjectName(QStringLiteral("Logstr1PathButton"));
        Logstr1PathButton->setGeometry(QRect(730, 270, 40, 40));
        label_99 = new QLabel(tab);
        label_99->setObjectName(QStringLiteral("label_99"));
        label_99->setGeometry(QRect(10, 220, 81, 40));
        tabWidget->addTab(tab, QString());
        OutputTab = new QWidget();
        OutputTab->setObjectName(QStringLiteral("OutputTab"));
        label_14 = new QLabel(OutputTab);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 20, 131, 40));
        SolformatBox = new QComboBox(OutputTab);
        SolformatBox->setObjectName(QStringLiteral("SolformatBox"));
        SolformatBox->setGeometry(QRect(220, 20, 131, 40));
        SolformatBox->setEditable(false);
        SolformatBox->setFrame(true);
        label_58 = new QLabel(OutputTab);
        label_58->setObjectName(QStringLiteral("label_58"));
        label_58->setGeometry(QRect(10, 70, 131, 40));
        OutheadBox = new QComboBox(OutputTab);
        OutheadBox->setObjectName(QStringLiteral("OutheadBox"));
        OutheadBox->setGeometry(QRect(220, 70, 131, 40));
        OutheadBox->setEditable(false);
        OutheadBox->setFrame(true);
        label_60 = new QLabel(OutputTab);
        label_60->setObjectName(QStringLiteral("label_60"));
        label_60->setGeometry(QRect(10, 120, 131, 40));
        label_61 = new QLabel(OutputTab);
        label_61->setObjectName(QStringLiteral("label_61"));
        label_61->setEnabled(true);
        label_61->setGeometry(QRect(410, 120, 161, 40));
        TimendecBox = new MyComboBox(OutputTab);
        TimendecBox->setObjectName(QStringLiteral("TimendecBox"));
        TimendecBox->setEnabled(true);
        TimendecBox->setGeometry(QRect(620, 120, 131, 40));
        TimendecBox->setEditable(true);
        TimendecBox->setFrame(true);
        TimesysBox = new QComboBox(OutputTab);
        TimesysBox->setObjectName(QStringLiteral("TimesysBox"));
        TimesysBox->setGeometry(QRect(200, 120, 151, 40));
        TimesysBox->setEditable(false);
        TimesysBox->setFrame(true);
        label_62 = new QLabel(OutputTab);
        label_62->setObjectName(QStringLiteral("label_62"));
        label_62->setGeometry(QRect(10, 170, 131, 40));
        label_63 = new QLabel(OutputTab);
        label_63->setObjectName(QStringLiteral("label_63"));
        label_63->setEnabled(true);
        label_63->setGeometry(QRect(410, 170, 141, 40));
        DegformBox = new QComboBox(OutputTab);
        DegformBox->setObjectName(QStringLiteral("DegformBox"));
        DegformBox->setGeometry(QRect(220, 170, 131, 40));
        DegformBox->setEditable(false);
        DegformBox->setFrame(true);
        FieldsepBox = new MyLineEdit(OutputTab);
        FieldsepBox->setObjectName(QStringLiteral("FieldsepBox"));
        FieldsepBox->setGeometry(QRect(620, 170, 131, 41));
        label_64 = new QLabel(OutputTab);
        label_64->setObjectName(QStringLiteral("label_64"));
        label_64->setGeometry(QRect(10, 220, 131, 40));
        label_65 = new QLabel(OutputTab);
        label_65->setObjectName(QStringLiteral("label_65"));
        label_65->setEnabled(true);
        label_65->setGeometry(QRect(410, 270, 191, 40));
        label_67 = new QLabel(OutputTab);
        label_67->setObjectName(QStringLiteral("label_67"));
        label_67->setGeometry(QRect(410, 20, 161, 40));
        label_68 = new QLabel(OutputTab);
        label_68->setObjectName(QStringLiteral("label_68"));
        label_68->setGeometry(QRect(10, 270, 191, 40));
        label_69 = new QLabel(OutputTab);
        label_69->setObjectName(QStringLiteral("label_69"));
        label_69->setEnabled(true);
        label_69->setGeometry(QRect(410, 220, 141, 40));
        GeoidBox = new MyComboBox(OutputTab);
        GeoidBox->setObjectName(QStringLiteral("GeoidBox"));
        GeoidBox->setEnabled(true);
        GeoidBox->setGeometry(QRect(620, 220, 131, 40));
        GeoidBox->setEditable(true);
        GeoidBox->setFrame(true);
        OutstatBox = new QComboBox(OutputTab);
        OutstatBox->setObjectName(QStringLiteral("OutstatBox"));
        OutstatBox->setGeometry(QRect(620, 20, 131, 40));
        OutstatBox->setEditable(false);
        OutstatBox->setFrame(true);
        HeightBox = new QComboBox(OutputTab);
        HeightBox->setObjectName(QStringLiteral("HeightBox"));
        HeightBox->setGeometry(QRect(220, 220, 131, 40));
        HeightBox->setEditable(false);
        HeightBox->setFrame(true);
        Nmeaintv1Box = new MyLineEdit(OutputTab);
        Nmeaintv1Box->setObjectName(QStringLiteral("Nmeaintv1Box"));
        Nmeaintv1Box->setGeometry(QRect(220, 270, 131, 41));
        Nmeaintv2Box = new MyLineEdit(OutputTab);
        Nmeaintv2Box->setObjectName(QStringLiteral("Nmeaintv2Box"));
        Nmeaintv2Box->setGeometry(QRect(620, 270, 131, 41));
        tabWidget->addTab(OutputTab, QString());
        StatsTab = new QWidget();
        StatsTab->setObjectName(QStringLiteral("StatsTab"));
        label_20 = new QLabel(StatsTab);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(30, -10, 221, 40));
        label_28 = new QLabel(StatsTab);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(30, 150, 241, 40));
        PrnbiasBox = new MyComboBox(StatsTab);
        PrnbiasBox->setObjectName(QStringLiteral("PrnbiasBox"));
        PrnbiasBox->setGeometry(QRect(260, 230, 121, 40));
        PrnbiasBox->setEditable(true);
        PrnbiasBox->setFrame(true);
        label_29 = new QLabel(StatsTab);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(20, 180, 241, 40));
        PrnionoBox = new MyComboBox(StatsTab);
        PrnionoBox->setObjectName(QStringLiteral("PrnionoBox"));
        PrnionoBox->setGeometry(QRect(300, 280, 81, 40));
        PrnionoBox->setEditable(true);
        PrnionoBox->setFrame(true);
        PrnaccelvBox = new MyComboBox(StatsTab);
        PrnaccelvBox->setObjectName(QStringLiteral("PrnaccelvBox"));
        PrnaccelvBox->setGeometry(QRect(640, 180, 121, 40));
        PrnaccelvBox->setEditable(true);
        PrnaccelvBox->setFrame(true);
        label_31 = new QLabel(StatsTab);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(20, 230, 231, 40));
        PrnaccelhBox = new MyComboBox(StatsTab);
        PrnaccelhBox->setObjectName(QStringLiteral("PrnaccelhBox"));
        PrnaccelhBox->setGeometry(QRect(260, 180, 121, 40));
        PrnaccelhBox->setEditable(true);
        PrnaccelhBox->setFrame(true);
        PrntropBox = new MyComboBox(StatsTab);
        PrntropBox->setObjectName(QStringLiteral("PrntropBox"));
        PrntropBox->setGeometry(QRect(640, 230, 121, 40));
        PrntropBox->setEditable(true);
        PrntropBox->setFrame(true);
        label_30 = new QLabel(StatsTab);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(400, 180, 241, 40));
        label_34 = new QLabel(StatsTab);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(400, 230, 231, 40));
        label_33 = new QLabel(StatsTab);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(20, 280, 271, 40));
        line = new QFrame(StatsTab);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 160, 15, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(StatsTab);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 170, 20, 155));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(StatsTab);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(10, 315, 380, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(StatsTab);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(270, 160, 500, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(StatsTab);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(380, 275, 20, 50));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(StatsTab);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(390, 265, 380, 20));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(StatsTab);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(760, 170, 20, 105));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        Eratio2Box = new MyComboBox(StatsTab);
        Eratio2Box->setObjectName(QStringLiteral("Eratio2Box"));
        Eratio2Box->setGeometry(QRect(640, 20, 121, 40));
        Eratio2Box->setEditable(true);
        Eratio2Box->setFrame(true);
        label_26 = new QLabel(StatsTab);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(20, 120, 271, 40));
        ErrdopplerBox = new MyComboBox(StatsTab);
        ErrdopplerBox->setObjectName(QStringLiteral("ErrdopplerBox"));
        ErrdopplerBox->setGeometry(QRect(640, 120, 121, 40));
        ErrdopplerBox->setEditable(true);
        ErrdopplerBox->setFrame(true);
        ErrphaseblBox = new MyComboBox(StatsTab);
        ErrphaseblBox->setObjectName(QStringLiteral("ErrphaseblBox"));
        ErrphaseblBox->setGeometry(QRect(300, 120, 81, 40));
        ErrphaseblBox->setEditable(true);
        ErrphaseblBox->setFrame(true);
        Eratio1Box = new MyComboBox(StatsTab);
        Eratio1Box->setObjectName(QStringLiteral("Eratio1Box"));
        Eratio1Box->setGeometry(QRect(260, 20, 121, 40));
        Eratio1Box->setEditable(true);
        Eratio1Box->setFrame(true);
        label_24 = new QLabel(StatsTab);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(20, 70, 231, 40));
        label_25 = new QLabel(StatsTab);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(400, 70, 231, 40));
        label_22 = new QLabel(StatsTab);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(400, 20, 241, 40));
        label_21 = new QLabel(StatsTab);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(20, 20, 241, 40));
        ErrphaseBox = new MyComboBox(StatsTab);
        ErrphaseBox->setObjectName(QStringLiteral("ErrphaseBox"));
        ErrphaseBox->setGeometry(QRect(260, 70, 121, 40));
        ErrphaseBox->setEditable(true);
        ErrphaseBox->setFrame(true);
        label_27 = new QLabel(StatsTab);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(400, 120, 231, 40));
        ErrphaseelBox = new MyComboBox(StatsTab);
        ErrphaseelBox->setObjectName(QStringLiteral("ErrphaseelBox"));
        ErrphaseelBox->setGeometry(QRect(640, 70, 121, 40));
        ErrphaseelBox->setEditable(true);
        ErrphaseelBox->setFrame(true);
        line_8 = new QFrame(StatsTab);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(0, 10, 20, 155));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(StatsTab);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(10, 0, 15, 20));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        line_10 = new QFrame(StatsTab);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setGeometry(QRect(249, 0, 520, 20));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        line_11 = new QFrame(StatsTab);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setGeometry(QRect(760, 10, 20, 155));
        line_11->setFrameShape(QFrame::VLine);
        line_11->setFrameShadow(QFrame::Sunken);
        line_12 = new QFrame(StatsTab);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setGeometry(QRect(10, 155, 760, 20));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);
        label_35 = new QLabel(StatsTab);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(400, 280, 231, 40));
        ClckstabBox = new MyComboBox(StatsTab);
        ClckstabBox->setObjectName(QStringLiteral("ClckstabBox"));
        ClckstabBox->setGeometry(QRect(640, 280, 121, 40));
        ClckstabBox->setEditable(true);
        ClckstabBox->setFrame(true);
        tabWidget->addTab(StatsTab, QString());
        label_20->raise();
        PrnbiasBox->raise();
        label_29->raise();
        PrnionoBox->raise();
        PrnaccelvBox->raise();
        label_31->raise();
        PrnaccelhBox->raise();
        PrntropBox->raise();
        label_30->raise();
        label_34->raise();
        label_33->raise();
        line->raise();
        line_2->raise();
        line_3->raise();
        line_4->raise();
        line_5->raise();
        line_6->raise();
        line_7->raise();
        Eratio2Box->raise();
        label_26->raise();
        ErrdopplerBox->raise();
        ErrphaseblBox->raise();
        Eratio1Box->raise();
        label_24->raise();
        label_25->raise();
        label_22->raise();
        label_21->raise();
        ErrphaseBox->raise();
        label_27->raise();
        ErrphaseelBox->raise();
        line_8->raise();
        line_9->raise();
        line_10->raise();
        line_11->raise();
        line_12->raise();
        label_28->raise();
        label_35->raise();
        ClckstabBox->raise();
        FilesTab = new QWidget();
        FilesTab->setObjectName(QStringLiteral("FilesTab"));
        label_32 = new QLabel(FilesTab);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(10, 20, 240, 40));
        SatantfileBox = new MyLineEdit(FilesTab);
        SatantfileBox->setObjectName(QStringLiteral("SatantfileBox"));
        SatantfileBox->setGeometry(QRect(260, 20, 450, 40));
        SatantfileButton = new QPushButton(FilesTab);
        SatantfileButton->setObjectName(QStringLiteral("SatantfileButton"));
        SatantfileButton->setGeometry(QRect(720, 20, 40, 40));
        RcvantfileBox = new MyLineEdit(FilesTab);
        RcvantfileBox->setObjectName(QStringLiteral("RcvantfileBox"));
        RcvantfileBox->setGeometry(QRect(330, 70, 380, 40));
        label_36 = new QLabel(FilesTab);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(10, 70, 310, 40));
        RcvantfileButton = new QPushButton(FilesTab);
        RcvantfileButton->setObjectName(QStringLiteral("RcvantfileButton"));
        RcvantfileButton->setGeometry(QRect(720, 70, 40, 40));
        label_37 = new QLabel(FilesTab);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(10, 120, 110, 40));
        GeoidfileBox = new MyLineEdit(FilesTab);
        GeoidfileBox->setObjectName(QStringLiteral("GeoidfileBox"));
        GeoidfileBox->setGeometry(QRect(130, 120, 580, 40));
        GeoidfileButton = new QPushButton(FilesTab);
        GeoidfileButton->setObjectName(QStringLiteral("GeoidfileButton"));
        GeoidfileButton->setGeometry(QRect(720, 120, 40, 40));
        label_38 = new QLabel(FilesTab);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(10, 170, 100, 40));
        DcbfileBox = new MyLineEdit(FilesTab);
        DcbfileBox->setObjectName(QStringLiteral("DcbfileBox"));
        DcbfileBox->setGeometry(QRect(110, 170, 210, 41));
        DcbfileButton = new QPushButton(FilesTab);
        DcbfileButton->setObjectName(QStringLiteral("DcbfileButton"));
        DcbfileButton->setGeometry(QRect(330, 170, 40, 40));
        label_39 = new QLabel(FilesTab);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(400, 170, 100, 40));
        EopfileBox = new MyLineEdit(FilesTab);
        EopfileBox->setObjectName(QStringLiteral("EopfileBox"));
        EopfileBox->setGeometry(QRect(500, 170, 210, 40));
        EopfileButton = new QPushButton(FilesTab);
        EopfileButton->setObjectName(QStringLiteral("EopfileButton"));
        EopfileButton->setGeometry(QRect(720, 170, 40, 40));
        label_40 = new QLabel(FilesTab);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(10, 220, 190, 40));
        BlqfileBox = new MyLineEdit(FilesTab);
        BlqfileBox->setObjectName(QStringLiteral("BlqfileBox"));
        BlqfileBox->setGeometry(QRect(220, 220, 490, 40));
        BlqfileButton = new QPushButton(FilesTab);
        BlqfileButton->setObjectName(QStringLiteral("BlqfileButton"));
        BlqfileButton->setGeometry(QRect(720, 220, 40, 40));
        label_66 = new QLabel(FilesTab);
        label_66->setObjectName(QStringLiteral("label_66"));
        label_66->setGeometry(QRect(10, 270, 180, 40));
        TempdirBox = new MyLineEdit(FilesTab);
        TempdirBox->setObjectName(QStringLiteral("TempdirBox"));
        TempdirBox->setGeometry(QRect(210, 270, 500, 40));
        TempdirButton = new QPushButton(FilesTab);
        TempdirButton->setObjectName(QStringLiteral("TempdirButton"));
        TempdirButton->setGeometry(QRect(720, 270, 40, 40));
        tabWidget->addTab(FilesTab, QString());
        PositionsTab = new QWidget();
        PositionsTab->setObjectName(QStringLiteral("PositionsTab"));
        label_70 = new QLabel(PositionsTab);
        label_70->setObjectName(QStringLiteral("label_70"));
        label_70->setGeometry(QRect(30, -10, 221, 40));
        line_13 = new QFrame(PositionsTab);
        line_13->setObjectName(QStringLiteral("line_13"));
        line_13->setGeometry(QRect(10, 155, 760, 20));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);
        line_14 = new QFrame(PositionsTab);
        line_14->setObjectName(QStringLiteral("line_14"));
        line_14->setGeometry(QRect(760, 10, 20, 155));
        line_14->setFrameShape(QFrame::VLine);
        line_14->setFrameShadow(QFrame::Sunken);
        line_15 = new QFrame(PositionsTab);
        line_15->setObjectName(QStringLiteral("line_15"));
        line_15->setGeometry(QRect(78, 0, 691, 20));
        line_15->setFrameShape(QFrame::HLine);
        line_15->setFrameShadow(QFrame::Sunken);
        line_16 = new QFrame(PositionsTab);
        line_16->setObjectName(QStringLiteral("line_16"));
        line_16->setGeometry(QRect(10, 0, 15, 20));
        line_16->setFrameShape(QFrame::HLine);
        line_16->setFrameShadow(QFrame::Sunken);
        line_17 = new QFrame(PositionsTab);
        line_17->setObjectName(QStringLiteral("line_17"));
        line_17->setGeometry(QRect(0, 10, 20, 155));
        line_17->setFrameShape(QFrame::VLine);
        line_17->setFrameShadow(QFrame::Sunken);
        label_71 = new QLabel(PositionsTab);
        label_71->setObjectName(QStringLiteral("label_71"));
        label_71->setGeometry(QRect(30, 150, 221, 40));
        line_18 = new QFrame(PositionsTab);
        line_18->setObjectName(QStringLiteral("line_18"));
        line_18->setGeometry(QRect(10, 315, 760, 20));
        line_18->setFrameShape(QFrame::HLine);
        line_18->setFrameShadow(QFrame::Sunken);
        line_19 = new QFrame(PositionsTab);
        line_19->setObjectName(QStringLiteral("line_19"));
        line_19->setGeometry(QRect(760, 170, 20, 155));
        line_19->setFrameShape(QFrame::VLine);
        line_19->setFrameShadow(QFrame::Sunken);
        line_20 = new QFrame(PositionsTab);
        line_20->setObjectName(QStringLiteral("line_20"));
        line_20->setGeometry(QRect(128, 160, 641, 20));
        line_20->setFrameShape(QFrame::HLine);
        line_20->setFrameShadow(QFrame::Sunken);
        line_21 = new QFrame(PositionsTab);
        line_21->setObjectName(QStringLiteral("line_21"));
        line_21->setGeometry(QRect(10, 160, 15, 20));
        line_21->setFrameShape(QFrame::HLine);
        line_21->setFrameShadow(QFrame::Sunken);
        line_22 = new QFrame(PositionsTab);
        line_22->setObjectName(QStringLiteral("line_22"));
        line_22->setGeometry(QRect(0, 170, 20, 155));
        line_22->setFrameShape(QFrame::VLine);
        line_22->setFrameShadow(QFrame::Sunken);
        RovpostypeBox = new QComboBox(PositionsTab);
        RovpostypeBox->setObjectName(QStringLiteral("RovpostypeBox"));
        RovpostypeBox->setGeometry(QRect(20, 20, 201, 40));
        RovpostypeBox->setEditable(false);
        RovpostypeBox->setFrame(true);
        Rovpos1Box = new MyLineEdit(PositionsTab);
        Rovpos1Box->setObjectName(QStringLiteral("Rovpos1Box"));
        Rovpos1Box->setGeometry(QRect(240, 20, 130, 40));
        Rovpos2Box = new MyLineEdit(PositionsTab);
        Rovpos2Box->setObjectName(QStringLiteral("Rovpos2Box"));
        Rovpos2Box->setGeometry(QRect(410, 20, 130, 40));
        Rovpos3Box = new MyLineEdit(PositionsTab);
        Rovpos3Box->setObjectName(QStringLiteral("Rovpos3Box"));
        Rovpos3Box->setGeometry(QRect(580, 20, 130, 40));
        label_73 = new QLabel(PositionsTab);
        label_73->setObjectName(QStringLiteral("label_73"));
        label_73->setGeometry(QRect(388, 20, 16, 40));
        label_74 = new QLabel(PositionsTab);
        label_74->setObjectName(QStringLiteral("label_74"));
        label_74->setGeometry(QRect(558, 20, 16, 40));
        RovantCheckBox = new QCheckBox(PositionsTab);
        RovantCheckBox->setObjectName(QStringLiteral("RovantCheckBox"));
        RovantCheckBox->setGeometry(QRect(20, 70, 191, 41));
        RovanttypeBox = new MyComboBox(PositionsTab);
        RovanttypeBox->setObjectName(QStringLiteral("RovanttypeBox"));
        RovanttypeBox->setEnabled(false);
        RovanttypeBox->setGeometry(QRect(240, 70, 521, 40));
        RovanttypeBox->setEditable(true);
        RovanttypeBox->setFrame(true);
        label_75 = new QLabel(PositionsTab);
        label_75->setObjectName(QStringLiteral("label_75"));
        label_75->setGeometry(QRect(388, 120, 16, 40));
        RovantdeleBox = new MyLineEdit(PositionsTab);
        RovantdeleBox->setObjectName(QStringLiteral("RovantdeleBox"));
        RovantdeleBox->setGeometry(QRect(240, 120, 130, 40));
        label_76 = new QLabel(PositionsTab);
        label_76->setObjectName(QStringLiteral("label_76"));
        label_76->setGeometry(QRect(558, 120, 16, 40));
        RovantdeluBox = new MyLineEdit(PositionsTab);
        RovantdeluBox->setObjectName(QStringLiteral("RovantdeluBox"));
        RovantdeluBox->setGeometry(QRect(580, 120, 130, 40));
        RovantdelnBox = new MyLineEdit(PositionsTab);
        RovantdelnBox->setObjectName(QStringLiteral("RovantdelnBox"));
        RovantdelnBox->setGeometry(QRect(410, 120, 130, 40));
        label_77 = new QLabel(PositionsTab);
        label_77->setObjectName(QStringLiteral("label_77"));
        label_77->setGeometry(QRect(20, 120, 240, 40));
        BsantdeleBox = new MyLineEdit(PositionsTab);
        BsantdeleBox->setObjectName(QStringLiteral("BsantdeleBox"));
        BsantdeleBox->setGeometry(QRect(240, 280, 130, 40));
        label_78 = new QLabel(PositionsTab);
        label_78->setObjectName(QStringLiteral("label_78"));
        label_78->setGeometry(QRect(20, 280, 240, 40));
        BsantdeluBox = new MyLineEdit(PositionsTab);
        BsantdeluBox->setObjectName(QStringLiteral("BsantdeluBox"));
        BsantdeluBox->setGeometry(QRect(580, 280, 130, 40));
        label_79 = new QLabel(PositionsTab);
        label_79->setObjectName(QStringLiteral("label_79"));
        label_79->setGeometry(QRect(388, 180, 16, 40));
        label_80 = new QLabel(PositionsTab);
        label_80->setObjectName(QStringLiteral("label_80"));
        label_80->setGeometry(QRect(558, 280, 16, 40));
        BsantdelnBox = new MyLineEdit(PositionsTab);
        BsantdelnBox->setObjectName(QStringLiteral("BsantdelnBox"));
        BsantdelnBox->setGeometry(QRect(410, 280, 130, 40));
        Bspos1Box = new MyLineEdit(PositionsTab);
        Bspos1Box->setObjectName(QStringLiteral("Bspos1Box"));
        Bspos1Box->setGeometry(QRect(240, 180, 130, 40));
        BspostypeBox = new QComboBox(PositionsTab);
        BspostypeBox->setObjectName(QStringLiteral("BspostypeBox"));
        BspostypeBox->setGeometry(QRect(20, 180, 201, 40));
        BspostypeBox->setEditable(false);
        BspostypeBox->setFrame(true);
        label_81 = new QLabel(PositionsTab);
        label_81->setObjectName(QStringLiteral("label_81"));
        label_81->setGeometry(QRect(558, 180, 16, 40));
        Bspos3Box = new MyLineEdit(PositionsTab);
        Bspos3Box->setObjectName(QStringLiteral("Bspos3Box"));
        Bspos3Box->setGeometry(QRect(580, 180, 130, 40));
        label_82 = new QLabel(PositionsTab);
        label_82->setObjectName(QStringLiteral("label_82"));
        label_82->setGeometry(QRect(388, 280, 16, 40));
        Bspos2Box = new MyLineEdit(PositionsTab);
        Bspos2Box->setObjectName(QStringLiteral("Bspos2Box"));
        Bspos2Box->setGeometry(QRect(410, 180, 130, 40));
        BsanttypeBox = new MyComboBox(PositionsTab);
        BsanttypeBox->setObjectName(QStringLiteral("BsanttypeBox"));
        BsanttypeBox->setEnabled(false);
        BsanttypeBox->setGeometry(QRect(240, 230, 521, 40));
        BsanttypeBox->setEditable(true);
        BsanttypeBox->setFrame(true);
        BsantCheckBox = new QCheckBox(PositionsTab);
        BsantCheckBox->setObjectName(QStringLiteral("BsantCheckBox"));
        BsantCheckBox->setGeometry(QRect(20, 230, 191, 41));
        tabWidget->addTab(PositionsTab, QString());
        MiscTab = new QWidget();
        MiscTab->setObjectName(QStringLiteral("MiscTab"));
        SvrcycleBox = new MyComboBox(MiscTab);
        SvrcycleBox->setObjectName(QStringLiteral("SvrcycleBox"));
        SvrcycleBox->setGeometry(QRect(220, 30, 150, 40));
        SvrcycleBox->setEditable(true);
        SvrcycleBox->setFrame(true);
        label_83 = new QLabel(MiscTab);
        label_83->setObjectName(QStringLiteral("label_83"));
        label_83->setGeometry(QRect(20, 30, 190, 40));
        NmeacycleBox = new MyComboBox(MiscTab);
        NmeacycleBox->setObjectName(QStringLiteral("NmeacycleBox"));
        NmeacycleBox->setGeometry(QRect(220, 150, 150, 40));
        NmeacycleBox->setEditable(true);
        NmeacycleBox->setFrame(true);
        label_84 = new QLabel(MiscTab);
        label_84->setObjectName(QStringLiteral("label_84"));
        label_84->setGeometry(QRect(20, 150, 190, 40));
        label_85 = new QLabel(MiscTab);
        label_85->setObjectName(QStringLiteral("label_85"));
        label_85->setGeometry(QRect(20, 90, 190, 40));
        TimeoutBox = new MyComboBox(MiscTab);
        TimeoutBox->setObjectName(QStringLiteral("TimeoutBox"));
        TimeoutBox->setGeometry(QRect(220, 90, 150, 40));
        TimeoutBox->setEditable(true);
        TimeoutBox->setFrame(true);
        ReconnectBox = new MyComboBox(MiscTab);
        ReconnectBox->setObjectName(QStringLiteral("ReconnectBox"));
        ReconnectBox->setGeometry(QRect(610, 90, 150, 40));
        ReconnectBox->setEditable(true);
        ReconnectBox->setFrame(true);
        label_86 = new QLabel(MiscTab);
        label_86->setObjectName(QStringLiteral("label_86"));
        label_86->setGeometry(QRect(410, 90, 190, 40));
        label_87 = new QLabel(MiscTab);
        label_87->setObjectName(QStringLiteral("label_87"));
        label_87->setGeometry(QRect(410, 30, 201, 40));
        BuffsizeBox = new MyComboBox(MiscTab);
        BuffsizeBox->setObjectName(QStringLiteral("BuffsizeBox"));
        BuffsizeBox->setGeometry(QRect(610, 30, 150, 40));
        BuffsizeBox->setEditable(true);
        BuffsizeBox->setFrame(true);
        FswapmarginBox = new MyComboBox(MiscTab);
        FswapmarginBox->setObjectName(QStringLiteral("FswapmarginBox"));
        FswapmarginBox->setGeometry(QRect(610, 150, 150, 40));
        FswapmarginBox->setEditable(true);
        FswapmarginBox->setFrame(true);
        label_88 = new QLabel(MiscTab);
        label_88->setObjectName(QStringLiteral("label_88"));
        label_88->setGeometry(QRect(410, 150, 190, 40));
        NavmsgselBox = new QComboBox(MiscTab);
        NavmsgselBox->setObjectName(QStringLiteral("NavmsgselBox"));
        NavmsgselBox->setGeometry(QRect(240, 210, 131, 40));
        NavmsgselBox->setEditable(false);
        NavmsgselBox->setFrame(true);
        label_89 = new QLabel(MiscTab);
        label_89->setObjectName(QStringLiteral("label_89"));
        label_89->setGeometry(QRect(20, 210, 211, 40));
        label_90 = new QLabel(MiscTab);
        label_90->setObjectName(QStringLiteral("label_90"));
        label_90->setGeometry(QRect(410, 210, 131, 40));
        ProxyadrBox = new MyLineEdit(MiscTab);
        ProxyadrBox->setObjectName(QStringLiteral("ProxyadrBox"));
        ProxyadrBox->setGeometry(QRect(550, 210, 211, 41));
        SbasatselBox = new MyLineEdit(MiscTab);
        SbasatselBox->setObjectName(QStringLiteral("SbasatselBox"));
        SbasatselBox->setGeometry(QRect(270, 270, 491, 41));
        label_91 = new QLabel(MiscTab);
        label_91->setObjectName(QStringLiteral("label_91"));
        label_91->setGeometry(QRect(20, 270, 221, 40));
        tabWidget->addTab(MiscTab, QString());
        ReturnButton = new QPushButton(EditeConfig);
        ReturnButton->setObjectName(QStringLiteral("ReturnButton"));
        ReturnButton->setGeometry(QRect(20, 429, 370, 41));
        ReturnButton->setFont(font1);
        ReturnButton->setStyleSheet(QLatin1String("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));
        SaveButton = new QPushButton(EditeConfig);
        SaveButton->setObjectName(QStringLiteral("SaveButton"));
        SaveButton->setGeometry(QRect(410, 430, 370, 41));
        SaveButton->setFont(font1);
        SaveButton->setStyleSheet(QLatin1String("border-radius: 15px;\n"
"border: 1px solid black;\n"
"background-color: rgb(230, 230, 230);"));

        retranslateUi(EditeConfig);

        tabWidget->setCurrentIndex(0);
        PosmodeBox->setCurrentIndex(0);
        FrequencyBox->setCurrentIndex(0);
        DynamicsBox->setCurrentIndex(0);
        TidecorrBox->setCurrentIndex(0);
        IonooptBox->setCurrentIndex(0);
        TropoptBox->setCurrentIndex(0);
        SatephBox->setCurrentIndex(4);
        ElmaskBox->setCurrentIndex(0);
        ArmodeBox->setCurrentIndex(0);
        GloarmodeBox->setCurrentIndex(1);
        ArthresBox->setCurrentIndex(2);
        ArlockcntBox->setCurrentIndex(0);
        ArelmaskBox->setCurrentIndex(0);
        ElmaskholdBox_3->setCurrentIndex(0);
        ArminfixBox->setCurrentIndex(1);
        MaxageBox->setCurrentIndex(2);
        SlipthresBox->setCurrentIndex(5);
        AroutcntBox->setCurrentIndex(0);
        RejionnoBox->setCurrentIndex(2);
        RejgdopBox->setCurrentIndex(2);
        NiterBox->setCurrentIndex(0);
        Inpstr2formatBox->setCurrentIndex(10);
        Baudrate2Box->setCurrentIndex(1);
        SerialPort2Box->setCurrentIndex(0);
        OutstrformatBox->setCurrentIndex(10);
        BaudrateOutBox->setCurrentIndex(1);
        SerialPortOutBox->setCurrentIndex(0);
        SolformatBox->setCurrentIndex(0);
        OutheadBox->setCurrentIndex(0);
        TimendecBox->setCurrentIndex(3);
        TimesysBox->setCurrentIndex(0);
        DegformBox->setCurrentIndex(0);
        GeoidBox->setCurrentIndex(0);
        OutstatBox->setCurrentIndex(0);
        HeightBox->setCurrentIndex(0);
        PrnbiasBox->setCurrentIndex(2);
        PrnionoBox->setCurrentIndex(3);
        PrnaccelvBox->setCurrentIndex(1);
        PrnaccelhBox->setCurrentIndex(3);
        PrntropBox->setCurrentIndex(3);
        Eratio2Box->setCurrentIndex(1);
        ErrdopplerBox->setCurrentIndex(1);
        ErrphaseblBox->setCurrentIndex(2);
        Eratio1Box->setCurrentIndex(1);
        ErrphaseBox->setCurrentIndex(2);
        ErrphaseelBox->setCurrentIndex(2);
        ClckstabBox->setCurrentIndex(0);
        RovpostypeBox->setCurrentIndex(0);
        RovanttypeBox->setCurrentIndex(0);
        BspostypeBox->setCurrentIndex(0);
        BsanttypeBox->setCurrentIndex(0);
        SvrcycleBox->setCurrentIndex(1);
        NmeacycleBox->setCurrentIndex(2);
        TimeoutBox->setCurrentIndex(3);
        ReconnectBox->setCurrentIndex(2);
        BuffsizeBox->setCurrentIndex(0);
        FswapmarginBox->setCurrentIndex(4);
        NavmsgselBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(EditeConfig);
    } // setupUi

    void retranslateUi(QDialog *EditeConfig)
    {
        EditeConfig->setWindowTitle(QApplication::translate("EditeConfig", "Dialog", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("EditeConfig", "EDIT CONFIGURATION", Q_NULLPTR));
        PosmodeBox->clear();
        PosmodeBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "Single", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "DGPS/DGNSS", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Kinematic", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Static", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Moving-Base", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Fixed", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "PPP Kinematic", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "PPP Static", Q_NULLPTR)
        );
        label->setText(QApplication::translate("EditeConfig", "Positionnig Mode", Q_NULLPTR));
        label_2->setText(QApplication::translate("EditeConfig", "Frequencies", Q_NULLPTR));
        FrequencyBox->clear();
        FrequencyBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "L1", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "L1+L2", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "L1+L2+L5", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("EditeConfig", "Elevation Mask (\302\260)", Q_NULLPTR));
        label_4->setText(QApplication::translate("EditeConfig", "SNR Mask (dBHz)", Q_NULLPTR));
        label_5->setText(QApplication::translate("EditeConfig", "Rec Dynamics", Q_NULLPTR));
        DynamicsBox->clear();
        DynamicsBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "OFF", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "ON", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("EditeConfig", "Earth Tides Correction", Q_NULLPTR));
        TidecorrBox->clear();
        TidecorrBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "OFF", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Solid", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("EditeConfig", "Ionosphere Correction", Q_NULLPTR));
        IonooptBox->clear();
        IonooptBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "OFF", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Broadcast", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "SBAS", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Iono-Free LC", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Estimate STEC", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "IONEX TEC", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "QZSS Broadcast", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "QZSS LEX", Q_NULLPTR)
        );
        label_8->setText(QApplication::translate("EditeConfig", "Troposphere Correction", Q_NULLPTR));
        TropoptBox->clear();
        TropoptBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "OFF", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Saastamoinen", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "SBAS", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Estimate ZTD", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Estimate ZTD+GRAD", Q_NULLPTR)
        );
        SatephBox->clear();
        SatephBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "Broadcast", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Precise", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Broadcast+SBAS", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Broadcast+SSR APC", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Broadcast+SSR CoM", Q_NULLPTR)
        );
        label_9->setText(QApplication::translate("EditeConfig", "Satellite Ephemeris/Clock", Q_NULLPTR));
        Posopt1CheckBox->setText(QApplication::translate("EditeConfig", "Sat PCV", Q_NULLPTR));
        Posopt2CheckBox->setText(QApplication::translate("EditeConfig", "Rec PCV", Q_NULLPTR));
        Posopt3CheckBox->setText(QApplication::translate("EditeConfig", "PhWindup", Q_NULLPTR));
        Posopt4CheckBox->setText(QApplication::translate("EditeConfig", "Reject ECL", Q_NULLPTR));
        Posopt5CheckBox->setText(QApplication::translate("EditeConfig", "Raim FDE", Q_NULLPTR));
        label_10->setText(QApplication::translate("EditeConfig", "Excluded Satellites", Q_NULLPTR));
        label_11->setText(QApplication::translate("EditeConfig", "(+PRN : Included)", Q_NULLPTR));
        label_12->setText(QApplication::translate("EditeConfig", "Navigation System", Q_NULLPTR));
        NavsysGPSCheckBox->setText(QApplication::translate("EditeConfig", "GPS", Q_NULLPTR));
        NavsysGLONASSCheckBox->setText(QApplication::translate("EditeConfig", "GLONASS", Q_NULLPTR));
        NavsysGalileoCheckBox->setText(QApplication::translate("EditeConfig", "Galileo", Q_NULLPTR));
        NavsysSBASCheckBox->setText(QApplication::translate("EditeConfig", "SBAS", Q_NULLPTR));
        NavsysBeiDouCheckBox->setText(QApplication::translate("EditeConfig", "BeiDou", Q_NULLPTR));
        NavsysQZSSCheckBox->setText(QApplication::translate("EditeConfig", "QZSS", Q_NULLPTR));
        ElmaskBox->clear();
        ElmaskBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "5", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "10", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "15", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "20", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "25", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "30", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "35", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "40", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "45", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "50", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "55", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "60", Q_NULLPTR)
        );
        SnrmaskLine->setText(QApplication::translate("EditeConfig", "0", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Setting1Tab), QApplication::translate("EditeConfig", "Setting 1", Q_NULLPTR));
        label_13->setText(QApplication::translate("EditeConfig", "Integer Ambiguity Resolution (GPS)", Q_NULLPTR));
        ArmodeBox->clear();
        ArmodeBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "OFF", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Continuous", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Instantaneous", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Fix and Hold", Q_NULLPTR)
        );
        GloarmodeBox->clear();
        GloarmodeBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "OFF", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "ON", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Auto calibration", Q_NULLPTR)
        );
        label_15->setText(QApplication::translate("EditeConfig", "Min Ratio to Fix Ambiguity", Q_NULLPTR));
        ArthresBox->clear();
        ArthresBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "1.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "2.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "3.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "4.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "5.0", Q_NULLPTR)
        );
        label_16->setText(QApplication::translate("EditeConfig", "Min Lock to Fix Ambiguity", Q_NULLPTR));
        label_17->setText(QApplication::translate("EditeConfig", "Min Elevation (\302\260) to Fix Ambiguity", Q_NULLPTR));
        ArlockcntBox->clear();
        ArlockcntBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "1.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "2.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "3.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "4.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "5.0", Q_NULLPTR)
        );
        ArelmaskBox->clear();
        ArelmaskBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "1.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "2.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "3.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "4.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "5.0", Q_NULLPTR)
        );
        ElmaskholdBox_3->clear();
        ElmaskholdBox_3->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "1.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "2.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "3.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "4.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "5.0", Q_NULLPTR)
        );
        label_18->setText(QApplication::translate("EditeConfig", "Min Elevation (\302\260) to Hold Ambiguity", Q_NULLPTR));
        ArminfixBox->clear();
        ArminfixBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "5.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "10.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "15.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "20.0", Q_NULLPTR)
        );
        label_19->setText(QApplication::translate("EditeConfig", "Min Fix to Lock Ambiguity", Q_NULLPTR));
        label_44->setText(QApplication::translate("EditeConfig", "Integer Ambiguity Resolution (GLONASS)", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Setting2Tab), QApplication::translate("EditeConfig", "Setting 2", Q_NULLPTR));
        label_41->setText(QApplication::translate("EditeConfig", "Max Age of Differential (s)", Q_NULLPTR));
        MaxageBox->clear();
        MaxageBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "10", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "20", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "30", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "40", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "50", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "60", Q_NULLPTR)
        );
        SlipthresBox->clear();
        SlipthresBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0.01", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.02", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.02", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.03", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.04", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.05", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.06", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.07", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.08", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.09", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.10", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.15", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.20", Q_NULLPTR)
        );
        AroutcntBox->clear();
        AroutcntBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "5.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "10.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "15.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "20.0", Q_NULLPTR)
        );
        label_42->setText(QApplication::translate("EditeConfig", "Slip Threshold (m)", Q_NULLPTR));
        label_43->setText(QApplication::translate("EditeConfig", "Outage to Reset Ambiguity", Q_NULLPTR));
        label_45->setText(QApplication::translate("EditeConfig", "Reject Thresold of GDOP", Q_NULLPTR));
        RejionnoBox->clear();
        RejionnoBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "10", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "20", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "30", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "40", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "50", Q_NULLPTR)
        );
        label_46->setText(QApplication::translate("EditeConfig", "Reject Thresold of Innovation (m)", Q_NULLPTR));
        RejgdopBox->clear();
        RejgdopBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "10", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "20", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "30", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "40", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "50", Q_NULLPTR)
        );
        label_23->setText(QApplication::translate("EditeConfig", "Number of Iterations", Q_NULLPTR));
        NiterBox->clear();
        NiterBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "1", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "2", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "3", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "4", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "5", Q_NULLPTR)
        );
        label_47->setText(QApplication::translate("EditeConfig", "Baseline Length Constraint (length / std) (m)", Q_NULLPTR));
        BaselenLine->setText(QString());
        label_48->setText(QApplication::translate("EditeConfig", "/", Q_NULLPTR));
        BasesigLine->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Setting3Tab), QApplication::translate("EditeConfig", "Setting 3", Q_NULLPTR));
        Inpstr1formatBox->clear();
        Inpstr1formatBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "ubx", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "nvs", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "oem3", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "nov", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "ss2", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "hemis", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "stq", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "javad", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "binex", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "rtcm2", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "rtcm3", Q_NULLPTR)
        );
        Baudrate1Box->clear();
        Baudrate1Box->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "115200", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "57600", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "38400", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "9600", Q_NULLPTR)
        );
        SerialPort1Box->clear();
        SerialPort1Box->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "ttyACM0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "AMA0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "USB0", Q_NULLPTR)
        );
        label_49->setText(QApplication::translate("EditeConfig", "Input Stream 1", Q_NULLPTR));
        label_50->setText(QApplication::translate("EditeConfig", "Serial Port", Q_NULLPTR));
        label_51->setText(QApplication::translate("EditeConfig", "Bauds", Q_NULLPTR));
        label_52->setText(QApplication::translate("EditeConfig", "Format", Q_NULLPTR));
        Inpstrtype2Box->clear();
        Inpstrtype2Box->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "Off", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Serial", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "File", Q_NULLPTR)
        );
        label_53->setText(QApplication::translate("EditeConfig", "Type", Q_NULLPTR));
        label_54->setText(QApplication::translate("EditeConfig", "Input Stream 2", Q_NULLPTR));
        label_55->setText(QApplication::translate("EditeConfig", "Bauds", Q_NULLPTR));
        Inpstr2formatBox->clear();
        Inpstr2formatBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "ubx", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "nvs", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "oem3", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "nov", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "ss2", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "hemis", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "stq", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "javad", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "binex", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "rtcm2", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "rtcm3", Q_NULLPTR)
        );
        Baudrate2Box->clear();
        Baudrate2Box->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "115200", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "57600", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "38400", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "9600", Q_NULLPTR)
        );
        label_56->setText(QApplication::translate("EditeConfig", "Format", Q_NULLPTR));
        SerialPort2Box->clear();
        SerialPort2Box->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "ttyACM0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "AMA0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "USB0", Q_NULLPTR)
        );
        label_57->setText(QApplication::translate("EditeConfig", "Serial Port", Q_NULLPTR));
        label_59->setText(QApplication::translate("EditeConfig", "File Path", Q_NULLPTR));
        Impstr2PathBox->setText(QString());
        Impstr2PathButton->setText(QApplication::translate("EditeConfig", "...", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(InputTab), QApplication::translate("EditeConfig", "Input", Q_NULLPTR));
        Outstr1typeBox->clear();
        Outstr1typeBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "Off", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Serial", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "File", Q_NULLPTR)
        );
        OutstrformatBox->clear();
        OutstrformatBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "ubx", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "nvs", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "oem3", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "nov", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "ss2", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "hemis", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "stq", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "javad", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "binex", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "rtcm2", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "rtcm3", Q_NULLPTR)
        );
        label_72->setText(QApplication::translate("EditeConfig", "Bauds", Q_NULLPTR));
        Outstr1PathBox->setText(QString());
        label_92->setText(QApplication::translate("EditeConfig", "File Path", Q_NULLPTR));
        label_93->setText(QApplication::translate("EditeConfig", "Output Stream", Q_NULLPTR));
        label_94->setText(QApplication::translate("EditeConfig", "Serial Port", Q_NULLPTR));
        label_95->setText(QApplication::translate("EditeConfig", "Format", Q_NULLPTR));
        Outstr1PathButton->setText(QApplication::translate("EditeConfig", "...", Q_NULLPTR));
        BaudrateOutBox->clear();
        BaudrateOutBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "115200", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "57600", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "38400", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "9600", Q_NULLPTR)
        );
        label_96->setText(QApplication::translate("EditeConfig", "Type", Q_NULLPTR));
        SerialPortOutBox->clear();
        SerialPortOutBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "ttyACM0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "AMA0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "USB0", Q_NULLPTR)
        );
        Logstr1typeBox->clear();
        Logstr1typeBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "Off", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "File", Q_NULLPTR)
        );
        label_97->setText(QApplication::translate("EditeConfig", "File Path", Q_NULLPTR));
        Logstr1PathBox->setText(QString());
        label_98->setText(QApplication::translate("EditeConfig", "Log Stream", Q_NULLPTR));
        Logstr1PathButton->setText(QApplication::translate("EditeConfig", "...", Q_NULLPTR));
        label_99->setText(QApplication::translate("EditeConfig", "Type", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("EditeConfig", "Output 1", Q_NULLPTR));
        label_14->setText(QApplication::translate("EditeConfig", "Solution Format", Q_NULLPTR));
        SolformatBox->clear();
        SolformatBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "Lat/Lon/Heigh", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "X/Y/Z-ECEF", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "E/N/U-Baseline", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "NMEA0183", Q_NULLPTR)
        );
        label_58->setText(QApplication::translate("EditeConfig", "Output Header", Q_NULLPTR));
        OutheadBox->clear();
        OutheadBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "OFF", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "ON", Q_NULLPTR)
        );
        label_60->setText(QApplication::translate("EditeConfig", "Time Format", Q_NULLPTR));
        label_61->setText(QApplication::translate("EditeConfig", "# of Decimals for Time", Q_NULLPTR));
        TimendecBox->clear();
        TimendecBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "1", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "2", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "3", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "4", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "5", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "6", Q_NULLPTR)
        );
        TimesysBox->clear();
        TimesysBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "ssssssss.sss GPST", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "hh:mm:ss GPST", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "hh:mm:ss UTC", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "hh:mm:ss JST", Q_NULLPTR)
        );
        label_62->setText(QApplication::translate("EditeConfig", "Lat / Lon Format", Q_NULLPTR));
        label_63->setText(QApplication::translate("EditeConfig", "Field Separator", Q_NULLPTR));
        DegformBox->clear();
        DegformBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "ddd.dddddddd", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "ddd mm ss.ss", Q_NULLPTR)
        );
        FieldsepBox->setText(QString());
        label_64->setText(QApplication::translate("EditeConfig", "Height", Q_NULLPTR));
        label_65->setText(QApplication::translate("EditeConfig", "NMEA Interval GSA/GSV (s)", Q_NULLPTR));
        label_67->setText(QApplication::translate("EditeConfig", "Output Solution Status", Q_NULLPTR));
        label_68->setText(QApplication::translate("EditeConfig", "NMEA Interval RMC/GGA (s)", Q_NULLPTR));
        label_69->setText(QApplication::translate("EditeConfig", "Geoid Model", Q_NULLPTR));
        GeoidBox->clear();
        GeoidBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "Internal", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "EGM96 - BE (15\312\272)", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "EGM2008 \342\200\220 SE (2.5\312\272)", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "EGM2008 \342\200\220 SE (1\312\272)", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "GSI2000 (1x1.5\312\272)", Q_NULLPTR)
        );
        OutstatBox->clear();
        OutstatBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "Off", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "State", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Residual", Q_NULLPTR)
        );
        HeightBox->clear();
        HeightBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "Ellipsoidal", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Geodetic", Q_NULLPTR)
        );
        Nmeaintv1Box->setText(QString());
        Nmeaintv2Box->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(OutputTab), QApplication::translate("EditeConfig", "Output 2", Q_NULLPTR));
        label_20->setText(QApplication::translate("EditeConfig", "<html><head/><body><p><span style=\" font-weight:600;\">Measurement Errors (1 sigma)</span></p></body></html>", Q_NULLPTR));
        label_28->setText(QApplication::translate("EditeConfig", "<html><head/><body><p><span style=\" font-weight:600;\">Process Noises (1 sigma / sqrt(s))</span></p></body></html>", Q_NULLPTR));
        PrnbiasBox->clear();
        PrnbiasBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0.00001", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.00005", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.0001", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.0002", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.0005", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.001", Q_NULLPTR)
        );
        label_29->setText(QApplication::translate("EditeConfig", "Receiver Acceleration Horiz (m/s\302\262)", Q_NULLPTR));
        PrnionoBox->clear();
        PrnionoBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0.0001", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.0002", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.0005", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.001", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.002", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.005", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.01", Q_NULLPTR)
        );
        PrnaccelvBox->clear();
        PrnaccelvBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "50", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "100", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "200", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "300", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "400", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "500", Q_NULLPTR)
        );
        label_31->setText(QApplication::translate("EditeConfig", "Carrier-Phase Bias (cycle)", Q_NULLPTR));
        PrnaccelhBox->clear();
        PrnaccelhBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0.1", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.2", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.5", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "1.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "5.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "10.0", Q_NULLPTR)
        );
        PrntropBox->clear();
        PrntropBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0.00001", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.00002", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.00005", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.0001", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.0002", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.0005", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.001", Q_NULLPTR)
        );
        label_30->setText(QApplication::translate("EditeConfig", "Receiver Acceleration Vert (m/s\302\262)", Q_NULLPTR));
        label_34->setText(QApplication::translate("EditeConfig", "Zenithal Tropospheric Delay (m)", Q_NULLPTR));
        label_33->setText(QApplication::translate("EditeConfig", "Vertical Ionospherical Delay (m/10km)", Q_NULLPTR));
        Eratio2Box->clear();
        Eratio2Box->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "50", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "100", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "200", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "300", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "400", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "500", Q_NULLPTR)
        );
        label_26->setText(QApplication::translate("EditeConfig", "Carrier-Phase Error : /Baseline (m/10km)", Q_NULLPTR));
        ErrdopplerBox->clear();
        ErrdopplerBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0.5", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "1.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "2.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "5.0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "10.0", Q_NULLPTR)
        );
        ErrphaseblBox->clear();
        ErrphaseblBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0.001", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.002", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.003", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.004", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.005", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.01", Q_NULLPTR)
        );
        Eratio1Box->clear();
        Eratio1Box->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "50", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "100", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "200", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "300", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "400", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "500", Q_NULLPTR)
        );
        label_24->setText(QApplication::translate("EditeConfig", "Carrier-Phase Error : a+b (m)", Q_NULLPTR));
        label_25->setText(QApplication::translate("EditeConfig", "Carrier-Phase Error : /sin(El)", Q_NULLPTR));
        label_22->setText(QApplication::translate("EditeConfig", "Code/Carrier-Phase Error Ratio : L2", Q_NULLPTR));
        label_21->setText(QApplication::translate("EditeConfig", "Code/Carrier-Phase Error Ratio : L1", Q_NULLPTR));
        ErrphaseBox->clear();
        ErrphaseBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0.001", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.002", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.003", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.004", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.005", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.01", Q_NULLPTR)
        );
        label_27->setText(QApplication::translate("EditeConfig", "Doppler Frequency (Hz)", Q_NULLPTR));
        ErrphaseelBox->clear();
        ErrphaseelBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0.001", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.002", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.003", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.004", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.005", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "0.01", Q_NULLPTR)
        );
        label_35->setText(QApplication::translate("EditeConfig", "Satellite Clock Stability (s/s)", Q_NULLPTR));
        ClckstabBox->clear();
        ClckstabBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "1e-12", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "2e-12", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "5e-12", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "1e-11", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "2e-11", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(StatsTab), QApplication::translate("EditeConfig", "Stats", Q_NULLPTR));
        label_32->setText(QApplication::translate("EditeConfig", "Satellite Antenna PCV File ANTEX", Q_NULLPTR));
        SatantfileBox->setText(QString());
        SatantfileButton->setText(QApplication::translate("EditeConfig", "...", Q_NULLPTR));
        RcvantfileBox->setText(QString());
        label_36->setText(QApplication::translate("EditeConfig", "Receiver Antenna PCV File ANTEX / NGS PCV", Q_NULLPTR));
        RcvantfileButton->setText(QApplication::translate("EditeConfig", "...", Q_NULLPTR));
        label_37->setText(QApplication::translate("EditeConfig", "Geoid Data File", Q_NULLPTR));
        GeoidfileBox->setText(QString());
        GeoidfileButton->setText(QApplication::translate("EditeConfig", "...", Q_NULLPTR));
        label_38->setText(QApplication::translate("EditeConfig", "DCB Data File", Q_NULLPTR));
        DcbfileBox->setText(QString());
        DcbfileButton->setText(QApplication::translate("EditeConfig", "...", Q_NULLPTR));
        label_39->setText(QApplication::translate("EditeConfig", "EOP Data File", Q_NULLPTR));
        EopfileBox->setText(QString());
        EopfileButton->setText(QApplication::translate("EditeConfig", "...", Q_NULLPTR));
        label_40->setText(QApplication::translate("EditeConfig", "Ocean Loading BLQ Format", Q_NULLPTR));
        BlqfileBox->setText(QString());
        BlqfileButton->setText(QApplication::translate("EditeConfig", "...", Q_NULLPTR));
        label_66->setText(QApplication::translate("EditeConfig", "FTP/HTTP Local Directory", Q_NULLPTR));
        TempdirBox->setText(QString());
        TempdirButton->setText(QApplication::translate("EditeConfig", "...", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(FilesTab), QApplication::translate("EditeConfig", "Files", Q_NULLPTR));
        label_70->setText(QApplication::translate("EditeConfig", "<html><head/><body><p><span style=\" font-weight:600;\">Rover</span></p></body></html>", Q_NULLPTR));
        label_71->setText(QApplication::translate("EditeConfig", "<html><head/><body><p><span style=\" font-weight:600;\">Base Station</span></p></body></html>", Q_NULLPTR));
        RovpostypeBox->clear();
        RovpostypeBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "Lat/Long/Heigh (deg/m)", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "X/Y/Z-ECEF (m)", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "RTCM Station Position", Q_NULLPTR)
        );
        Rovpos1Box->setText(QApplication::translate("EditeConfig", "0.0000", Q_NULLPTR));
        Rovpos2Box->setText(QApplication::translate("EditeConfig", "0.0000", Q_NULLPTR));
        Rovpos3Box->setText(QApplication::translate("EditeConfig", "0.000", Q_NULLPTR));
        label_73->setText(QApplication::translate("EditeConfig", "/", Q_NULLPTR));
        label_74->setText(QApplication::translate("EditeConfig", "/", Q_NULLPTR));
        RovantCheckBox->setText(QApplication::translate("EditeConfig", "Antenna Type (* : Auto)", Q_NULLPTR));
        RovanttypeBox->clear();
        RovanttypeBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("EditeConfig", "*", Q_NULLPTR)
        );
        label_75->setText(QApplication::translate("EditeConfig", "/", Q_NULLPTR));
        RovantdeleBox->setText(QApplication::translate("EditeConfig", "0.000", Q_NULLPTR));
        label_76->setText(QApplication::translate("EditeConfig", "/", Q_NULLPTR));
        RovantdeluBox->setText(QApplication::translate("EditeConfig", "0.000", Q_NULLPTR));
        RovantdelnBox->setText(QApplication::translate("EditeConfig", "0.000", Q_NULLPTR));
        label_77->setText(QApplication::translate("EditeConfig", "Delta E/N/U (m)", Q_NULLPTR));
        BsantdeleBox->setText(QApplication::translate("EditeConfig", "0.000", Q_NULLPTR));
        label_78->setText(QApplication::translate("EditeConfig", "Delta E/N/U (m)", Q_NULLPTR));
        BsantdeluBox->setText(QApplication::translate("EditeConfig", "0.000", Q_NULLPTR));
        label_79->setText(QApplication::translate("EditeConfig", "/", Q_NULLPTR));
        label_80->setText(QApplication::translate("EditeConfig", "/", Q_NULLPTR));
        BsantdelnBox->setText(QApplication::translate("EditeConfig", "0.000", Q_NULLPTR));
        Bspos1Box->setText(QApplication::translate("EditeConfig", "0.0000", Q_NULLPTR));
        BspostypeBox->clear();
        BspostypeBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "Lat/Long/Heigh (deg/m)", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "X/Y/Z-ECEF (m)", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "RTCM Station Position", Q_NULLPTR)
        );
        label_81->setText(QApplication::translate("EditeConfig", "/", Q_NULLPTR));
        Bspos3Box->setText(QApplication::translate("EditeConfig", "0.000", Q_NULLPTR));
        label_82->setText(QApplication::translate("EditeConfig", "/", Q_NULLPTR));
        Bspos2Box->setText(QApplication::translate("EditeConfig", "0.0000", Q_NULLPTR));
        BsanttypeBox->clear();
        BsanttypeBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("EditeConfig", "*", Q_NULLPTR)
        );
        BsantCheckBox->setText(QApplication::translate("EditeConfig", "Antenna Type (* : Auto)", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(PositionsTab), QApplication::translate("EditeConfig", "Positions", Q_NULLPTR));
        SvrcycleBox->clear();
        SvrcycleBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "5", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "10", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "20", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "50", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "100", Q_NULLPTR)
        );
        label_83->setText(QApplication::translate("EditeConfig", "Process Cycle (ms)", Q_NULLPTR));
        NmeacycleBox->clear();
        NmeacycleBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "1000", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "2000", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "5000", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "10000", Q_NULLPTR)
        );
        label_84->setText(QApplication::translate("EditeConfig", "NMEA Cycle (ms)", Q_NULLPTR));
        label_85->setText(QApplication::translate("EditeConfig", "Timeout Interval (ms)", Q_NULLPTR));
        TimeoutBox->clear();
        TimeoutBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "5000", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "10000", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "20000", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "30000", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "50000", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "100000", Q_NULLPTR)
        );
        ReconnectBox->clear();
        ReconnectBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "2000", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "5000", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "10000", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "20000", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "50000", Q_NULLPTR)
        );
        label_86->setText(QApplication::translate("EditeConfig", "Reconnect Interval (ms)", Q_NULLPTR));
        label_87->setText(QApplication::translate("EditeConfig", "Buffer Size (bytes)", Q_NULLPTR));
        BuffsizeBox->clear();
        BuffsizeBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "32768", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "65536", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "131072", Q_NULLPTR)
        );
        FswapmarginBox->clear();
        FswapmarginBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "0", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "5", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "10", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "20", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "30", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "60", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "120", Q_NULLPTR)
        );
        label_88->setText(QApplication::translate("EditeConfig", "File Swap Margin (s)", Q_NULLPTR));
        NavmsgselBox->clear();
        NavmsgselBox->insertItems(0, QStringList()
         << QApplication::translate("EditeConfig", "All", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Rover", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Base Station", Q_NULLPTR)
         << QApplication::translate("EditeConfig", "Correction", Q_NULLPTR)
        );
        label_89->setText(QApplication::translate("EditeConfig", "Navigation Message Selection", Q_NULLPTR));
        label_90->setText(QApplication::translate("EditeConfig", "HTTP/NTRIP Proxy", Q_NULLPTR));
        SbasatselBox->setText(QApplication::translate("EditeConfig", "0", Q_NULLPTR));
        label_91->setText(QApplication::translate("EditeConfig", "SBAS Satellite Selection (0 : All)", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(MiscTab), QApplication::translate("EditeConfig", "Misc", Q_NULLPTR));
        ReturnButton->setText(QApplication::translate("EditeConfig", "RETURN", Q_NULLPTR));
        SaveButton->setText(QApplication::translate("EditeConfig", "SAVE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditeConfig: public Ui_EditeConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITECONFIG_H
