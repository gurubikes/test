/********************************************************************************
** Form generated from reading UI file 'openscam.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENSCAM_H
#define UI_OPENSCAM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDockWidget>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "openscam/qt/GLView.h"

QT_BEGIN_NAMESPACE

class Ui_OpenSCAMWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionExport;
    QAction *actionSnapshot;
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *actionWireSurface;
    QAction *actionWorkpieceBounds;
    QAction *actionTool;
    QAction *actionCutSurface;
    QAction *actionAxes;
    QAction *actionToolPath;
    QAction *actionIsoView;
    QAction *actionFrontView;
    QAction *actionBackView;
    QAction *actionLeftView;
    QAction *actionRightView;
    QAction *actionTopView;
    QAction *actionBottomView;
    QAction *actionBegining;
    QAction *actionSlower;
    QAction *actionPlay;
    QAction *actionFaster;
    QAction *actionEnd;
    QAction *actionDirection;
    QAction *actionAddTool;
    QAction *actionRemoveTool;
    QAction *actionAddFile;
    QAction *actionRemoveFile;
    QAction *actionHideSurface;
    QAction *actionStop;
    QAction *actionRun;
    QAction *actionSmooth;
    QAction *actionDonate;
    QAction *actionWorkpieceSurface;
    QAction *actionDefaultLayout;
    QAction *actionExamples;
    QAction *actionMinimalLayout;
    QAction *actionFullLayout;
    QAction *actionToolbars;
    QAction *actionDocks;
    QAction *actionFullscreen;
    QAction *actionHelp;
    QAction *actionRevertFile;
    QAction *actionSaveFileAs;
    QAction *actionSaveFile;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionSelectAll;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_25;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QTabWidget *tabWidget;
    QWidget *simulationTab;
    QVBoxLayout *verticalLayout_9;
    OpenSCAM::GLView *simulationView;
    QGridLayout *gridLayout_9;
    QSlider *positionSlider;
    QLabel *label_28;
    QWidget *toolTab;
    QVBoxLayout *verticalLayout_3;
    QGraphicsView *toolView;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *errorsCheckBox;
    QCheckBox *warningsCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *clearConsolePushButton;
    QTextEdit *console;
    QHBoxLayout *horizontalLayout;
    QLabel *label_27;
    QProgressBar *progressBar;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuEdit;
    QMenu *menuView_2;
    QMenu *menuSimulate;
    QToolBar *projectToolBar;
    QToolBar *viewToolBar;
    QToolBar *simulateToolBar;
    QToolBar *perspectiveToolBar;
    QStatusBar *statusbar;
    QDockWidget *positionDockWidget;
    QWidget *dockWidgetContents_3;
    QVBoxLayout *verticalLayout_10;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_19;
    QGridLayout *gridLayout_2;
    QLabel *zLabel;
    QLabel *label_12;
    QLabel *label_10;
    QLabel *xLabel;
    QLabel *label_11;
    QLabel *yLabel;
    QDockWidget *estimatesDockWidget;
    QWidget *dockWidgetContents_4;
    QVBoxLayout *verticalLayout_11;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_20;
    QGridLayout *gridLayout_3;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_16;
    QLabel *currentTimeLabel;
    QLabel *currentDistanceLabel;
    QLabel *label_17;
    QLabel *remainingTimeLabel;
    QLabel *remainingDistanceLabel;
    QLabel *label_18;
    QLabel *totalTimeLabel;
    QLabel *totalDistanceLabel;
    QLabel *label_19;
    QLabel *percentTimeLabel;
    QLabel *percentDistanceLabel;
    QDockWidget *statusDockWidget;
    QWidget *dockWidgetContents_5;
    QVBoxLayout *verticalLayout_12;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_21;
    QGridLayout *gridLayout_4;
    QLabel *label_30;
    QLabel *toolLabel;
    QLabel *label_31;
    QLabel *feedLabel;
    QLabel *label_32;
    QLabel *speedLabel;
    QLabel *label_33;
    QLabel *directionLabel;
    QLabel *label_34;
    QLabel *programLineLabel;
    QDockWidget *projectDockWidget;
    QWidget *dockWidgetContents_6;
    QVBoxLayout *verticalLayout_8;
    QTreeView *projectTreeView;
    QDockWidget *settingsDockWidget;
    QWidget *dockWidgetContents_7;
    QVBoxLayout *verticalLayout_6;
    QStackedWidget *settingsStack;
    QWidget *simulationProperties;
    QVBoxLayout *verticalLayout_13;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_15;
    QGridLayout *gridLayout_8;
    QDoubleSpinBox *resolutionDoubleSpinBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label_25;
    QComboBox *resolutionComboBox;
    QLabel *label_26;
    QComboBox *unitsComboBox;
    QLabel *label_37;
    QPushButton *smoothPushButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_26;
    QRadioButton *automaticCuboidRadioButton;
    QFrame *automaticCuboidFrame;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_52;
    QDoubleSpinBox *marginDoubleSpinBox;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_8;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_17;
    QRadioButton *manualCuboidRadioButton;
    QFrame *manualCuboidFrame;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_5;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_54;
    QDoubleSpinBox *xDimDoubleSpinBox;
    QDoubleSpinBox *xOffsetDoubleSpinBox;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_55;
    QDoubleSpinBox *yDimDoubleSpinBox;
    QDoubleSpinBox *yOffsetDoubleSpinBox;
    QLabel *label_56;
    QDoubleSpinBox *zDimDoubleSpinBox;
    QDoubleSpinBox *zOffsetDoubleSpinBox;
    QSpacerItem *verticalSpacer;
    QWidget *toolProperties;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout;
    QLabel *label_44;
    QSpinBox *toolSpinBox;
    QLabel *label_50;
    QLineEdit *descriptionLineEdit;
    QLabel *label_45;
    QComboBox *toolUnitsComboBox;
    QLabel *label_46;
    QComboBox *shapeComboBox;
    QLabel *label_47;
    QDoubleSpinBox *lengthDoubleSpinBox;
    QLabel *label_48;
    QDoubleSpinBox *diameterDoubleSpinBox;
    QLabel *snubDiameterLabel;
    QDoubleSpinBox *snubDiameterDoubleSpinBox;
    QSpacerItem *verticalSpacer_2;
    QDockWidget *toolPathBoundsDockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_22;
    QFrame *frame;
    QVBoxLayout *verticalLayout_18;
    QGridLayout *gridLayout_6;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *toolPathBoundsXMinLabel;
    QLabel *toolPathBoundsXMaxLabel;
    QLabel *toolPathBoundsXDimLabel;
    QLabel *label_8;
    QLabel *toolPathBoundsYMinLabel;
    QLabel *toolPathBoundsYMaxLabel;
    QLabel *toolPathBoundsYDimLabel;
    QLabel *label_9;
    QLabel *toolPathBoundsZMinLabel;
    QLabel *toolPathBoundsZMaxLabel;
    QLabel *toolPathBoundsZDimLabel;
    QDockWidget *workpieceBoundsDockWidget;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout_24;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_23;
    QGridLayout *gridLayout_7;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_22;
    QLabel *workpieceBoundsXMinLabel;
    QLabel *workpieceBoundsXMaxLabel;
    QLabel *workpieceBoundsXDimLabel;
    QLabel *label_23;
    QLabel *workpieceBoundsYMinLabel;
    QLabel *workpieceBoundsYMaxLabel;
    QLabel *workpieceBoundsYDimLabel;
    QLabel *label_24;
    QLabel *workpieceBoundsZMinLabel;
    QLabel *workpieceBoundsZMaxLabel;
    QLabel *workpieceBoundsZDimLabel;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *OpenSCAMWindow)
    {
        if (OpenSCAMWindow->objectName().isEmpty())
            OpenSCAMWindow->setObjectName(QString::fromUtf8("OpenSCAMWindow"));
        OpenSCAMWindow->setWindowModality(Qt::ApplicationModal);
        OpenSCAMWindow->resize(1004, 797);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/openscam.png"), QSize(), QIcon::Normal, QIcon::Off);
        OpenSCAMWindow->setWindowIcon(icon);
        OpenSCAMWindow->setStyleSheet(QString::fromUtf8("QDockWidget  {\n"
"  font: bold 10pt \"Sans\";\n"
"}"));
        actionNew = new QAction(OpenSCAMWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionOpen = new QAction(OpenSCAMWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/open.png"), QSize(), QIcon::Normal, QIcon::On);
        actionOpen->setIcon(icon2);
        actionSave = new QAction(OpenSCAMWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon3);
        actionSaveAs = new QAction(OpenSCAMWindow);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/save_as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAs->setIcon(icon4);
        actionExport = new QAction(OpenSCAMWindow);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/export.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport->setIcon(icon5);
        actionSnapshot = new QAction(OpenSCAMWindow);
        actionSnapshot->setObjectName(QString::fromUtf8("actionSnapshot"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/snapshot.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSnapshot->setIcon(icon6);
        actionQuit = new QAction(OpenSCAMWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon7);
        actionAbout = new QAction(OpenSCAMWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon8);
        actionWireSurface = new QAction(OpenSCAMWindow);
        actionWireSurface->setObjectName(QString::fromUtf8("actionWireSurface"));
        actionWireSurface->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/wire.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWireSurface->setIcon(icon9);
        actionWorkpieceBounds = new QAction(OpenSCAMWindow);
        actionWorkpieceBounds->setObjectName(QString::fromUtf8("actionWorkpieceBounds"));
        actionWorkpieceBounds->setCheckable(true);
        actionWorkpieceBounds->setChecked(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/bbox.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWorkpieceBounds->setIcon(icon10);
        actionTool = new QAction(OpenSCAMWindow);
        actionTool->setObjectName(QString::fromUtf8("actionTool"));
        actionTool->setCheckable(true);
        actionTool->setChecked(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/tool.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTool->setIcon(icon11);
        actionCutSurface = new QAction(OpenSCAMWindow);
        actionCutSurface->setObjectName(QString::fromUtf8("actionCutSurface"));
        actionCutSurface->setCheckable(true);
        actionCutSurface->setChecked(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/cut_surface.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutSurface->setIcon(icon12);
        actionAxes = new QAction(OpenSCAMWindow);
        actionAxes->setObjectName(QString::fromUtf8("actionAxes"));
        actionAxes->setCheckable(true);
        actionAxes->setChecked(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/axes.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAxes->setIcon(icon13);
        actionToolPath = new QAction(OpenSCAMWindow);
        actionToolPath->setObjectName(QString::fromUtf8("actionToolPath"));
        actionToolPath->setCheckable(true);
        actionToolPath->setChecked(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/path.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionToolPath->setIcon(icon14);
        actionIsoView = new QAction(OpenSCAMWindow);
        actionIsoView->setObjectName(QString::fromUtf8("actionIsoView"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/isometric.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionIsoView->setIcon(icon15);
        actionFrontView = new QAction(OpenSCAMWindow);
        actionFrontView->setObjectName(QString::fromUtf8("actionFrontView"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/icons/front.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFrontView->setIcon(icon16);
        actionBackView = new QAction(OpenSCAMWindow);
        actionBackView->setObjectName(QString::fromUtf8("actionBackView"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/icons/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBackView->setIcon(icon17);
        actionLeftView = new QAction(OpenSCAMWindow);
        actionLeftView->setObjectName(QString::fromUtf8("actionLeftView"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/icons/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLeftView->setIcon(icon18);
        actionRightView = new QAction(OpenSCAMWindow);
        actionRightView->setObjectName(QString::fromUtf8("actionRightView"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/icons/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRightView->setIcon(icon19);
        actionTopView = new QAction(OpenSCAMWindow);
        actionTopView->setObjectName(QString::fromUtf8("actionTopView"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/icons/top.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTopView->setIcon(icon20);
        actionBottomView = new QAction(OpenSCAMWindow);
        actionBottomView->setObjectName(QString::fromUtf8("actionBottomView"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/icons/bottom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBottomView->setIcon(icon21);
        actionBegining = new QAction(OpenSCAMWindow);
        actionBegining->setObjectName(QString::fromUtf8("actionBegining"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/icons/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBegining->setIcon(icon22);
        actionSlower = new QAction(OpenSCAMWindow);
        actionSlower->setObjectName(QString::fromUtf8("actionSlower"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/icons/slower.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSlower->setIcon(icon23);
        actionPlay = new QAction(OpenSCAMWindow);
        actionPlay->setObjectName(QString::fromUtf8("actionPlay"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/icons/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlay->setIcon(icon24);
        actionFaster = new QAction(OpenSCAMWindow);
        actionFaster->setObjectName(QString::fromUtf8("actionFaster"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/icons/faster.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFaster->setIcon(icon25);
        actionEnd = new QAction(OpenSCAMWindow);
        actionEnd->setObjectName(QString::fromUtf8("actionEnd"));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/icons/end.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEnd->setIcon(icon26);
        actionDirection = new QAction(OpenSCAMWindow);
        actionDirection->setObjectName(QString::fromUtf8("actionDirection"));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/icons/forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDirection->setIcon(icon27);
        actionAddTool = new QAction(OpenSCAMWindow);
        actionAddTool->setObjectName(QString::fromUtf8("actionAddTool"));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddTool->setIcon(icon28);
        actionRemoveTool = new QAction(OpenSCAMWindow);
        actionRemoveTool->setObjectName(QString::fromUtf8("actionRemoveTool"));
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/icons/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemoveTool->setIcon(icon29);
        actionAddFile = new QAction(OpenSCAMWindow);
        actionAddFile->setObjectName(QString::fromUtf8("actionAddFile"));
        actionAddFile->setIcon(icon28);
        actionRemoveFile = new QAction(OpenSCAMWindow);
        actionRemoveFile->setObjectName(QString::fromUtf8("actionRemoveFile"));
        actionRemoveFile->setIcon(icon29);
        actionHideSurface = new QAction(OpenSCAMWindow);
        actionHideSurface->setObjectName(QString::fromUtf8("actionHideSurface"));
        actionHideSurface->setCheckable(true);
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/icons/no-surface.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHideSurface->setIcon(icon30);
        actionStop = new QAction(OpenSCAMWindow);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/icons/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon31);
        actionRun = new QAction(OpenSCAMWindow);
        actionRun->setObjectName(QString::fromUtf8("actionRun"));
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/icons/restart.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRun->setIcon(icon32);
        actionSmooth = new QAction(OpenSCAMWindow);
        actionSmooth->setObjectName(QString::fromUtf8("actionSmooth"));
        actionSmooth->setCheckable(true);
        actionSmooth->setChecked(true);
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/icons/smooth.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSmooth->setIcon(icon33);
        actionDonate = new QAction(OpenSCAMWindow);
        actionDonate->setObjectName(QString::fromUtf8("actionDonate"));
        QIcon icon34;
        icon34.addFile(QString::fromUtf8(":/icons/donate.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDonate->setIcon(icon34);
        actionWorkpieceSurface = new QAction(OpenSCAMWindow);
        actionWorkpieceSurface->setObjectName(QString::fromUtf8("actionWorkpieceSurface"));
        actionWorkpieceSurface->setCheckable(true);
        QIcon icon35;
        icon35.addFile(QString::fromUtf8(":/icons/surface.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWorkpieceSurface->setIcon(icon35);
        actionDefaultLayout = new QAction(OpenSCAMWindow);
        actionDefaultLayout->setObjectName(QString::fromUtf8("actionDefaultLayout"));
        actionExamples = new QAction(OpenSCAMWindow);
        actionExamples->setObjectName(QString::fromUtf8("actionExamples"));
        actionExamples->setEnabled(false);
        actionMinimalLayout = new QAction(OpenSCAMWindow);
        actionMinimalLayout->setObjectName(QString::fromUtf8("actionMinimalLayout"));
        actionFullLayout = new QAction(OpenSCAMWindow);
        actionFullLayout->setObjectName(QString::fromUtf8("actionFullLayout"));
        actionToolbars = new QAction(OpenSCAMWindow);
        actionToolbars->setObjectName(QString::fromUtf8("actionToolbars"));
        actionDocks = new QAction(OpenSCAMWindow);
        actionDocks->setObjectName(QString::fromUtf8("actionDocks"));
        actionFullscreen = new QAction(OpenSCAMWindow);
        actionFullscreen->setObjectName(QString::fromUtf8("actionFullscreen"));
        actionFullscreen->setCheckable(true);
        actionHelp = new QAction(OpenSCAMWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        QIcon icon36;
        icon36.addFile(QString::fromUtf8(":/icons/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon36);
        actionRevertFile = new QAction(OpenSCAMWindow);
        actionRevertFile->setObjectName(QString::fromUtf8("actionRevertFile"));
        actionRevertFile->setEnabled(false);
        QIcon icon37;
        icon37.addFile(QString::fromUtf8(":/icons/revert.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRevertFile->setIcon(icon37);
        actionSaveFileAs = new QAction(OpenSCAMWindow);
        actionSaveFileAs->setObjectName(QString::fromUtf8("actionSaveFileAs"));
        actionSaveFileAs->setEnabled(false);
        actionSaveFileAs->setIcon(icon4);
        actionSaveFile = new QAction(OpenSCAMWindow);
        actionSaveFile->setObjectName(QString::fromUtf8("actionSaveFile"));
        actionSaveFile->setEnabled(false);
        actionSaveFile->setIcon(icon3);
        actionUndo = new QAction(OpenSCAMWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon38;
        icon38.addFile(QString::fromUtf8(":/icons/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon38);
        actionRedo = new QAction(OpenSCAMWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon39;
        icon39.addFile(QString::fromUtf8(":/icons/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon39);
        actionCut = new QAction(OpenSCAMWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon40;
        icon40.addFile(QString::fromUtf8(":/icons/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon40);
        actionCopy = new QAction(OpenSCAMWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon41;
        icon41.addFile(QString::fromUtf8(":/icons/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon41);
        actionPaste = new QAction(OpenSCAMWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon42;
        icon42.addFile(QString::fromUtf8(":/icons/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon42);
        actionSelectAll = new QAction(OpenSCAMWindow);
        actionSelectAll->setObjectName(QString::fromUtf8("actionSelectAll"));
        QIcon icon43;
        icon43.addFile(QString::fromUtf8(":/icons/select-all.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelectAll->setIcon(icon43);
        centralwidget = new QWidget(OpenSCAMWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_25 = new QVBoxLayout(centralwidget);
        verticalLayout_25->setSpacing(0);
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(layoutWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        simulationTab = new QWidget();
        simulationTab->setObjectName(QString::fromUtf8("simulationTab"));
        simulationTab->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"  border: 1px outset #71869c;\n"
"  border-radius: 2px;\n"
"  background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #c5d3df, stop: 1 #b2c1d1);\n"
"} "));
        verticalLayout_9 = new QVBoxLayout(simulationTab);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        simulationView = new OpenSCAM::GLView(simulationTab);
        simulationView->setObjectName(QString::fromUtf8("simulationView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(simulationView->sizePolicy().hasHeightForWidth());
        simulationView->setSizePolicy(sizePolicy);
        simulationView->setMinimumSize(QSize(200, 200));
        simulationView->setContextMenuPolicy(Qt::CustomContextMenu);
        simulationView->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_9->addWidget(simulationView);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setHorizontalSpacing(6);
        positionSlider = new QSlider(simulationTab);
        positionSlider->setObjectName(QString::fromUtf8("positionSlider"));
        positionSlider->setFocusPolicy(Qt::NoFocus);
        positionSlider->setMaximum(10000);
        positionSlider->setSingleStep(10);
        positionSlider->setPageStep(100);
        positionSlider->setOrientation(Qt::Horizontal);

        gridLayout_9->addWidget(positionSlider, 0, 1, 1, 1);

        label_28 = new QLabel(simulationTab);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setMinimumSize(QSize(70, 0));
        label_28->setMaximumSize(QSize(70, 16777215));
        QFont font;
        font.setUnderline(true);
        label_28->setFont(font);
        label_28->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_9->addWidget(label_28, 0, 0, 1, 1);


        verticalLayout_9->addLayout(gridLayout_9);

        tabWidget->addTab(simulationTab, QString());
        toolTab = new QWidget();
        toolTab->setObjectName(QString::fromUtf8("toolTab"));
        verticalLayout_3 = new QVBoxLayout(toolTab);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        toolView = new QGraphicsView(toolTab);
        toolView->setObjectName(QString::fromUtf8("toolView"));
        toolView->setFrameShape(QFrame::NoFrame);
        toolView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        toolView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_3->addWidget(toolView);

        tabWidget->addTab(toolTab, QString());

        verticalLayout_7->addWidget(tabWidget);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout_16 = new QVBoxLayout(layoutWidget1);
        verticalLayout_16->setSpacing(0);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        errorsCheckBox = new QCheckBox(layoutWidget1);
        errorsCheckBox->setObjectName(QString::fromUtf8("errorsCheckBox"));

        horizontalLayout_2->addWidget(errorsCheckBox);

        warningsCheckBox = new QCheckBox(layoutWidget1);
        warningsCheckBox->setObjectName(QString::fromUtf8("warningsCheckBox"));

        horizontalLayout_2->addWidget(warningsCheckBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        clearConsolePushButton = new QPushButton(layoutWidget1);
        clearConsolePushButton->setObjectName(QString::fromUtf8("clearConsolePushButton"));
        QIcon icon44;
        icon44.addFile(QString::fromUtf8(":/icons/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearConsolePushButton->setIcon(icon44);

        horizontalLayout_2->addWidget(clearConsolePushButton);


        verticalLayout_16->addLayout(horizontalLayout_2);

        console = new QTextEdit(layoutWidget1);
        console->setObjectName(QString::fromUtf8("console"));
        console->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"  background-color: #343434;\n"
"}"));
        console->setLineWrapMode(QTextEdit::NoWrap);
        console->setReadOnly(true);

        verticalLayout_16->addWidget(console);

        splitter->addWidget(layoutWidget1);

        verticalLayout_25->addWidget(splitter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_27 = new QLabel(centralwidget);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setMinimumSize(QSize(70, 0));
        label_27->setMaximumSize(QSize(70, 16777215));
        label_27->setFont(font);
        label_27->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_27);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(10);
        progressBar->setFont(font1);
        progressBar->setMaximum(10000);
        progressBar->setValue(0);

        horizontalLayout->addWidget(progressBar);


        verticalLayout_25->addLayout(horizontalLayout);

        OpenSCAMWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(OpenSCAMWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1004, 29));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView_2 = new QMenu(menubar);
        menuView_2->setObjectName(QString::fromUtf8("menuView_2"));
        menuSimulate = new QMenu(menubar);
        menuSimulate->setObjectName(QString::fromUtf8("menuSimulate"));
        OpenSCAMWindow->setMenuBar(menubar);
        projectToolBar = new QToolBar(OpenSCAMWindow);
        projectToolBar->setObjectName(QString::fromUtf8("projectToolBar"));
        OpenSCAMWindow->addToolBar(Qt::TopToolBarArea, projectToolBar);
        viewToolBar = new QToolBar(OpenSCAMWindow);
        viewToolBar->setObjectName(QString::fromUtf8("viewToolBar"));
        OpenSCAMWindow->addToolBar(Qt::TopToolBarArea, viewToolBar);
        simulateToolBar = new QToolBar(OpenSCAMWindow);
        simulateToolBar->setObjectName(QString::fromUtf8("simulateToolBar"));
        OpenSCAMWindow->addToolBar(Qt::TopToolBarArea, simulateToolBar);
        perspectiveToolBar = new QToolBar(OpenSCAMWindow);
        perspectiveToolBar->setObjectName(QString::fromUtf8("perspectiveToolBar"));
        OpenSCAMWindow->addToolBar(Qt::TopToolBarArea, perspectiveToolBar);
        statusbar = new QStatusBar(OpenSCAMWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        OpenSCAMWindow->setStatusBar(statusbar);
        positionDockWidget = new QDockWidget(OpenSCAMWindow);
        positionDockWidget->setObjectName(QString::fromUtf8("positionDockWidget"));
        positionDockWidget->setEnabled(true);
        positionDockWidget->setMinimumSize(QSize(117, 150));
        positionDockWidget->setMaximumSize(QSize(300, 150));
        positionDockWidget->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        verticalLayout_10 = new QVBoxLayout(dockWidgetContents_3);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 2, 0);
        frame_6 = new QFrame(dockWidgetContents_3);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_19 = new QVBoxLayout(frame_6);
        verticalLayout_19->setSpacing(0);
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        zLabel = new QLabel(frame_6);
        zLabel->setObjectName(QString::fromUtf8("zLabel"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Courier 10 Pitch"));
        font2.setPointSize(20);
        zLabel->setFont(font2);
        zLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(zLabel, 2, 1, 1, 1);

        label_12 = new QLabel(frame_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy2);
        QFont font3;
        font3.setPointSize(20);
        font3.setUnderline(true);
        label_12->setFont(font3);
        label_12->setStyleSheet(QString::fromUtf8("color:blue"));

        gridLayout_2->addWidget(label_12, 2, 0, 1, 1);

        label_10 = new QLabel(frame_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);
        label_10->setFont(font3);
        label_10->setStyleSheet(QString::fromUtf8("color:red"));

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        xLabel = new QLabel(frame_6);
        xLabel->setObjectName(QString::fromUtf8("xLabel"));
        xLabel->setFont(font2);
        xLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(xLabel, 0, 1, 1, 1);

        label_11 = new QLabel(frame_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);
        label_11->setFont(font3);
        label_11->setStyleSheet(QString::fromUtf8("color:green"));

        gridLayout_2->addWidget(label_11, 1, 0, 1, 1);

        yLabel = new QLabel(frame_6);
        yLabel->setObjectName(QString::fromUtf8("yLabel"));
        yLabel->setFont(font2);
        yLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(yLabel, 1, 1, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);

        verticalLayout_19->addLayout(gridLayout_2);


        verticalLayout_10->addWidget(frame_6);

        positionDockWidget->setWidget(dockWidgetContents_3);
        OpenSCAMWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), positionDockWidget);
        estimatesDockWidget = new QDockWidget(OpenSCAMWindow);
        estimatesDockWidget->setObjectName(QString::fromUtf8("estimatesDockWidget"));
        estimatesDockWidget->setMaximumSize(QSize(400, 170));
        estimatesDockWidget->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        verticalLayout_11 = new QVBoxLayout(dockWidgetContents_4);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 2, 0);
        frame_7 = new QFrame(dockWidgetContents_4);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_20 = new QVBoxLayout(frame_7);
        verticalLayout_20->setSpacing(0);
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, -1, 0, -1);
        label_20 = new QLabel(frame_7);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(false);
        font4.setUnderline(true);
        font4.setWeight(50);
        label_20->setFont(font4);
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_20, 0, 1, 1, 1);

        label_21 = new QLabel(frame_7);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font4);
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_21, 0, 2, 1, 1);

        label_16 = new QLabel(frame_7);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy2.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy2);
        label_16->setFont(font4);

        gridLayout_3->addWidget(label_16, 1, 0, 1, 1);

        currentTimeLabel = new QLabel(frame_7);
        currentTimeLabel->setObjectName(QString::fromUtf8("currentTimeLabel"));
        currentTimeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(currentTimeLabel, 1, 1, 1, 1);

        currentDistanceLabel = new QLabel(frame_7);
        currentDistanceLabel->setObjectName(QString::fromUtf8("currentDistanceLabel"));
        currentDistanceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(currentDistanceLabel, 1, 2, 1, 1);

        label_17 = new QLabel(frame_7);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        sizePolicy2.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy2);
        label_17->setFont(font4);

        gridLayout_3->addWidget(label_17, 2, 0, 1, 1);

        remainingTimeLabel = new QLabel(frame_7);
        remainingTimeLabel->setObjectName(QString::fromUtf8("remainingTimeLabel"));
        remainingTimeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(remainingTimeLabel, 2, 1, 1, 1);

        remainingDistanceLabel = new QLabel(frame_7);
        remainingDistanceLabel->setObjectName(QString::fromUtf8("remainingDistanceLabel"));
        remainingDistanceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(remainingDistanceLabel, 2, 2, 1, 1);

        label_18 = new QLabel(frame_7);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        sizePolicy2.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy2);
        label_18->setFont(font4);

        gridLayout_3->addWidget(label_18, 3, 0, 1, 1);

        totalTimeLabel = new QLabel(frame_7);
        totalTimeLabel->setObjectName(QString::fromUtf8("totalTimeLabel"));
        totalTimeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(totalTimeLabel, 3, 1, 1, 1);

        totalDistanceLabel = new QLabel(frame_7);
        totalDistanceLabel->setObjectName(QString::fromUtf8("totalDistanceLabel"));
        totalDistanceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(totalDistanceLabel, 3, 2, 1, 1);

        label_19 = new QLabel(frame_7);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        sizePolicy2.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy2);
        label_19->setFont(font4);

        gridLayout_3->addWidget(label_19, 4, 0, 1, 1);

        percentTimeLabel = new QLabel(frame_7);
        percentTimeLabel->setObjectName(QString::fromUtf8("percentTimeLabel"));
        percentTimeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(percentTimeLabel, 4, 1, 1, 1);

        percentDistanceLabel = new QLabel(frame_7);
        percentDistanceLabel->setObjectName(QString::fromUtf8("percentDistanceLabel"));
        percentDistanceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(percentDistanceLabel, 4, 2, 1, 1);

        gridLayout_3->setColumnStretch(1, 1);
        gridLayout_3->setColumnStretch(2, 2);

        verticalLayout_20->addLayout(gridLayout_3);


        verticalLayout_11->addWidget(frame_7);

        estimatesDockWidget->setWidget(dockWidgetContents_4);
        OpenSCAMWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), estimatesDockWidget);
        statusDockWidget = new QDockWidget(OpenSCAMWindow);
        statusDockWidget->setObjectName(QString::fromUtf8("statusDockWidget"));
        statusDockWidget->setMaximumSize(QSize(300, 170));
        statusDockWidget->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QString::fromUtf8("dockWidgetContents_5"));
        verticalLayout_12 = new QVBoxLayout(dockWidgetContents_5);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 2, 0);
        frame_8 = new QFrame(dockWidgetContents_5);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        verticalLayout_21 = new QVBoxLayout(frame_8);
        verticalLayout_21->setSpacing(0);
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(-1, -1, 0, -1);
        label_30 = new QLabel(frame_8);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        sizePolicy2.setHeightForWidth(label_30->sizePolicy().hasHeightForWidth());
        label_30->setSizePolicy(sizePolicy2);
        label_30->setFont(font4);

        gridLayout_4->addWidget(label_30, 0, 0, 1, 1);

        toolLabel = new QLabel(frame_8);
        toolLabel->setObjectName(QString::fromUtf8("toolLabel"));
        toolLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(toolLabel, 0, 1, 1, 1);

        label_31 = new QLabel(frame_8);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        sizePolicy2.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
        label_31->setSizePolicy(sizePolicy2);
        label_31->setFont(font4);

        gridLayout_4->addWidget(label_31, 1, 0, 1, 1);

        feedLabel = new QLabel(frame_8);
        feedLabel->setObjectName(QString::fromUtf8("feedLabel"));
        feedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(feedLabel, 1, 1, 1, 1);

        label_32 = new QLabel(frame_8);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        sizePolicy2.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy2);
        label_32->setFont(font4);

        gridLayout_4->addWidget(label_32, 2, 0, 1, 1);

        speedLabel = new QLabel(frame_8);
        speedLabel->setObjectName(QString::fromUtf8("speedLabel"));
        speedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(speedLabel, 2, 1, 1, 1);

        label_33 = new QLabel(frame_8);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        sizePolicy2.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy2);
        label_33->setFont(font4);

        gridLayout_4->addWidget(label_33, 3, 0, 1, 1);

        directionLabel = new QLabel(frame_8);
        directionLabel->setObjectName(QString::fromUtf8("directionLabel"));
        directionLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(directionLabel, 3, 1, 1, 1);

        label_34 = new QLabel(frame_8);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        sizePolicy2.setHeightForWidth(label_34->sizePolicy().hasHeightForWidth());
        label_34->setSizePolicy(sizePolicy2);
        label_34->setFont(font4);

        gridLayout_4->addWidget(label_34, 4, 0, 1, 1);

        programLineLabel = new QLabel(frame_8);
        programLineLabel->setObjectName(QString::fromUtf8("programLineLabel"));
        programLineLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(programLineLabel, 4, 1, 1, 1);

        gridLayout_4->setColumnStretch(1, 1);

        verticalLayout_21->addLayout(gridLayout_4);


        verticalLayout_12->addWidget(frame_8);

        statusDockWidget->setWidget(dockWidgetContents_5);
        OpenSCAMWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), statusDockWidget);
        projectDockWidget = new QDockWidget(OpenSCAMWindow);
        projectDockWidget->setObjectName(QString::fromUtf8("projectDockWidget"));
        projectDockWidget->setFeatures(QDockWidget::DockWidgetMovable);
        projectDockWidget->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents_6 = new QWidget();
        dockWidgetContents_6->setObjectName(QString::fromUtf8("dockWidgetContents_6"));
        verticalLayout_8 = new QVBoxLayout(dockWidgetContents_6);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(2, 0, 2, 0);
        projectTreeView = new QTreeView(dockWidgetContents_6);
        projectTreeView->setObjectName(QString::fromUtf8("projectTreeView"));
        projectTreeView->setContextMenuPolicy(Qt::CustomContextMenu);
        projectTreeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        projectTreeView->setIndentation(12);
        projectTreeView->setExpandsOnDoubleClick(false);
        projectTreeView->header()->setVisible(false);

        verticalLayout_8->addWidget(projectTreeView);

        projectDockWidget->setWidget(dockWidgetContents_6);
        OpenSCAMWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), projectDockWidget);
        settingsDockWidget = new QDockWidget(OpenSCAMWindow);
        settingsDockWidget->setObjectName(QString::fromUtf8("settingsDockWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(settingsDockWidget->sizePolicy().hasHeightForWidth());
        settingsDockWidget->setSizePolicy(sizePolicy3);
        settingsDockWidget->setFeatures(QDockWidget::DockWidgetMovable);
        dockWidgetContents_7 = new QWidget();
        dockWidgetContents_7->setObjectName(QString::fromUtf8("dockWidgetContents_7"));
        verticalLayout_6 = new QVBoxLayout(dockWidgetContents_7);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(2, 0, 2, 0);
        settingsStack = new QStackedWidget(dockWidgetContents_7);
        settingsStack->setObjectName(QString::fromUtf8("settingsStack"));
        simulationProperties = new QWidget();
        simulationProperties->setObjectName(QString::fromUtf8("simulationProperties"));
        verticalLayout_13 = new QVBoxLayout(simulationProperties);
        verticalLayout_13->setSpacing(4);
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        groupBox_2 = new QGroupBox(simulationProperties);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font1);
        verticalLayout_15 = new QVBoxLayout(groupBox_2);
        verticalLayout_15->setSpacing(4);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 2, 0, 2);
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        resolutionDoubleSpinBox = new QDoubleSpinBox(groupBox_2);
        resolutionDoubleSpinBox->setObjectName(QString::fromUtf8("resolutionDoubleSpinBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(resolutionDoubleSpinBox->sizePolicy().hasHeightForWidth());
        resolutionDoubleSpinBox->setSizePolicy(sizePolicy4);
        resolutionDoubleSpinBox->setMaximumSize(QSize(100, 16777215));
        resolutionDoubleSpinBox->setDecimals(6);

        gridLayout_8->addWidget(resolutionDoubleSpinBox, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer, 0, 3, 1, 1);

        label_25 = new QLabel(groupBox_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setFont(font);

        gridLayout_8->addWidget(label_25, 0, 0, 1, 1);

        resolutionComboBox = new QComboBox(groupBox_2);
        resolutionComboBox->setObjectName(QString::fromUtf8("resolutionComboBox"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(resolutionComboBox->sizePolicy().hasHeightForWidth());
        resolutionComboBox->setSizePolicy(sizePolicy5);

        gridLayout_8->addWidget(resolutionComboBox, 0, 1, 1, 1);

        label_26 = new QLabel(groupBox_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setFont(font);

        gridLayout_8->addWidget(label_26, 1, 0, 1, 1);

        unitsComboBox = new QComboBox(groupBox_2);
        unitsComboBox->setObjectName(QString::fromUtf8("unitsComboBox"));

        gridLayout_8->addWidget(unitsComboBox, 1, 1, 1, 1);

        label_37 = new QLabel(groupBox_2);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setFont(font);

        gridLayout_8->addWidget(label_37, 2, 0, 1, 1);

        smoothPushButton = new QPushButton(groupBox_2);
        smoothPushButton->setObjectName(QString::fromUtf8("smoothPushButton"));
        smoothPushButton->setMinimumSize(QSize(32, 32));
        smoothPushButton->setMaximumSize(QSize(32, 32));
        smoothPushButton->setFocusPolicy(Qt::NoFocus);
        smoothPushButton->setIcon(icon33);
        smoothPushButton->setCheckable(true);
        smoothPushButton->setChecked(true);
        smoothPushButton->setFlat(true);

        gridLayout_8->addWidget(smoothPushButton, 2, 1, 1, 1);


        verticalLayout_15->addLayout(gridLayout_8);


        verticalLayout_13->addWidget(groupBox_2);

        groupBox = new QGroupBox(simulationProperties);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font1);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 2, 0, 2);
        frame_3 = new QFrame(groupBox);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Sunken);
        verticalLayout_26 = new QVBoxLayout(frame_3);
        verticalLayout_26->setSpacing(4);
        verticalLayout_26->setContentsMargins(2, 2, 2, 2);
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        automaticCuboidRadioButton = new QRadioButton(frame_3);
        buttonGroup = new QButtonGroup(OpenSCAMWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(automaticCuboidRadioButton);
        automaticCuboidRadioButton->setObjectName(QString::fromUtf8("automaticCuboidRadioButton"));

        verticalLayout_26->addWidget(automaticCuboidRadioButton);

        automaticCuboidFrame = new QFrame(frame_3);
        automaticCuboidFrame->setObjectName(QString::fromUtf8("automaticCuboidFrame"));
        automaticCuboidFrame->setFrameShape(QFrame::NoFrame);
        automaticCuboidFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_14 = new QVBoxLayout(automaticCuboidFrame);
        verticalLayout_14->setSpacing(0);
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_52 = new QLabel(automaticCuboidFrame);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        sizePolicy2.setHeightForWidth(label_52->sizePolicy().hasHeightForWidth());
        label_52->setSizePolicy(sizePolicy2);
        label_52->setFont(font);

        horizontalLayout_3->addWidget(label_52);

        marginDoubleSpinBox = new QDoubleSpinBox(automaticCuboidFrame);
        marginDoubleSpinBox->setObjectName(QString::fromUtf8("marginDoubleSpinBox"));
        marginDoubleSpinBox->setValue(5);

        horizontalLayout_3->addWidget(marginDoubleSpinBox);

        label_3 = new QLabel(automaticCuboidFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_8 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        verticalLayout_14->addLayout(horizontalLayout_3);


        verticalLayout_26->addWidget(automaticCuboidFrame);


        verticalLayout_2->addWidget(frame_3);

        frame_9 = new QFrame(groupBox);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setFrameShape(QFrame::Box);
        frame_9->setFrameShadow(QFrame::Sunken);
        verticalLayout_17 = new QVBoxLayout(frame_9);
        verticalLayout_17->setSpacing(4);
        verticalLayout_17->setContentsMargins(2, 2, 2, 2);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        manualCuboidRadioButton = new QRadioButton(frame_9);
        buttonGroup->addButton(manualCuboidRadioButton);
        manualCuboidRadioButton->setObjectName(QString::fromUtf8("manualCuboidRadioButton"));

        verticalLayout_17->addWidget(manualCuboidRadioButton);

        manualCuboidFrame = new QFrame(frame_9);
        manualCuboidFrame->setObjectName(QString::fromUtf8("manualCuboidFrame"));
        manualCuboidFrame->setEnabled(true);
        manualCuboidFrame->setFrameShape(QFrame::NoFrame);
        manualCuboidFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(manualCuboidFrame);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_5 = new QLabel(manualCuboidFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_5, 0, 1, 1, 1);

        label_2 = new QLabel(manualCuboidFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_2, 0, 2, 1, 1);

        label_54 = new QLabel(manualCuboidFrame);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        sizePolicy2.setHeightForWidth(label_54->sizePolicy().hasHeightForWidth());
        label_54->setSizePolicy(sizePolicy2);
        label_54->setFont(font);
        label_54->setStyleSheet(QString::fromUtf8("color:red"));

        gridLayout_5->addWidget(label_54, 1, 0, 1, 1);

        xDimDoubleSpinBox = new QDoubleSpinBox(manualCuboidFrame);
        xDimDoubleSpinBox->setObjectName(QString::fromUtf8("xDimDoubleSpinBox"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(xDimDoubleSpinBox->sizePolicy().hasHeightForWidth());
        xDimDoubleSpinBox->setSizePolicy(sizePolicy6);
        xDimDoubleSpinBox->setDecimals(4);
        xDimDoubleSpinBox->setMinimum(0.0001);
        xDimDoubleSpinBox->setMaximum(1e+06);

        gridLayout_5->addWidget(xDimDoubleSpinBox, 1, 1, 1, 1);

        xOffsetDoubleSpinBox = new QDoubleSpinBox(manualCuboidFrame);
        xOffsetDoubleSpinBox->setObjectName(QString::fromUtf8("xOffsetDoubleSpinBox"));
        sizePolicy6.setHeightForWidth(xOffsetDoubleSpinBox->sizePolicy().hasHeightForWidth());
        xOffsetDoubleSpinBox->setSizePolicy(sizePolicy6);
        xOffsetDoubleSpinBox->setMinimum(-1e+06);
        xOffsetDoubleSpinBox->setMaximum(1e+06);

        gridLayout_5->addWidget(xOffsetDoubleSpinBox, 1, 2, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_9, 1, 3, 2, 1);

        label_55 = new QLabel(manualCuboidFrame);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        sizePolicy2.setHeightForWidth(label_55->sizePolicy().hasHeightForWidth());
        label_55->setSizePolicy(sizePolicy2);
        label_55->setFont(font);
        label_55->setStyleSheet(QString::fromUtf8("color:green"));

        gridLayout_5->addWidget(label_55, 2, 0, 1, 1);

        yDimDoubleSpinBox = new QDoubleSpinBox(manualCuboidFrame);
        yDimDoubleSpinBox->setObjectName(QString::fromUtf8("yDimDoubleSpinBox"));
        sizePolicy6.setHeightForWidth(yDimDoubleSpinBox->sizePolicy().hasHeightForWidth());
        yDimDoubleSpinBox->setSizePolicy(sizePolicy6);
        yDimDoubleSpinBox->setDecimals(4);
        yDimDoubleSpinBox->setMinimum(0.0001);
        yDimDoubleSpinBox->setMaximum(1e+06);

        gridLayout_5->addWidget(yDimDoubleSpinBox, 2, 1, 1, 1);

        yOffsetDoubleSpinBox = new QDoubleSpinBox(manualCuboidFrame);
        yOffsetDoubleSpinBox->setObjectName(QString::fromUtf8("yOffsetDoubleSpinBox"));
        sizePolicy6.setHeightForWidth(yOffsetDoubleSpinBox->sizePolicy().hasHeightForWidth());
        yOffsetDoubleSpinBox->setSizePolicy(sizePolicy6);
        yOffsetDoubleSpinBox->setMinimum(-1e+06);
        yOffsetDoubleSpinBox->setMaximum(1e+06);

        gridLayout_5->addWidget(yOffsetDoubleSpinBox, 2, 2, 1, 1);

        label_56 = new QLabel(manualCuboidFrame);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        sizePolicy2.setHeightForWidth(label_56->sizePolicy().hasHeightForWidth());
        label_56->setSizePolicy(sizePolicy2);
        label_56->setFont(font);
        label_56->setStyleSheet(QString::fromUtf8("color:blue"));

        gridLayout_5->addWidget(label_56, 3, 0, 1, 1);

        zDimDoubleSpinBox = new QDoubleSpinBox(manualCuboidFrame);
        zDimDoubleSpinBox->setObjectName(QString::fromUtf8("zDimDoubleSpinBox"));
        sizePolicy6.setHeightForWidth(zDimDoubleSpinBox->sizePolicy().hasHeightForWidth());
        zDimDoubleSpinBox->setSizePolicy(sizePolicy6);
        zDimDoubleSpinBox->setDecimals(4);
        zDimDoubleSpinBox->setMinimum(0.0001);
        zDimDoubleSpinBox->setMaximum(1e+06);

        gridLayout_5->addWidget(zDimDoubleSpinBox, 3, 1, 1, 1);

        zOffsetDoubleSpinBox = new QDoubleSpinBox(manualCuboidFrame);
        zOffsetDoubleSpinBox->setObjectName(QString::fromUtf8("zOffsetDoubleSpinBox"));
        sizePolicy6.setHeightForWidth(zOffsetDoubleSpinBox->sizePolicy().hasHeightForWidth());
        zOffsetDoubleSpinBox->setSizePolicy(sizePolicy6);
        zOffsetDoubleSpinBox->setMinimum(-1e+06);
        zOffsetDoubleSpinBox->setMaximum(1e+06);

        gridLayout_5->addWidget(zOffsetDoubleSpinBox, 3, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_5);


        verticalLayout_17->addWidget(manualCuboidFrame);


        verticalLayout_2->addWidget(frame_9);


        verticalLayout_13->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 156, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer);

        settingsStack->addWidget(simulationProperties);
        toolProperties = new QWidget();
        toolProperties->setObjectName(QString::fromUtf8("toolProperties"));
        verticalLayout_5 = new QVBoxLayout(toolProperties);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox_3 = new QGroupBox(toolProperties);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font1);
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_44 = new QLabel(groupBox_3);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setFont(font);

        gridLayout->addWidget(label_44, 0, 0, 1, 1);

        toolSpinBox = new QSpinBox(groupBox_3);
        toolSpinBox->setObjectName(QString::fromUtf8("toolSpinBox"));
        toolSpinBox->setMinimum(1);
        toolSpinBox->setMaximum(1000);

        gridLayout->addWidget(toolSpinBox, 0, 1, 1, 1);

        label_50 = new QLabel(groupBox_3);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setFont(font);

        gridLayout->addWidget(label_50, 1, 0, 1, 1);

        descriptionLineEdit = new QLineEdit(groupBox_3);
        descriptionLineEdit->setObjectName(QString::fromUtf8("descriptionLineEdit"));

        gridLayout->addWidget(descriptionLineEdit, 1, 1, 1, 1);

        label_45 = new QLabel(groupBox_3);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setFont(font);

        gridLayout->addWidget(label_45, 2, 0, 1, 1);

        toolUnitsComboBox = new QComboBox(groupBox_3);
        toolUnitsComboBox->setObjectName(QString::fromUtf8("toolUnitsComboBox"));

        gridLayout->addWidget(toolUnitsComboBox, 2, 1, 1, 1);

        label_46 = new QLabel(groupBox_3);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setFont(font);

        gridLayout->addWidget(label_46, 3, 0, 1, 1);

        shapeComboBox = new QComboBox(groupBox_3);
        shapeComboBox->setObjectName(QString::fromUtf8("shapeComboBox"));

        gridLayout->addWidget(shapeComboBox, 3, 1, 1, 1);

        label_47 = new QLabel(groupBox_3);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setFont(font);

        gridLayout->addWidget(label_47, 4, 0, 1, 1);

        lengthDoubleSpinBox = new QDoubleSpinBox(groupBox_3);
        lengthDoubleSpinBox->setObjectName(QString::fromUtf8("lengthDoubleSpinBox"));
        lengthDoubleSpinBox->setDecimals(4);
        lengthDoubleSpinBox->setMinimum(0.0001);
        lengthDoubleSpinBox->setMaximum(1e+06);

        gridLayout->addWidget(lengthDoubleSpinBox, 4, 1, 1, 1);

        label_48 = new QLabel(groupBox_3);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setFont(font);

        gridLayout->addWidget(label_48, 5, 0, 1, 1);

        diameterDoubleSpinBox = new QDoubleSpinBox(groupBox_3);
        diameterDoubleSpinBox->setObjectName(QString::fromUtf8("diameterDoubleSpinBox"));
        diameterDoubleSpinBox->setDecimals(4);
        diameterDoubleSpinBox->setMinimum(0.0001);
        diameterDoubleSpinBox->setMaximum(1e+06);

        gridLayout->addWidget(diameterDoubleSpinBox, 5, 1, 1, 1);

        snubDiameterLabel = new QLabel(groupBox_3);
        snubDiameterLabel->setObjectName(QString::fromUtf8("snubDiameterLabel"));
        snubDiameterLabel->setFont(font);

        gridLayout->addWidget(snubDiameterLabel, 6, 0, 1, 1);

        snubDiameterDoubleSpinBox = new QDoubleSpinBox(groupBox_3);
        snubDiameterDoubleSpinBox->setObjectName(QString::fromUtf8("snubDiameterDoubleSpinBox"));
        snubDiameterDoubleSpinBox->setDecimals(4);
        snubDiameterDoubleSpinBox->setMinimum(0);
        snubDiameterDoubleSpinBox->setMaximum(1e+06);

        gridLayout->addWidget(snubDiameterDoubleSpinBox, 6, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 22, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        verticalLayout_5->addWidget(groupBox_3);

        settingsStack->addWidget(toolProperties);

        verticalLayout_6->addWidget(settingsStack);

        settingsDockWidget->setWidget(dockWidgetContents_7);
        OpenSCAMWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), settingsDockWidget);
        toolPathBoundsDockWidget = new QDockWidget(OpenSCAMWindow);
        toolPathBoundsDockWidget->setObjectName(QString::fromUtf8("toolPathBoundsDockWidget"));
        toolPathBoundsDockWidget->setMaximumSize(QSize(300, 125));
        toolPathBoundsDockWidget->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout_22 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_22->setSpacing(0);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        verticalLayout_22->setContentsMargins(0, 0, 2, 0);
        frame = new QFrame(dockWidgetContents);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_18 = new QVBoxLayout(frame);
        verticalLayout_18->setSpacing(0);
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label, 0, 1, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_4, 0, 2, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_6, 0, 3, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout_6->addWidget(label_7, 1, 0, 1, 1);

        toolPathBoundsXMinLabel = new QLabel(frame);
        toolPathBoundsXMinLabel->setObjectName(QString::fromUtf8("toolPathBoundsXMinLabel"));
        toolPathBoundsXMinLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(toolPathBoundsXMinLabel, 1, 1, 1, 1);

        toolPathBoundsXMaxLabel = new QLabel(frame);
        toolPathBoundsXMaxLabel->setObjectName(QString::fromUtf8("toolPathBoundsXMaxLabel"));
        toolPathBoundsXMaxLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(toolPathBoundsXMaxLabel, 1, 2, 1, 1);

        toolPathBoundsXDimLabel = new QLabel(frame);
        toolPathBoundsXDimLabel->setObjectName(QString::fromUtf8("toolPathBoundsXDimLabel"));
        toolPathBoundsXDimLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(toolPathBoundsXDimLabel, 1, 3, 1, 1);

        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        gridLayout_6->addWidget(label_8, 2, 0, 1, 1);

        toolPathBoundsYMinLabel = new QLabel(frame);
        toolPathBoundsYMinLabel->setObjectName(QString::fromUtf8("toolPathBoundsYMinLabel"));
        toolPathBoundsYMinLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(toolPathBoundsYMinLabel, 2, 1, 1, 1);

        toolPathBoundsYMaxLabel = new QLabel(frame);
        toolPathBoundsYMaxLabel->setObjectName(QString::fromUtf8("toolPathBoundsYMaxLabel"));
        toolPathBoundsYMaxLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(toolPathBoundsYMaxLabel, 2, 2, 1, 1);

        toolPathBoundsYDimLabel = new QLabel(frame);
        toolPathBoundsYDimLabel->setObjectName(QString::fromUtf8("toolPathBoundsYDimLabel"));
        toolPathBoundsYDimLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(toolPathBoundsYDimLabel, 2, 3, 1, 1);

        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        gridLayout_6->addWidget(label_9, 3, 0, 1, 1);

        toolPathBoundsZMinLabel = new QLabel(frame);
        toolPathBoundsZMinLabel->setObjectName(QString::fromUtf8("toolPathBoundsZMinLabel"));
        toolPathBoundsZMinLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(toolPathBoundsZMinLabel, 3, 1, 1, 1);

        toolPathBoundsZMaxLabel = new QLabel(frame);
        toolPathBoundsZMaxLabel->setObjectName(QString::fromUtf8("toolPathBoundsZMaxLabel"));
        toolPathBoundsZMaxLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(toolPathBoundsZMaxLabel, 3, 2, 1, 1);

        toolPathBoundsZDimLabel = new QLabel(frame);
        toolPathBoundsZDimLabel->setObjectName(QString::fromUtf8("toolPathBoundsZDimLabel"));
        toolPathBoundsZDimLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(toolPathBoundsZDimLabel, 3, 3, 1, 1);

        gridLayout_6->setColumnStretch(1, 1);
        gridLayout_6->setColumnStretch(2, 1);
        gridLayout_6->setColumnStretch(3, 1);

        verticalLayout_18->addLayout(gridLayout_6);


        verticalLayout_22->addWidget(frame);

        toolPathBoundsDockWidget->setWidget(dockWidgetContents);
        OpenSCAMWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), toolPathBoundsDockWidget);
        workpieceBoundsDockWidget = new QDockWidget(OpenSCAMWindow);
        workpieceBoundsDockWidget->setObjectName(QString::fromUtf8("workpieceBoundsDockWidget"));
        workpieceBoundsDockWidget->setMaximumSize(QSize(300, 125));
        workpieceBoundsDockWidget->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        verticalLayout_24 = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout_24->setSpacing(0);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        verticalLayout_24->setContentsMargins(0, 0, 2, 0);
        frame_2 = new QFrame(dockWidgetContents_2);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_23 = new QVBoxLayout(frame_2);
        verticalLayout_23->setSpacing(0);
        verticalLayout_23->setContentsMargins(0, 0, 0, 0);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(-1, -1, 0, -1);
        label_13 = new QLabel(frame_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_13, 0, 1, 1, 1);

        label_14 = new QLabel(frame_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_14, 0, 2, 1, 1);

        label_15 = new QLabel(frame_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_15, 0, 3, 1, 1);

        label_22 = new QLabel(frame_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font);

        gridLayout_7->addWidget(label_22, 1, 0, 1, 1);

        workpieceBoundsXMinLabel = new QLabel(frame_2);
        workpieceBoundsXMinLabel->setObjectName(QString::fromUtf8("workpieceBoundsXMinLabel"));
        workpieceBoundsXMinLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(workpieceBoundsXMinLabel, 1, 1, 1, 1);

        workpieceBoundsXMaxLabel = new QLabel(frame_2);
        workpieceBoundsXMaxLabel->setObjectName(QString::fromUtf8("workpieceBoundsXMaxLabel"));
        workpieceBoundsXMaxLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(workpieceBoundsXMaxLabel, 1, 2, 1, 1);

        workpieceBoundsXDimLabel = new QLabel(frame_2);
        workpieceBoundsXDimLabel->setObjectName(QString::fromUtf8("workpieceBoundsXDimLabel"));
        workpieceBoundsXDimLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(workpieceBoundsXDimLabel, 1, 3, 1, 1);

        label_23 = new QLabel(frame_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font);

        gridLayout_7->addWidget(label_23, 2, 0, 1, 1);

        workpieceBoundsYMinLabel = new QLabel(frame_2);
        workpieceBoundsYMinLabel->setObjectName(QString::fromUtf8("workpieceBoundsYMinLabel"));
        workpieceBoundsYMinLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(workpieceBoundsYMinLabel, 2, 1, 1, 1);

        workpieceBoundsYMaxLabel = new QLabel(frame_2);
        workpieceBoundsYMaxLabel->setObjectName(QString::fromUtf8("workpieceBoundsYMaxLabel"));
        workpieceBoundsYMaxLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(workpieceBoundsYMaxLabel, 2, 2, 1, 1);

        workpieceBoundsYDimLabel = new QLabel(frame_2);
        workpieceBoundsYDimLabel->setObjectName(QString::fromUtf8("workpieceBoundsYDimLabel"));
        workpieceBoundsYDimLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(workpieceBoundsYDimLabel, 2, 3, 1, 1);

        label_24 = new QLabel(frame_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setFont(font);

        gridLayout_7->addWidget(label_24, 3, 0, 1, 1);

        workpieceBoundsZMinLabel = new QLabel(frame_2);
        workpieceBoundsZMinLabel->setObjectName(QString::fromUtf8("workpieceBoundsZMinLabel"));
        workpieceBoundsZMinLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(workpieceBoundsZMinLabel, 3, 1, 1, 1);

        workpieceBoundsZMaxLabel = new QLabel(frame_2);
        workpieceBoundsZMaxLabel->setObjectName(QString::fromUtf8("workpieceBoundsZMaxLabel"));
        workpieceBoundsZMaxLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(workpieceBoundsZMaxLabel, 3, 2, 1, 1);

        workpieceBoundsZDimLabel = new QLabel(frame_2);
        workpieceBoundsZDimLabel->setObjectName(QString::fromUtf8("workpieceBoundsZDimLabel"));
        workpieceBoundsZDimLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(workpieceBoundsZDimLabel, 3, 3, 1, 1);

        gridLayout_7->setColumnStretch(1, 1);
        gridLayout_7->setColumnStretch(2, 1);
        gridLayout_7->setColumnStretch(3, 1);

        verticalLayout_23->addLayout(gridLayout_7);


        verticalLayout_24->addWidget(frame_2);

        workpieceBoundsDockWidget->setWidget(dockWidgetContents_2);
        OpenSCAMWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), workpieceBoundsDockWidget);
#ifndef QT_NO_SHORTCUT
        label_44->setBuddy(toolSpinBox);
        label_50->setBuddy(descriptionLineEdit);
        label_46->setBuddy(shapeComboBox);
        label_47->setBuddy(lengthDoubleSpinBox);
        label_48->setBuddy(diameterDoubleSpinBox);
        snubDiameterLabel->setBuddy(snubDiameterDoubleSpinBox);
#endif // QT_NO_SHORTCUT

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuSimulate->menuAction());
        menubar->addAction(menuView_2->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionAddFile);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSaveAs);
        menuFile->addAction(actionSaveFile);
        menuFile->addAction(actionSaveFileAs);
        menuFile->addAction(actionRevertFile);
        menuFile->addSeparator();
        menuFile->addAction(actionExamples);
        menuFile->addSeparator();
        menuFile->addAction(actionExport);
        menuFile->addAction(actionSnapshot);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionDonate);
        menuHelp->addAction(actionHelp);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelectAll);
        menuEdit->addSeparator();
        menuView_2->addAction(actionFullscreen);
        menuView_2->addSeparator();
        menuView_2->addAction(actionDefaultLayout);
        menuView_2->addAction(actionFullLayout);
        menuView_2->addAction(actionMinimalLayout);
        menuView_2->addAction(actionToolbars);
        menuView_2->addAction(actionDocks);
        menuView_2->addSeparator();
        menuView_2->addAction(actionCutSurface);
        menuView_2->addAction(actionWireSurface);
        menuView_2->addAction(actionWorkpieceSurface);
        menuView_2->addAction(actionHideSurface);
        menuView_2->addSeparator();
        menuView_2->addAction(actionToolPath);
        menuView_2->addAction(actionTool);
        menuView_2->addAction(actionWorkpieceBounds);
        menuView_2->addAction(actionAxes);
        menuView_2->addSeparator();
        menuView_2->addAction(actionIsoView);
        menuView_2->addAction(actionFrontView);
        menuView_2->addAction(actionBackView);
        menuView_2->addAction(actionLeftView);
        menuView_2->addAction(actionRightView);
        menuView_2->addAction(actionTopView);
        menuView_2->addAction(actionBottomView);
        menuSimulate->addAction(actionStop);
        menuSimulate->addAction(actionRun);
        menuSimulate->addSeparator();
        menuSimulate->addAction(actionPlay);
        menuSimulate->addAction(actionBegining);
        menuSimulate->addAction(actionEnd);
        menuSimulate->addAction(actionSlower);
        menuSimulate->addAction(actionFaster);
        menuSimulate->addAction(actionDirection);
        projectToolBar->addAction(actionNew);
        projectToolBar->addAction(actionOpen);
        projectToolBar->addAction(actionSave);
        projectToolBar->addSeparator();
        projectToolBar->addAction(actionExport);
        projectToolBar->addAction(actionSnapshot);
        viewToolBar->addAction(actionCutSurface);
        viewToolBar->addAction(actionWireSurface);
        viewToolBar->addAction(actionWorkpieceSurface);
        viewToolBar->addAction(actionHideSurface);
        viewToolBar->addSeparator();
        viewToolBar->addAction(actionToolPath);
        viewToolBar->addAction(actionTool);
        viewToolBar->addAction(actionWorkpieceBounds);
        viewToolBar->addAction(actionAxes);
        simulateToolBar->addAction(actionStop);
        simulateToolBar->addAction(actionRun);
        simulateToolBar->addSeparator();
        simulateToolBar->addAction(actionPlay);
        simulateToolBar->addAction(actionBegining);
        simulateToolBar->addAction(actionEnd);
        simulateToolBar->addAction(actionSlower);
        simulateToolBar->addAction(actionFaster);
        simulateToolBar->addAction(actionDirection);
        perspectiveToolBar->addAction(actionIsoView);
        perspectiveToolBar->addAction(actionFrontView);
        perspectiveToolBar->addAction(actionBackView);
        perspectiveToolBar->addAction(actionLeftView);
        perspectiveToolBar->addAction(actionRightView);
        perspectiveToolBar->addAction(actionTopView);
        perspectiveToolBar->addAction(actionBottomView);

        retranslateUi(OpenSCAMWindow);

        tabWidget->setCurrentIndex(0);
        settingsStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OpenSCAMWindow);
    } // setupUi

    void retranslateUi(QMainWindow *OpenSCAMWindow)
    {
        OpenSCAMWindow->setWindowTitle(QApplication::translate("OpenSCAMWindow", "OpenSCAM[*]", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("OpenSCAMWindow", "&New Project", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("OpenSCAMWindow", "Create a new project.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionOpen->setText(QApplication::translate("OpenSCAMWindow", "&Open Project", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("OpenSCAMWindow", "Open an existing project or NC file.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSave->setText(QApplication::translate("OpenSCAMWindow", "&Save All", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("OpenSCAMWindow", "Save the current project", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSaveAs->setText(QApplication::translate("OpenSCAMWindow", "Save Project &As", 0, QApplication::UnicodeUTF8));
        actionExport->setText(QApplication::translate("OpenSCAMWindow", "Export", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExport->setToolTip(QApplication::translate("OpenSCAMWindow", "Export the surface", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSnapshot->setText(QApplication::translate("OpenSCAMWindow", "Snapshot", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSnapshot->setToolTip(QApplication::translate("OpenSCAMWindow", "Save a snapshot of the current view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionQuit->setText(QApplication::translate("OpenSCAMWindow", "&Quit", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("OpenSCAMWindow", "&About", 0, QApplication::UnicodeUTF8));
        actionWireSurface->setText(QApplication::translate("OpenSCAMWindow", "Show Wire Surface", 0, QApplication::UnicodeUTF8));
        actionWireSurface->setShortcut(QApplication::translate("OpenSCAMWindow", "Ctrl+2", 0, QApplication::UnicodeUTF8));
        actionWorkpieceBounds->setText(QApplication::translate("OpenSCAMWindow", "Show Workpiece Bounds", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWorkpieceBounds->setToolTip(QApplication::translate("OpenSCAMWindow", "Show workpiece bounds", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWorkpieceBounds->setShortcut(QApplication::translate("OpenSCAMWindow", "Ctrl+7", 0, QApplication::UnicodeUTF8));
        actionTool->setText(QApplication::translate("OpenSCAMWindow", "Show Tool", 0, QApplication::UnicodeUTF8));
        actionTool->setShortcut(QApplication::translate("OpenSCAMWindow", "Ctrl+6", 0, QApplication::UnicodeUTF8));
        actionCutSurface->setText(QApplication::translate("OpenSCAMWindow", "Show Cut Surface", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCutSurface->setToolTip(QApplication::translate("OpenSCAMWindow", "Show cut surface", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCutSurface->setShortcut(QApplication::translate("OpenSCAMWindow", "Ctrl+1", 0, QApplication::UnicodeUTF8));
        actionAxes->setText(QApplication::translate("OpenSCAMWindow", "Show Axes", 0, QApplication::UnicodeUTF8));
        actionAxes->setShortcut(QApplication::translate("OpenSCAMWindow", "Ctrl+8", 0, QApplication::UnicodeUTF8));
        actionToolPath->setText(QApplication::translate("OpenSCAMWindow", "Show Tool Path", 0, QApplication::UnicodeUTF8));
        actionToolPath->setShortcut(QApplication::translate("OpenSCAMWindow", "Ctrl+5", 0, QApplication::UnicodeUTF8));
        actionIsoView->setText(QApplication::translate("OpenSCAMWindow", "Isometric", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionIsoView->setToolTip(QApplication::translate("OpenSCAMWindow", "Snap to isometric view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionIsoView->setShortcut(QApplication::translate("OpenSCAMWindow", "Alt+1", 0, QApplication::UnicodeUTF8));
        actionFrontView->setText(QApplication::translate("OpenSCAMWindow", "Front", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionFrontView->setToolTip(QApplication::translate("OpenSCAMWindow", "Snap to front view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionFrontView->setShortcut(QApplication::translate("OpenSCAMWindow", "Alt+2", 0, QApplication::UnicodeUTF8));
        actionBackView->setText(QApplication::translate("OpenSCAMWindow", "Back", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionBackView->setToolTip(QApplication::translate("OpenSCAMWindow", "Snap to back view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionBackView->setShortcut(QApplication::translate("OpenSCAMWindow", "Alt+3", 0, QApplication::UnicodeUTF8));
        actionLeftView->setText(QApplication::translate("OpenSCAMWindow", "Left", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLeftView->setToolTip(QApplication::translate("OpenSCAMWindow", "Snap to left view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLeftView->setShortcut(QApplication::translate("OpenSCAMWindow", "Alt+4", 0, QApplication::UnicodeUTF8));
        actionRightView->setText(QApplication::translate("OpenSCAMWindow", "Right", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRightView->setToolTip(QApplication::translate("OpenSCAMWindow", "Snap to right view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRightView->setShortcut(QApplication::translate("OpenSCAMWindow", "Alt+5", 0, QApplication::UnicodeUTF8));
        actionTopView->setText(QApplication::translate("OpenSCAMWindow", "Top", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionTopView->setToolTip(QApplication::translate("OpenSCAMWindow", "Snap to top view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionTopView->setShortcut(QApplication::translate("OpenSCAMWindow", "Alt+6", 0, QApplication::UnicodeUTF8));
        actionBottomView->setText(QApplication::translate("OpenSCAMWindow", "Bottom", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionBottomView->setToolTip(QApplication::translate("OpenSCAMWindow", "Snap to bottom view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionBottomView->setShortcut(QApplication::translate("OpenSCAMWindow", "Alt+7", 0, QApplication::UnicodeUTF8));
        actionBegining->setText(QApplication::translate("OpenSCAMWindow", "Begining", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionBegining->setToolTip(QApplication::translate("OpenSCAMWindow", "Jump to start of tool path animation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSlower->setText(QApplication::translate("OpenSCAMWindow", "Slower", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSlower->setToolTip(QApplication::translate("OpenSCAMWindow", "Slow down tool path animation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPlay->setText(QApplication::translate("OpenSCAMWindow", "Play", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPlay->setToolTip(QApplication::translate("OpenSCAMWindow", "Start or stop tool path animation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionFaster->setText(QApplication::translate("OpenSCAMWindow", "Faster", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionFaster->setToolTip(QApplication::translate("OpenSCAMWindow", "Speed up tool path animation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEnd->setText(QApplication::translate("OpenSCAMWindow", "End", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEnd->setToolTip(QApplication::translate("OpenSCAMWindow", "Jump to end of tool path animation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDirection->setText(QApplication::translate("OpenSCAMWindow", "Direction", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDirection->setToolTip(QApplication::translate("OpenSCAMWindow", "Change tool path animation direction", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAddTool->setText(QApplication::translate("OpenSCAMWindow", "New Tool", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAddTool->setToolTip(QApplication::translate("OpenSCAMWindow", "Add a new tool", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRemoveTool->setText(QApplication::translate("OpenSCAMWindow", "Remove Tool", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRemoveTool->setToolTip(QApplication::translate("OpenSCAMWindow", "Remove the selected tool", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAddFile->setText(QApplication::translate("OpenSCAMWindow", "Add File", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAddFile->setToolTip(QApplication::translate("OpenSCAMWindow", "Add a new file to the project", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRemoveFile->setText(QApplication::translate("OpenSCAMWindow", "Remove File", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRemoveFile->setToolTip(QApplication::translate("OpenSCAMWindow", "Remove the currently selected file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionHideSurface->setText(QApplication::translate("OpenSCAMWindow", "Hide Surface", 0, QApplication::UnicodeUTF8));
        actionHideSurface->setShortcut(QApplication::translate("OpenSCAMWindow", "Ctrl+4", 0, QApplication::UnicodeUTF8));
        actionStop->setText(QApplication::translate("OpenSCAMWindow", "Stop", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionStop->setToolTip(QApplication::translate("OpenSCAMWindow", "Stop the simulation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionStop->setShortcut(QApplication::translate("OpenSCAMWindow", "F6", 0, QApplication::UnicodeUTF8));
        actionRun->setText(QApplication::translate("OpenSCAMWindow", "Run", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRun->setToolTip(QApplication::translate("OpenSCAMWindow", "Run or restart the simulation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRun->setShortcut(QApplication::translate("OpenSCAMWindow", "F5", 0, QApplication::UnicodeUTF8));
        actionSmooth->setText(QApplication::translate("OpenSCAMWindow", "Smooth", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSmooth->setToolTip(QApplication::translate("OpenSCAMWindow", "Smooth the resulting surface for better visualization", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDonate->setText(QApplication::translate("OpenSCAMWindow", "Donate", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDonate->setToolTip(QApplication::translate("OpenSCAMWindow", "Please consider support this software.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWorkpieceSurface->setText(QApplication::translate("OpenSCAMWindow", "Show Workpiece", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWorkpieceSurface->setToolTip(QApplication::translate("OpenSCAMWindow", "Show uncut workpiece", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWorkpieceSurface->setShortcut(QApplication::translate("OpenSCAMWindow", "Ctrl+3", 0, QApplication::UnicodeUTF8));
        actionDefaultLayout->setText(QApplication::translate("OpenSCAMWindow", "Default Layout", 0, QApplication::UnicodeUTF8));
        actionExamples->setText(QApplication::translate("OpenSCAMWindow", "Examples", 0, QApplication::UnicodeUTF8));
        actionMinimalLayout->setText(QApplication::translate("OpenSCAMWindow", "Minimal Layout", 0, QApplication::UnicodeUTF8));
        actionFullLayout->setText(QApplication::translate("OpenSCAMWindow", "Full Layout", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionFullLayout->setToolTip(QApplication::translate("OpenSCAMWindow", "Full Layout", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionToolbars->setText(QApplication::translate("OpenSCAMWindow", "Toolbars", 0, QApplication::UnicodeUTF8));
        actionDocks->setText(QApplication::translate("OpenSCAMWindow", "Docks", 0, QApplication::UnicodeUTF8));
        actionFullscreen->setText(QApplication::translate("OpenSCAMWindow", "Fullscreen", 0, QApplication::UnicodeUTF8));
        actionFullscreen->setShortcut(QApplication::translate("OpenSCAMWindow", "F11", 0, QApplication::UnicodeUTF8));
        actionHelp->setText(QApplication::translate("OpenSCAMWindow", "Help", 0, QApplication::UnicodeUTF8));
        actionRevertFile->setText(QApplication::translate("OpenSCAMWindow", "Revert File", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRevertFile->setToolTip(QApplication::translate("OpenSCAMWindow", "Revert changes to NC file.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSaveFileAs->setText(QApplication::translate("OpenSCAMWindow", "Save File As", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSaveFileAs->setToolTip(QApplication::translate("OpenSCAMWindow", "Save NC file to a specified location.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSaveFile->setText(QApplication::translate("OpenSCAMWindow", "Save File", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSaveFile->setToolTip(QApplication::translate("OpenSCAMWindow", "Save file.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionUndo->setText(QApplication::translate("OpenSCAMWindow", "Undo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionUndo->setToolTip(QApplication::translate("OpenSCAMWindow", "Undo most recent edit.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionUndo->setShortcut(QApplication::translate("OpenSCAMWindow", "Ctrl+Z", 0, QApplication::UnicodeUTF8));
        actionRedo->setText(QApplication::translate("OpenSCAMWindow", "Redo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRedo->setToolTip(QApplication::translate("OpenSCAMWindow", "Redo recent edit.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRedo->setShortcut(QApplication::translate("OpenSCAMWindow", "Ctrl+Shift+Z", 0, QApplication::UnicodeUTF8));
        actionCut->setText(QApplication::translate("OpenSCAMWindow", "Cut", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCut->setToolTip(QApplication::translate("OpenSCAMWindow", "Cut selected text to clipboard.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCut->setShortcut(QApplication::translate("OpenSCAMWindow", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("OpenSCAMWindow", "Copy", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCopy->setToolTip(QApplication::translate("OpenSCAMWindow", "Copy selected text to clipboard.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCopy->setShortcut(QApplication::translate("OpenSCAMWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionPaste->setText(QApplication::translate("OpenSCAMWindow", "Paste", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPaste->setToolTip(QApplication::translate("OpenSCAMWindow", "Paste clipboard contents to editor.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPaste->setShortcut(QApplication::translate("OpenSCAMWindow", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionSelectAll->setText(QApplication::translate("OpenSCAMWindow", "Select All", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSelectAll->setToolTip(QApplication::translate("OpenSCAMWindow", "Select all text in editor.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSelectAll->setShortcut(QApplication::translate("OpenSCAMWindow", "Ctrl+A", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        positionSlider->setToolTip(QApplication::translate("OpenSCAMWindow", "Set tool path position", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_28->setText(QApplication::translate("OpenSCAMWindow", "Position", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(simulationTab), QApplication::translate("OpenSCAMWindow", "Simulation View", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(toolTab), QApplication::translate("OpenSCAMWindow", "Tool View", 0, QApplication::UnicodeUTF8));
        errorsCheckBox->setText(QApplication::translate("OpenSCAMWindow", "Errors", 0, QApplication::UnicodeUTF8));
        warningsCheckBox->setText(QApplication::translate("OpenSCAMWindow", "Warnings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        clearConsolePushButton->setToolTip(QApplication::translate("OpenSCAMWindow", "Clear console.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        clearConsolePushButton->setText(QString());
        label_27->setText(QApplication::translate("OpenSCAMWindow", "Progress", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        progressBar->setToolTip(QApplication::translate("OpenSCAMWindow", "Progressbar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        menuFile->setTitle(QApplication::translate("OpenSCAMWindow", "&File", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("OpenSCAMWindow", "&Help", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("OpenSCAMWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuView_2->setTitle(QApplication::translate("OpenSCAMWindow", "View", 0, QApplication::UnicodeUTF8));
        menuSimulate->setTitle(QApplication::translate("OpenSCAMWindow", "Simulate", 0, QApplication::UnicodeUTF8));
        projectToolBar->setWindowTitle(QApplication::translate("OpenSCAMWindow", "Project Toolbar", 0, QApplication::UnicodeUTF8));
        viewToolBar->setWindowTitle(QApplication::translate("OpenSCAMWindow", "View Toolbar", 0, QApplication::UnicodeUTF8));
        simulateToolBar->setWindowTitle(QApplication::translate("OpenSCAMWindow", "toolBar", 0, QApplication::UnicodeUTF8));
        perspectiveToolBar->setWindowTitle(QApplication::translate("OpenSCAMWindow", "Perspective Toolbar", 0, QApplication::UnicodeUTF8));
        positionDockWidget->setWindowTitle(QApplication::translate("OpenSCAMWindow", "Tool Position", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        zLabel->setToolTip(QApplication::translate("OpenSCAMWindow", "Current Z position", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        zLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("OpenSCAMWindow", "Z", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("OpenSCAMWindow", "X", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        xLabel->setToolTip(QApplication::translate("OpenSCAMWindow", "Current X position", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        xLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("OpenSCAMWindow", "Y", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        yLabel->setToolTip(QApplication::translate("OpenSCAMWindow", "Current Y position", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        yLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        estimatesDockWidget->setWindowTitle(QApplication::translate("OpenSCAMWindow", "Estimates", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("OpenSCAMWindow", "Time", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("OpenSCAMWindow", "Distance", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("OpenSCAMWindow", "Current", 0, QApplication::UnicodeUTF8));
        currentTimeLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        currentDistanceLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("OpenSCAMWindow", "Remaining", 0, QApplication::UnicodeUTF8));
        remainingTimeLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        remainingDistanceLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("OpenSCAMWindow", "Total", 0, QApplication::UnicodeUTF8));
        totalTimeLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        totalDistanceLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("OpenSCAMWindow", "Percent", 0, QApplication::UnicodeUTF8));
        percentTimeLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        percentDistanceLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        statusDockWidget->setWindowTitle(QApplication::translate("OpenSCAMWindow", "Machine Status", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("OpenSCAMWindow", "Tool", 0, QApplication::UnicodeUTF8));
        toolLabel->setText(QApplication::translate("OpenSCAMWindow", "0", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("OpenSCAMWindow", "Feed", 0, QApplication::UnicodeUTF8));
        feedLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("OpenSCAMWindow", "Speed", 0, QApplication::UnicodeUTF8));
        speedLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("OpenSCAMWindow", "Spin", 0, QApplication::UnicodeUTF8));
        directionLabel->setText(QApplication::translate("OpenSCAMWindow", "Clockwise", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("OpenSCAMWindow", "Program Line", 0, QApplication::UnicodeUTF8));
        programLineLabel->setText(QApplication::translate("OpenSCAMWindow", "0", 0, QApplication::UnicodeUTF8));
        projectDockWidget->setWindowTitle(QApplication::translate("OpenSCAMWindow", "Project", 0, QApplication::UnicodeUTF8));
        settingsDockWidget->setWindowTitle(QApplication::translate("OpenSCAMWindow", "Settings", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("OpenSCAMWindow", "Project", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        resolutionDoubleSpinBox->setToolTip(QApplication::translate("OpenSCAMWindow", "Renderer resolution", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_25->setText(QApplication::translate("OpenSCAMWindow", "Resolution", 0, QApplication::UnicodeUTF8));
        resolutionComboBox->clear();
        resolutionComboBox->insertItems(0, QStringList()
         << QApplication::translate("OpenSCAMWindow", "Manual", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OpenSCAMWindow", "Low", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OpenSCAMWindow", "Medium", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OpenSCAMWindow", "High", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OpenSCAMWindow", "Very High", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        resolutionComboBox->setToolTip(QApplication::translate("OpenSCAMWindow", "Renderer resolution presets", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_26->setText(QApplication::translate("OpenSCAMWindow", "Units", 0, QApplication::UnicodeUTF8));
        unitsComboBox->clear();
        unitsComboBox->insertItems(0, QStringList()
         << QApplication::translate("OpenSCAMWindow", "mm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OpenSCAMWindow", "inch", 0, QApplication::UnicodeUTF8)
        );
        label_37->setText(QApplication::translate("OpenSCAMWindow", "Smooth", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        smoothPushButton->setToolTip(QApplication::translate("OpenSCAMWindow", "Smooth the resulting surface for better visualization", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("OpenSCAMWindow", "Workpiece", 0, QApplication::UnicodeUTF8));
        automaticCuboidRadioButton->setText(QApplication::translate("OpenSCAMWindow", "Automatic", 0, QApplication::UnicodeUTF8));
        label_52->setText(QApplication::translate("OpenSCAMWindow", "Margin", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("OpenSCAMWindow", "%", 0, QApplication::UnicodeUTF8));
        manualCuboidRadioButton->setText(QApplication::translate("OpenSCAMWindow", "Manual", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("OpenSCAMWindow", "Dimension", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("OpenSCAMWindow", "Offset", 0, QApplication::UnicodeUTF8));
        label_54->setText(QApplication::translate("OpenSCAMWindow", "X", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("OpenSCAMWindow", "Y", 0, QApplication::UnicodeUTF8));
        label_56->setText(QApplication::translate("OpenSCAMWindow", "Z", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("OpenSCAMWindow", "Tool", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("OpenSCAMWindow", "Tool", 0, QApplication::UnicodeUTF8));
        label_50->setText(QApplication::translate("OpenSCAMWindow", "Description", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("OpenSCAMWindow", "Units", 0, QApplication::UnicodeUTF8));
        toolUnitsComboBox->clear();
        toolUnitsComboBox->insertItems(0, QStringList()
         << QApplication::translate("OpenSCAMWindow", "mm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OpenSCAMWindow", "inch", 0, QApplication::UnicodeUTF8)
        );
        label_46->setText(QApplication::translate("OpenSCAMWindow", "Shape", 0, QApplication::UnicodeUTF8));
        shapeComboBox->clear();
        shapeComboBox->insertItems(0, QStringList()
         << QApplication::translate("OpenSCAMWindow", "Cylindrical", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OpenSCAMWindow", "Conical", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OpenSCAMWindow", "Ballnose", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OpenSCAMWindow", "Spheroid", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OpenSCAMWindow", "Snubnose", 0, QApplication::UnicodeUTF8)
        );
        label_47->setText(QApplication::translate("OpenSCAMWindow", "Length", 0, QApplication::UnicodeUTF8));
        label_48->setText(QApplication::translate("OpenSCAMWindow", "Diameter", 0, QApplication::UnicodeUTF8));
        snubDiameterLabel->setText(QApplication::translate("OpenSCAMWindow", "Snub Diameter", 0, QApplication::UnicodeUTF8));
        toolPathBoundsDockWidget->setWindowTitle(QApplication::translate("OpenSCAMWindow", "Tool Path Bounds", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OpenSCAMWindow", "Min", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("OpenSCAMWindow", "Max", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("OpenSCAMWindow", "Dim", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("OpenSCAMWindow", "X", 0, QApplication::UnicodeUTF8));
        toolPathBoundsXMinLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        toolPathBoundsXMaxLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        toolPathBoundsXDimLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("OpenSCAMWindow", "Y", 0, QApplication::UnicodeUTF8));
        toolPathBoundsYMinLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        toolPathBoundsYMaxLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        toolPathBoundsYDimLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("OpenSCAMWindow", "Z", 0, QApplication::UnicodeUTF8));
        toolPathBoundsZMinLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        toolPathBoundsZMaxLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        toolPathBoundsZDimLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        workpieceBoundsDockWidget->setWindowTitle(QApplication::translate("OpenSCAMWindow", "Workpiece Bounds", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("OpenSCAMWindow", "Min", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("OpenSCAMWindow", "Max", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("OpenSCAMWindow", "Dim", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("OpenSCAMWindow", "X", 0, QApplication::UnicodeUTF8));
        workpieceBoundsXMinLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        workpieceBoundsXMaxLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        workpieceBoundsXDimLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("OpenSCAMWindow", "Y", 0, QApplication::UnicodeUTF8));
        workpieceBoundsYMinLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        workpieceBoundsYMaxLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        workpieceBoundsYDimLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("OpenSCAMWindow", "Z", 0, QApplication::UnicodeUTF8));
        workpieceBoundsZMinLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        workpieceBoundsZMaxLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
        workpieceBoundsZDimLabel->setText(QApplication::translate("OpenSCAMWindow", "0.0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OpenSCAMWindow: public Ui_OpenSCAMWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENSCAM_H
