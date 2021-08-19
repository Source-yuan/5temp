  /* shot trajectory */
  vector<double> cubic(double a, double b, double c, double d);
  vector<double> quartic(double a, double b, double c, double d, double e);
  bool computeShotTraj(Eigen::VectorXd state1, Eigen::VectorXd state2,
                       double time_to_goal);

  double estimateHeuristic(Eigen::VectorXd x1, Eigen::VectorXd x2,
                           double& optimal_time);



int search(Eigen::Vector3d start_pt, Eigen::Vector3d start_vel,
             Eigen::Vector3d start_acc, Eigen::Vector3d end_pt,
             Eigen::Vector3d end_vel, bool init, bool dynamic = false,
             double time_start = -1.0);


 std::vector<Eigen::Vector3d> getKinoTraj(double delta_t);

 void getSamples(double& ts, vector<Eigen::Vector3d>& point_set,
                  vector<Eigen::Vector3d>& start_end_derivatives);


          if (edt_environment_->sdf_map_->getInflateOccupancy(pos) == 1 )
          {
            is_occ = true;
            break;
          }

          
  coef_shot_ = coef;
  t_shot_ = t_d;
  is_shot_succ_ = true;
  return true;
