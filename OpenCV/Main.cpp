#include "opencv.h"

int main(int argc,char*argv[])
{
	//读取文件夹内的指定格式的所有文件
	//char filename[50];
	//for (int i=1;i<6;i++)
	//{
	//	sprintf(filename,"PicVideo/videoimg/video_%d_cr.jpg",i);
	//	printf("正在处理%s\n",filename);
	//	//要进行的处理
	//	color_cluster(filename,2);
	//	cvWaitKey(0);
	//}
	
	
	//char*videoname="PicVideo//test_o2.mp4";
	char*imagename="PicVideo//fruits.png";
		
	/*基础 */
    //rgb2hsv(imagename); //颜色空间转换
	//CalcVariance() ;//计算协方差矩阵
	//ReadSaveRGB();//读取图像的像素值并保存在txt文件中
    //visit_elem_Iplimage(imagename);
	
	
	/*视频读写 */
    //read_write_video(videoname,"out.wmv");
	//images2video();
	//read_video_info(argc,argv);

	
	/*人脸识别 */
	//face_detection(imagename);
	
	/*行人识别	 */
	//walker_detection(imagename);
	
	/*灰度图像二值化*/
	//mythreshold(imagename);
	
	/*角点检测*/
	//susan_corner_dete(imagename);
	//harris_corner_dete(imagename);
	//harris_corner_dete_improve(imagename);
	//fast_corner_dete(imagename);
	
	/*设置图像ROI*/
	//ROIimg(imagename);
	//roi_mat(); 
	
	/*颜色聚类*/
	//color_cluster(imagename,2);
	
	/*形态学操作*/
	//morphology(imagename); 
    //morphy();
	
	/*图像旋转*/
	//rotate_nearest_neibgour(imagename);

	/*透视矫正*/
	//rectify();
	
	/*通道分离和合并*/
	//channel_split_merge(imagename);

	/*特征学习*/
	//fast_feature(imagename);
	//sift_feature();
	//surf_feature();
	//surf_feature_opencv();未调通

	/*xml读写*/
	//xml_read_write();
	//Localtion areainfo={12,12,23,23};
	//opencv_xml_write(imagename,areainfo);

	/*访问和操作像素的值*/
	//visit_elem_Iplimage(imagename);
	//visit_elem_Mat(imagename);

	/*图像缩放（插值）*/
	//inter_value(imagename);

	getchar();

	return 0;

  
}