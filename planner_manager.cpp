class FastPlannerManager {
      /* main planning interface */
  bool kinodynamicReplan(Eigen::Vector3d start_pt, Eigen::Vector3d start_vel, Eigen::Vector3d start_acc,
                         Eigen::Vector3d end_pt, Eigen::Vector3d end_vel);
  bool planGlobalTraj(const Eigen::Vector3d& start_pos);
  bool topoReplan(bool collide);

  void planYaw(const Eigen::Vector3d& start_yaw);

  void initPlanModules(ros::NodeHandle& nh);



  void setGlobalWaypoints(vector<Eigen::Vector3d>& waypoints);
{plan_data_.global_waypoints_ = waypoints;}

planner_manager_->setGlobalWaypoints(global_wp);




  bool checkTrajCollision(double& distance);

}