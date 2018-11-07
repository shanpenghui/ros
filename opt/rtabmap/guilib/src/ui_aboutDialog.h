/********************************************************************************
** Form generated from reading UI file 'aboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aboutDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_9;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_8;
    QLabel *label_4;
    QLabel *label_HomePage_2;
    QLabel *label_HomePage_3;
    QLabel *label_6;
    QLabel *label_version;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QLabel *label_realsense2_license;
    QLabel *label_realsense2;
    QLabel *label_okvis;
    QLabel *label_35;
    QLabel *label_msckf;
    QLabel *label_34;
    QLabel *label_dvo;
    QLabel *label_octomap;
    QLabel *label_pcl_license;
    QLabel *label_pcl_version;
    QLabel *label_23;
    QLabel *label_openni2;
    QLabel *label_15;
    QLabel *label_flycapture2;
    QLabel *label_79;
    QLabel *label_7;
    QLabel *label_24;
    QLabel *label_cputsdf;
    QLabel *label_25;
    QLabel *label_11;
    QLabel *label_octomap_license;
    QLabel *label_fovis_license;
    QLabel *label_20;
    QLabel *label_viso2_license;
    QLabel *label_28;
    QLabel *label_orbslam2;
    QLabel *label_21;
    QLabel *label_zed;
    QLabel *label_dc1394_license;
    QLabel *label_17;
    QLabel *label_fovis;
    QLabel *label_77;
    QLabel *label_26;
    QLabel *label_14;
    QLabel *label_g2o;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_gtsam;
    QLabel *label_12;
    QLabel *label_16;
    QLabel *label_cvsba;
    QLabel *label_22;
    QLabel *label_opencv_version;
    QLabel *label_dc1394;
    QLabel *label_opencv_license;
    QLabel *label_vtk_version;
    QLabel *label_freenect2;
    QLabel *label_freenect2_license;
    QLabel *label_realsense;
    QLabel *label_openni2_license;
    QLabel *label_freenect;
    QLabel *label_freenect_license;
    QLabel *label_31;
    QLabel *label_vtk_license;
    QLabel *label_32;
    QLabel *label_realsense_license;
    QLabel *label_cputsdf_license;
    QLabel *label_dvo_license;
    QLabel *label_toro_license;
    QLabel *label_13;
    QLabel *label_toro;
    QLabel *label_27;
    QLabel *label_qt_license;
    QLabel *label_g2o_license;
    QLabel *label_gtsam_license;
    QLabel *label_viso2;
    QLabel *label_cvsba_license;
    QLabel *label_qt_version;
    QLabel *label_orbslam2_license;
    QLabel *label_libpointmatcher_license;
    QLabel *label_29;
    QLabel *label_libpointmatcher;
    QLabel *label_30;
    QLabel *label_openchisel;
    QLabel *label_33;
    QLabel *label_36;
    QLabel *label_loam;
    QLabel *label_okvis_license;
    QLabel *label_msckf_license;
    QLabel *label_loam_license;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_3;
    QLabel *label_5;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *aboutDialog)
    {
        if (aboutDialog->objectName().isEmpty())
            aboutDialog->setObjectName(QString::fromUtf8("aboutDialog"));
        aboutDialog->resize(760, 738);
        verticalLayout_3 = new QVBoxLayout(aboutDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_10 = new QLabel(aboutDialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(100, 100));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/images/RTAB-Map.png")));
        label_10->setScaledContents(true);
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_10);

        frame = new QFrame(aboutDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label);

        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_9->setWordWrap(true);

        verticalLayout->addWidget(label_9);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 0, 1, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_HomePage_2 = new QLabel(frame);
        label_HomePage_2->setObjectName(QString::fromUtf8("label_HomePage_2"));
        label_HomePage_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_HomePage_2->setOpenExternalLinks(true);

        gridLayout->addWidget(label_HomePage_2, 1, 1, 1, 1);

        label_HomePage_3 = new QLabel(frame);
        label_HomePage_3->setObjectName(QString::fromUtf8("label_HomePage_3"));
        label_HomePage_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_HomePage_3->setOpenExternalLinks(true);

        gridLayout->addWidget(label_HomePage_3, 2, 1, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        label_version = new QLabel(frame);
        label_version->setObjectName(QString::fromUtf8("label_version"));
        label_version->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_version, 3, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addLayout(gridLayout);

        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 597, 659));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 1, 0, 1);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_realsense2_license = new QLabel(scrollAreaWidgetContents);
        label_realsense2_license->setObjectName(QString::fromUtf8("label_realsense2_license"));
        label_realsense2_license->setWordWrap(true);

        gridLayout_2->addWidget(label_realsense2_license, 9, 2, 1, 1);

        label_realsense2 = new QLabel(scrollAreaWidgetContents);
        label_realsense2->setObjectName(QString::fromUtf8("label_realsense2"));
        label_realsense2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_realsense2->setWordWrap(true);

        gridLayout_2->addWidget(label_realsense2, 9, 1, 1, 1);

        label_okvis = new QLabel(scrollAreaWidgetContents);
        label_okvis->setObjectName(QString::fromUtf8("label_okvis"));
        label_okvis->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_okvis->setWordWrap(true);

        gridLayout_2->addWidget(label_okvis, 25, 1, 1, 1);

        label_35 = new QLabel(scrollAreaWidgetContents);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setWordWrap(true);

        gridLayout_2->addWidget(label_35, 25, 0, 1, 1);

        label_msckf = new QLabel(scrollAreaWidgetContents);
        label_msckf->setObjectName(QString::fromUtf8("label_msckf"));
        label_msckf->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_msckf->setWordWrap(true);

        gridLayout_2->addWidget(label_msckf, 27, 1, 1, 1);

        label_34 = new QLabel(scrollAreaWidgetContents);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setWordWrap(true);

        gridLayout_2->addWidget(label_34, 27, 0, 1, 1);

        label_dvo = new QLabel(scrollAreaWidgetContents);
        label_dvo->setObjectName(QString::fromUtf8("label_dvo"));
        label_dvo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_dvo->setWordWrap(true);

        gridLayout_2->addWidget(label_dvo, 23, 1, 1, 1);

        label_octomap = new QLabel(scrollAreaWidgetContents);
        label_octomap->setObjectName(QString::fromUtf8("label_octomap"));
        label_octomap->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_octomap->setWordWrap(true);

        gridLayout_2->addWidget(label_octomap, 18, 1, 1, 1);

        label_pcl_license = new QLabel(scrollAreaWidgetContents);
        label_pcl_license->setObjectName(QString::fromUtf8("label_pcl_license"));
        label_pcl_license->setWordWrap(true);

        gridLayout_2->addWidget(label_pcl_license, 2, 2, 1, 1);

        label_pcl_version = new QLabel(scrollAreaWidgetContents);
        label_pcl_version->setObjectName(QString::fromUtf8("label_pcl_version"));
        label_pcl_version->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_pcl_version->setWordWrap(true);

        gridLayout_2->addWidget(label_pcl_version, 2, 1, 1, 1);

        label_23 = new QLabel(scrollAreaWidgetContents);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setWordWrap(true);

        gridLayout_2->addWidget(label_23, 3, 0, 1, 1);

        label_openni2 = new QLabel(scrollAreaWidgetContents);
        label_openni2->setObjectName(QString::fromUtf8("label_openni2"));
        label_openni2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_openni2->setWordWrap(true);

        gridLayout_2->addWidget(label_openni2, 6, 1, 1, 1);

        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setWordWrap(true);

        gridLayout_2->addWidget(label_15, 7, 0, 1, 1);

        label_flycapture2 = new QLabel(scrollAreaWidgetContents);
        label_flycapture2->setObjectName(QString::fromUtf8("label_flycapture2"));
        label_flycapture2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_flycapture2->setWordWrap(true);

        gridLayout_2->addWidget(label_flycapture2, 11, 1, 1, 1);

        label_79 = new QLabel(scrollAreaWidgetContents);
        label_79->setObjectName(QString::fromUtf8("label_79"));
        label_79->setWordWrap(true);

        gridLayout_2->addWidget(label_79, 4, 0, 1, 1);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setWordWrap(true);

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        label_24 = new QLabel(scrollAreaWidgetContents);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setWordWrap(true);

        gridLayout_2->addWidget(label_24, 19, 0, 1, 1);

        label_cputsdf = new QLabel(scrollAreaWidgetContents);
        label_cputsdf->setObjectName(QString::fromUtf8("label_cputsdf"));
        label_cputsdf->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_cputsdf->setWordWrap(true);

        gridLayout_2->addWidget(label_cputsdf, 19, 1, 1, 1);

        label_25 = new QLabel(scrollAreaWidgetContents);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setWordWrap(true);

        gridLayout_2->addWidget(label_25, 21, 0, 1, 1);

        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setWordWrap(true);

        gridLayout_2->addWidget(label_11, 2, 0, 1, 1);

        label_octomap_license = new QLabel(scrollAreaWidgetContents);
        label_octomap_license->setObjectName(QString::fromUtf8("label_octomap_license"));
        label_octomap_license->setWordWrap(true);

        gridLayout_2->addWidget(label_octomap_license, 18, 2, 1, 1);

        label_fovis_license = new QLabel(scrollAreaWidgetContents);
        label_fovis_license->setObjectName(QString::fromUtf8("label_fovis_license"));
        label_fovis_license->setWordWrap(true);

        gridLayout_2->addWidget(label_fovis_license, 21, 2, 1, 1);

        label_20 = new QLabel(scrollAreaWidgetContents);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setWordWrap(true);

        gridLayout_2->addWidget(label_20, 18, 0, 1, 1);

        label_viso2_license = new QLabel(scrollAreaWidgetContents);
        label_viso2_license->setObjectName(QString::fromUtf8("label_viso2_license"));
        label_viso2_license->setWordWrap(true);

        gridLayout_2->addWidget(label_viso2_license, 22, 2, 1, 1);

        label_28 = new QLabel(scrollAreaWidgetContents);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setWordWrap(true);

        gridLayout_2->addWidget(label_28, 24, 0, 1, 1);

        label_orbslam2 = new QLabel(scrollAreaWidgetContents);
        label_orbslam2->setObjectName(QString::fromUtf8("label_orbslam2"));
        label_orbslam2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_orbslam2->setWordWrap(true);

        gridLayout_2->addWidget(label_orbslam2, 24, 1, 1, 1);

        label_21 = new QLabel(scrollAreaWidgetContents);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setWordWrap(true);

        gridLayout_2->addWidget(label_21, 12, 0, 1, 1);

        label_zed = new QLabel(scrollAreaWidgetContents);
        label_zed->setObjectName(QString::fromUtf8("label_zed"));
        label_zed->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_zed->setWordWrap(true);

        gridLayout_2->addWidget(label_zed, 12, 1, 1, 1);

        label_dc1394_license = new QLabel(scrollAreaWidgetContents);
        label_dc1394_license->setObjectName(QString::fromUtf8("label_dc1394_license"));
        label_dc1394_license->setWordWrap(true);

        gridLayout_2->addWidget(label_dc1394_license, 10, 2, 1, 1);

        label_17 = new QLabel(scrollAreaWidgetContents);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setWordWrap(true);

        gridLayout_2->addWidget(label_17, 11, 0, 1, 1);

        label_fovis = new QLabel(scrollAreaWidgetContents);
        label_fovis->setObjectName(QString::fromUtf8("label_fovis"));
        label_fovis->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_fovis->setWordWrap(true);

        gridLayout_2->addWidget(label_fovis, 21, 1, 1, 1);

        label_77 = new QLabel(scrollAreaWidgetContents);
        label_77->setObjectName(QString::fromUtf8("label_77"));
        label_77->setWordWrap(true);

        gridLayout_2->addWidget(label_77, 13, 0, 1, 1);

        label_26 = new QLabel(scrollAreaWidgetContents);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setWordWrap(true);

        gridLayout_2->addWidget(label_26, 22, 0, 1, 1);

        label_14 = new QLabel(scrollAreaWidgetContents);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setWordWrap(true);

        gridLayout_2->addWidget(label_14, 14, 0, 1, 1);

        label_g2o = new QLabel(scrollAreaWidgetContents);
        label_g2o->setObjectName(QString::fromUtf8("label_g2o"));
        label_g2o->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_g2o->setWordWrap(true);

        gridLayout_2->addWidget(label_g2o, 14, 1, 1, 1);

        label_18 = new QLabel(scrollAreaWidgetContents);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setWordWrap(true);

        gridLayout_2->addWidget(label_18, 16, 0, 1, 1);

        label_19 = new QLabel(scrollAreaWidgetContents);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setWordWrap(true);

        gridLayout_2->addWidget(label_19, 15, 0, 1, 1);

        label_gtsam = new QLabel(scrollAreaWidgetContents);
        label_gtsam->setObjectName(QString::fromUtf8("label_gtsam"));
        label_gtsam->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_gtsam->setWordWrap(true);

        gridLayout_2->addWidget(label_gtsam, 15, 1, 1, 1);

        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setWordWrap(true);

        gridLayout_2->addWidget(label_12, 5, 0, 1, 1);

        label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setWordWrap(true);

        gridLayout_2->addWidget(label_16, 10, 0, 1, 1);

        label_cvsba = new QLabel(scrollAreaWidgetContents);
        label_cvsba->setObjectName(QString::fromUtf8("label_cvsba"));
        label_cvsba->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_cvsba->setWordWrap(true);

        gridLayout_2->addWidget(label_cvsba, 16, 1, 1, 1);

        label_22 = new QLabel(scrollAreaWidgetContents);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setWordWrap(true);

        gridLayout_2->addWidget(label_22, 8, 0, 1, 1);

        label_opencv_version = new QLabel(scrollAreaWidgetContents);
        label_opencv_version->setObjectName(QString::fromUtf8("label_opencv_version"));
        label_opencv_version->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_opencv_version->setWordWrap(true);

        gridLayout_2->addWidget(label_opencv_version, 1, 1, 1, 1);

        label_dc1394 = new QLabel(scrollAreaWidgetContents);
        label_dc1394->setObjectName(QString::fromUtf8("label_dc1394"));
        label_dc1394->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_dc1394->setWordWrap(true);

        gridLayout_2->addWidget(label_dc1394, 10, 1, 1, 1);

        label_opencv_license = new QLabel(scrollAreaWidgetContents);
        label_opencv_license->setObjectName(QString::fromUtf8("label_opencv_license"));
        label_opencv_license->setWordWrap(true);

        gridLayout_2->addWidget(label_opencv_license, 1, 2, 1, 1);

        label_vtk_version = new QLabel(scrollAreaWidgetContents);
        label_vtk_version->setObjectName(QString::fromUtf8("label_vtk_version"));
        label_vtk_version->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_vtk_version->setWordWrap(true);

        gridLayout_2->addWidget(label_vtk_version, 3, 1, 1, 1);

        label_freenect2 = new QLabel(scrollAreaWidgetContents);
        label_freenect2->setObjectName(QString::fromUtf8("label_freenect2"));
        label_freenect2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_freenect2->setWordWrap(true);

        gridLayout_2->addWidget(label_freenect2, 7, 1, 1, 1);

        label_freenect2_license = new QLabel(scrollAreaWidgetContents);
        label_freenect2_license->setObjectName(QString::fromUtf8("label_freenect2_license"));
        label_freenect2_license->setWordWrap(true);

        gridLayout_2->addWidget(label_freenect2_license, 7, 2, 1, 1);

        label_realsense = new QLabel(scrollAreaWidgetContents);
        label_realsense->setObjectName(QString::fromUtf8("label_realsense"));
        label_realsense->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_realsense->setWordWrap(true);

        gridLayout_2->addWidget(label_realsense, 8, 1, 1, 1);

        label_openni2_license = new QLabel(scrollAreaWidgetContents);
        label_openni2_license->setObjectName(QString::fromUtf8("label_openni2_license"));
        label_openni2_license->setWordWrap(true);

        gridLayout_2->addWidget(label_openni2_license, 6, 2, 1, 1);

        label_freenect = new QLabel(scrollAreaWidgetContents);
        label_freenect->setObjectName(QString::fromUtf8("label_freenect"));
        label_freenect->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_freenect->setWordWrap(true);

        gridLayout_2->addWidget(label_freenect, 5, 1, 1, 1);

        label_freenect_license = new QLabel(scrollAreaWidgetContents);
        label_freenect_license->setObjectName(QString::fromUtf8("label_freenect_license"));
        label_freenect_license->setWordWrap(true);

        gridLayout_2->addWidget(label_freenect_license, 5, 2, 1, 1);

        label_31 = new QLabel(scrollAreaWidgetContents);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setWordWrap(true);

        gridLayout_2->addWidget(label_31, 0, 2, 1, 1);

        label_vtk_license = new QLabel(scrollAreaWidgetContents);
        label_vtk_license->setObjectName(QString::fromUtf8("label_vtk_license"));
        label_vtk_license->setWordWrap(true);

        gridLayout_2->addWidget(label_vtk_license, 3, 2, 1, 1);

        label_32 = new QLabel(scrollAreaWidgetContents);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setTextFormat(Qt::RichText);
        label_32->setWordWrap(true);

        gridLayout_2->addWidget(label_32, 0, 0, 1, 1);

        label_realsense_license = new QLabel(scrollAreaWidgetContents);
        label_realsense_license->setObjectName(QString::fromUtf8("label_realsense_license"));
        label_realsense_license->setWordWrap(true);

        gridLayout_2->addWidget(label_realsense_license, 8, 2, 1, 1);

        label_cputsdf_license = new QLabel(scrollAreaWidgetContents);
        label_cputsdf_license->setObjectName(QString::fromUtf8("label_cputsdf_license"));
        label_cputsdf_license->setWordWrap(true);

        gridLayout_2->addWidget(label_cputsdf_license, 19, 2, 1, 1);

        label_dvo_license = new QLabel(scrollAreaWidgetContents);
        label_dvo_license->setObjectName(QString::fromUtf8("label_dvo_license"));
        label_dvo_license->setWordWrap(true);

        gridLayout_2->addWidget(label_dvo_license, 23, 2, 1, 1);

        label_toro_license = new QLabel(scrollAreaWidgetContents);
        label_toro_license->setObjectName(QString::fromUtf8("label_toro_license"));
        label_toro_license->setWordWrap(true);

        gridLayout_2->addWidget(label_toro_license, 13, 2, 1, 1);

        label_13 = new QLabel(scrollAreaWidgetContents);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setWordWrap(true);

        gridLayout_2->addWidget(label_13, 6, 0, 1, 1);

        label_toro = new QLabel(scrollAreaWidgetContents);
        label_toro->setObjectName(QString::fromUtf8("label_toro"));
        label_toro->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_toro->setWordWrap(true);

        gridLayout_2->addWidget(label_toro, 13, 1, 1, 1);

        label_27 = new QLabel(scrollAreaWidgetContents);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setWordWrap(true);

        gridLayout_2->addWidget(label_27, 23, 0, 1, 1);

        label_qt_license = new QLabel(scrollAreaWidgetContents);
        label_qt_license->setObjectName(QString::fromUtf8("label_qt_license"));
        label_qt_license->setWordWrap(true);

        gridLayout_2->addWidget(label_qt_license, 4, 2, 1, 1);

        label_g2o_license = new QLabel(scrollAreaWidgetContents);
        label_g2o_license->setObjectName(QString::fromUtf8("label_g2o_license"));
        label_g2o_license->setWordWrap(true);

        gridLayout_2->addWidget(label_g2o_license, 14, 2, 1, 1);

        label_gtsam_license = new QLabel(scrollAreaWidgetContents);
        label_gtsam_license->setObjectName(QString::fromUtf8("label_gtsam_license"));
        label_gtsam_license->setWordWrap(true);

        gridLayout_2->addWidget(label_gtsam_license, 15, 2, 1, 1);

        label_viso2 = new QLabel(scrollAreaWidgetContents);
        label_viso2->setObjectName(QString::fromUtf8("label_viso2"));
        label_viso2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_viso2->setWordWrap(true);

        gridLayout_2->addWidget(label_viso2, 22, 1, 1, 1);

        label_cvsba_license = new QLabel(scrollAreaWidgetContents);
        label_cvsba_license->setObjectName(QString::fromUtf8("label_cvsba_license"));
        label_cvsba_license->setWordWrap(true);

        gridLayout_2->addWidget(label_cvsba_license, 16, 2, 1, 1);

        label_qt_version = new QLabel(scrollAreaWidgetContents);
        label_qt_version->setObjectName(QString::fromUtf8("label_qt_version"));
        label_qt_version->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_qt_version->setWordWrap(true);

        gridLayout_2->addWidget(label_qt_version, 4, 1, 1, 1);

        label_orbslam2_license = new QLabel(scrollAreaWidgetContents);
        label_orbslam2_license->setObjectName(QString::fromUtf8("label_orbslam2_license"));
        label_orbslam2_license->setWordWrap(true);

        gridLayout_2->addWidget(label_orbslam2_license, 24, 2, 1, 1);

        label_libpointmatcher_license = new QLabel(scrollAreaWidgetContents);
        label_libpointmatcher_license->setObjectName(QString::fromUtf8("label_libpointmatcher_license"));
        label_libpointmatcher_license->setWordWrap(true);

        gridLayout_2->addWidget(label_libpointmatcher_license, 17, 2, 1, 1);

        label_29 = new QLabel(scrollAreaWidgetContents);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setWordWrap(true);

        gridLayout_2->addWidget(label_29, 17, 0, 1, 1);

        label_libpointmatcher = new QLabel(scrollAreaWidgetContents);
        label_libpointmatcher->setObjectName(QString::fromUtf8("label_libpointmatcher"));
        label_libpointmatcher->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_libpointmatcher->setWordWrap(true);

        gridLayout_2->addWidget(label_libpointmatcher, 17, 1, 1, 1);

        label_30 = new QLabel(scrollAreaWidgetContents);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setWordWrap(true);

        gridLayout_2->addWidget(label_30, 20, 0, 1, 1);

        label_openchisel = new QLabel(scrollAreaWidgetContents);
        label_openchisel->setObjectName(QString::fromUtf8("label_openchisel"));
        label_openchisel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_openchisel->setWordWrap(true);

        gridLayout_2->addWidget(label_openchisel, 20, 1, 1, 1);

        label_33 = new QLabel(scrollAreaWidgetContents);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setWordWrap(true);

        gridLayout_2->addWidget(label_33, 9, 0, 1, 1);

        label_36 = new QLabel(scrollAreaWidgetContents);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setWordWrap(true);

        gridLayout_2->addWidget(label_36, 26, 0, 1, 1);

        label_loam = new QLabel(scrollAreaWidgetContents);
        label_loam->setObjectName(QString::fromUtf8("label_loam"));
        label_loam->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_loam->setWordWrap(true);

        gridLayout_2->addWidget(label_loam, 26, 1, 1, 1);

        label_okvis_license = new QLabel(scrollAreaWidgetContents);
        label_okvis_license->setObjectName(QString::fromUtf8("label_okvis_license"));
        label_okvis_license->setWordWrap(true);

        gridLayout_2->addWidget(label_okvis_license, 25, 2, 1, 1);

        label_msckf_license = new QLabel(scrollAreaWidgetContents);
        label_msckf_license->setObjectName(QString::fromUtf8("label_msckf_license"));
        label_msckf_license->setWordWrap(true);

        gridLayout_2->addWidget(label_msckf_license, 27, 2, 1, 1);

        label_loam_license = new QLabel(scrollAreaWidgetContents);
        label_loam_license->setObjectName(QString::fromUtf8("label_loam_license"));
        label_loam_license->setWordWrap(true);

        gridLayout_2->addWidget(label_loam_license, 26, 2, 1, 1);

        gridLayout_2->setColumnStretch(2, 1);

        verticalLayout_2->addLayout(gridLayout_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        verticalSpacer_3 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/IntRoLabSmall.png")));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);


        horizontalLayout->addWidget(frame);


        verticalLayout_3->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(aboutDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(aboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), aboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), aboutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(aboutDialog);
    } // setupUi

    void retranslateUi(QDialog *aboutDialog)
    {
        aboutDialog->setWindowTitle(QApplication::translate("aboutDialog", "About RTAB-Map", 0, QApplication::UnicodeUTF8));
        label_10->setText(QString());
        label->setText(QApplication::translate("aboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:600;\">RTAB-Map : Real-Time Appearance-Based Mapping</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("aboutDialog", "RTAB-Map (Real-Time Appearance-Based Mapping) is a RGB-D Graph-Based SLAM approach based on an incremental appearance-based loop closure detector. RTAB-Map can be used alone with a hand-held Kinect or stereo camera for 6DoF RGB-D mapping, or on a ROS compatible robot equipped with a laser rangefinder for 3DoF mapping.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("aboutDialog", "Author :", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("aboutDialog", "Mathieu Labb\303\251, matlabbe@gmail.com", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("aboutDialog", "Links :", 0, QApplication::UnicodeUTF8));
        label_HomePage_2->setText(QApplication::translate("aboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://github.com/introlab/rtabmap\"><span style=\" text-decoration: underline; color:#0000ff;\">Source page</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_HomePage_3->setText(QApplication::translate("aboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://introlab.github.io/rtabmap\"><span style=\" text-decoration: underline; color:#0000ff;\">Home page</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("aboutDialog", "Version :", 0, QApplication::UnicodeUTF8));
        label_version->setText(QString());
        label_realsense2_license->setText(QApplication::translate("aboutDialog", "Apache-2", 0, QApplication::UnicodeUTF8));
        label_realsense2->setText(QString());
        label_okvis->setText(QString());
        label_35->setText(QApplication::translate("aboutDialog", "With OKVIS :", 0, QApplication::UnicodeUTF8));
        label_msckf->setText(QString());
        label_34->setText(QApplication::translate("aboutDialog", "With MSCKF :", 0, QApplication::UnicodeUTF8));
        label_dvo->setText(QString());
        label_octomap->setText(QString());
        label_pcl_license->setText(QApplication::translate("aboutDialog", "BSD", 0, QApplication::UnicodeUTF8));
        label_pcl_version->setText(QString());
        label_23->setText(QApplication::translate("aboutDialog", "VTK version :", 0, QApplication::UnicodeUTF8));
        label_openni2->setText(QString());
        label_15->setText(QApplication::translate("aboutDialog", "With Freenect2 :", 0, QApplication::UnicodeUTF8));
        label_flycapture2->setText(QString());
        label_79->setText(QApplication::translate("aboutDialog", "Qt version :", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("aboutDialog", "OpenCV version :", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("aboutDialog", "With CPU-TSDF :", 0, QApplication::UnicodeUTF8));
        label_cputsdf->setText(QString());
        label_25->setText(QApplication::translate("aboutDialog", "With FOVIS :", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("aboutDialog", "PCL version :", 0, QApplication::UnicodeUTF8));
        label_octomap_license->setText(QApplication::translate("aboutDialog", "BSD", 0, QApplication::UnicodeUTF8));
        label_fovis_license->setText(QApplication::translate("aboutDialog", "GPLv2", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("aboutDialog", "With Octomap :", 0, QApplication::UnicodeUTF8));
        label_viso2_license->setText(QApplication::translate("aboutDialog", "GPLv3", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("aboutDialog", "With ORB SLAM 2 :", 0, QApplication::UnicodeUTF8));
        label_orbslam2->setText(QString());
        label_21->setText(QApplication::translate("aboutDialog", "With stereo Zed :", 0, QApplication::UnicodeUTF8));
        label_zed->setText(QString());
        label_dc1394_license->setText(QApplication::translate("aboutDialog", "LGPL", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("aboutDialog", "With stereo FlyCapture2 :", 0, QApplication::UnicodeUTF8));
        label_fovis->setText(QString());
        label_77->setText(QApplication::translate("aboutDialog", "With TORO :", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("aboutDialog", "With Viso2 :", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("aboutDialog", "With g2o :", 0, QApplication::UnicodeUTF8));
        label_g2o->setText(QString());
        label_18->setText(QApplication::translate("aboutDialog", "With cvsba :", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("aboutDialog", "With GTSAM :", 0, QApplication::UnicodeUTF8));
        label_gtsam->setText(QString());
        label_12->setText(QApplication::translate("aboutDialog", "With Freenect :", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("aboutDialog", "With stereo dc1394 :", 0, QApplication::UnicodeUTF8));
        label_cvsba->setText(QString());
        label_22->setText(QApplication::translate("aboutDialog", "With RealSense :", 0, QApplication::UnicodeUTF8));
        label_opencv_version->setText(QString());
        label_dc1394->setText(QString());
        label_opencv_license->setText(QApplication::translate("aboutDialog", "BSD", 0, QApplication::UnicodeUTF8));
        label_vtk_version->setText(QString());
        label_freenect2->setText(QString());
        label_freenect2_license->setText(QApplication::translate("aboutDialog", "Apache v2 and/or GPLv2", 0, QApplication::UnicodeUTF8));
        label_realsense->setText(QString());
        label_openni2_license->setText(QApplication::translate("aboutDialog", "Apache v2", 0, QApplication::UnicodeUTF8));
        label_freenect->setText(QString());
        label_freenect_license->setText(QApplication::translate("aboutDialog", "Apache v2 and/or GPLv2", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("aboutDialog", "<html><head/><body><p><span style=\" font-weight:600;\">License</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_vtk_license->setText(QApplication::translate("aboutDialog", "BSD", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("aboutDialog", "<html><head/><body><p><span style=\" font-weight:600;\">Third Party Libraries</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_realsense_license->setText(QApplication::translate("aboutDialog", "Apache-2", 0, QApplication::UnicodeUTF8));
        label_cputsdf_license->setText(QApplication::translate("aboutDialog", "BSD", 0, QApplication::UnicodeUTF8));
        label_dvo_license->setText(QApplication::translate("aboutDialog", "GPLv3", 0, QApplication::UnicodeUTF8));
        label_toro_license->setText(QApplication::translate("aboutDialog", "Creative Commons [Attribution-NonCommercial-ShareAlike]", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("aboutDialog", "With OpenNI2 :", 0, QApplication::UnicodeUTF8));
        label_toro->setText(QString());
        label_27->setText(QApplication::translate("aboutDialog", "With DVO :", 0, QApplication::UnicodeUTF8));
        label_qt_license->setText(QApplication::translate("aboutDialog", "Open Source or Commercial", 0, QApplication::UnicodeUTF8));
        label_g2o_license->setText(QApplication::translate("aboutDialog", "BSD", 0, QApplication::UnicodeUTF8));
        label_gtsam_license->setText(QApplication::translate("aboutDialog", "BSD", 0, QApplication::UnicodeUTF8));
        label_viso2->setText(QString());
        label_cvsba_license->setText(QApplication::translate("aboutDialog", "GPLv2", 0, QApplication::UnicodeUTF8));
        label_qt_version->setText(QString());
        label_orbslam2_license->setText(QApplication::translate("aboutDialog", "GPLv3", 0, QApplication::UnicodeUTF8));
        label_libpointmatcher_license->setText(QApplication::translate("aboutDialog", "BSD", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("aboutDialog", "With libpointmatcher :", 0, QApplication::UnicodeUTF8));
        label_libpointmatcher->setText(QString());
        label_30->setText(QApplication::translate("aboutDialog", "With OpenChisel :", 0, QApplication::UnicodeUTF8));
        label_openchisel->setText(QString());
        label_33->setText(QApplication::translate("aboutDialog", "With RealSense2 :", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("aboutDialog", "With loam_velodyne :", 0, QApplication::UnicodeUTF8));
        label_loam->setText(QString());
        label_okvis_license->setText(QApplication::translate("aboutDialog", "BSD", 0, QApplication::UnicodeUTF8));
        label_msckf_license->setText(QApplication::translate("aboutDialog", "Penn Software License", 0, QApplication::UnicodeUTF8));
        label_loam_license->setText(QApplication::translate("aboutDialog", "BSD", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        label_5->setText(QApplication::translate("aboutDialog", "Copyright (C) 2010-2018 IntRoLab - Universit\303\251 de Sherbrooke", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class aboutDialog: public Ui_aboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
