
 int Astar:: search(Eigen::Vector3d start_pt, Eigen::Vector3d end_pt, bool dynamic = false,
             double time_start = -1.0);

path_node_pool_[i];


expanded_nodes_

open_set_

}



//疑问//


 /* collision free */

double dist = edt_environment_->evaluateCoarseEDT(pro_pos, -1.0);


void Astar::setEnvironment(const EDTEnvironment::Ptr& env) {
  this->edt_environment_ = env;
}
