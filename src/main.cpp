#include "ros/ros.h"

int main(int argc, char **argv)
{

	ros::init(argc, argv, "common_srv");
	ros::NodeHandle nh;
    	ros::Rate loop_rate(100);

	ros::ServiseClient _srv_client = nh.serviceClient<common_srv::get_int> ("common_srv/get_int");
	ROS_INFO("Ready to service.");
  	ros::spin();
 	return 0;
}
