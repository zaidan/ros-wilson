//
// Created by aluquot on 16.08.17.
//

#ifndef PROJECT_GRIDREASSIGNER_HPP
#define PROJECT_GRIDREASSIGNER_HPP

#include <ros/ros.h>
#include <geometry_msgs/Point.h>
#include "GridCell.hpp"

class GridReAssigner {
public:
    GridReAssigner(unsigned int cellHeight, unsigned int cellWidth);

    std::vector<GridCell> reassignGrid(double originCellHeight, double originCellWith, std::vector<geometry_msgs::Point> cells);

private:
    unsigned int cellHeight;
    unsigned int cellWidth;
};


#endif //PROJECT_GRIDREASSIGNER_HPP
