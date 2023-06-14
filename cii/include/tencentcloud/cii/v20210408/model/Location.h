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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_LOCATION_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_LOCATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cii/v20210408/model/Point.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * 位置信息
                */
                class Location : public AbstractModel
                {
                public:
                    Location();
                    ~Location() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取位置信息
                     * @return Points 位置信息
                     * 
                     */
                    std::vector<Point> GetPoints() const;

                    /**
                     * 设置位置信息
                     * @param _points 位置信息
                     * 
                     */
                    void SetPoints(const std::vector<Point>& _points);

                    /**
                     * 判断参数 Points 是否已赋值
                     * @return Points 是否已赋值
                     * 
                     */
                    bool PointsHasBeenSet() const;

                private:

                    /**
                     * 位置信息
                     */
                    std::vector<Point> m_points;
                    bool m_pointsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_LOCATION_H_
