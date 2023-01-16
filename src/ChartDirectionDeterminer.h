//
// Created by Алексей Заузин on 14.01.2023.
//

#ifndef EXERCISE04_CHARTDIRECTIONDETERMINER_H
#define EXERCISE04_CHARTDIRECTIONDETERMINER_H

#include <vector>
#include "dto/ElementConcentrationPoint.h"

class ChartDirectionDeterminer {
    public:
        bool isChartGrowing(std::vector<ElementConcentrationPoint> A);
};


#endif //EXERCISE04_CHARTDIRECTIONDETERMINER_H
