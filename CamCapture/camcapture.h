#ifndef CAMCAPTURE_H
#define CAMCAPTURE_H

#include <QWidget>
#include <QDebug>
#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

QT_BEGIN_NAMESPACE
namespace Ui { class CamCapture; }
QT_END_NAMESPACE

class CamCapture : public QWidget
{
    Q_OBJECT

public:
    CamCapture(QWidget *parent = nullptr);
    ~CamCapture();
    void camView();
    void put_string(Mat &frame, string text, Point pt, int value);

private:
    Ui::CamCapture *ui;
};
#endif // CAMCAPTURE_H
