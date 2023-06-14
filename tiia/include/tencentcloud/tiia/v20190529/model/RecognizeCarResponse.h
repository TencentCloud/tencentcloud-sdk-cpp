/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_RECOGNIZECARRESPONSE_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_RECOGNIZECARRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiia/v20190529/model/Coord.h>
#include <tencentcloud/tiia/v20190529/model/CarTagItem.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * RecognizeCar返回参数结构体
                */
                class RecognizeCarResponse : public AbstractModel
                {
                public:
                    RecognizeCarResponse();
                    ~RecognizeCarResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取汽车的四个矩形顶点坐标，如果图片中存在多辆车，则输出最大车辆的坐标。
                     * @return CarCoords 汽车的四个矩形顶点坐标，如果图片中存在多辆车，则输出最大车辆的坐标。
                     * 
                     */
                    std::vector<Coord> GetCarCoords() const;

                    /**
                     * 判断参数 CarCoords 是否已赋值
                     * @return CarCoords 是否已赋值
                     * 
                     */
                    bool CarCoordsHasBeenSet() const;

                    /**
                     * 获取车辆属性识别的结果数组，如果识别到多辆车，则会输出每辆车的top1结果。
                     * @return CarTags 车辆属性识别的结果数组，如果识别到多辆车，则会输出每辆车的top1结果。
                     * 
                     */
                    std::vector<CarTagItem> GetCarTags() const;

                    /**
                     * 判断参数 CarTags 是否已赋值
                     * @return CarTags 是否已赋值
                     * 
                     */
                    bool CarTagsHasBeenSet() const;

                private:

                    /**
                     * 汽车的四个矩形顶点坐标，如果图片中存在多辆车，则输出最大车辆的坐标。
                     */
                    std::vector<Coord> m_carCoords;
                    bool m_carCoordsHasBeenSet;

                    /**
                     * 车辆属性识别的结果数组，如果识别到多辆车，则会输出每辆车的top1结果。
                     */
                    std::vector<CarTagItem> m_carTags;
                    bool m_carTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_RECOGNIZECARRESPONSE_H_
