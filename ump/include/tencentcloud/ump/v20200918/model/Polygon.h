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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_POLYGON_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_POLYGON_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ump/v20200918/model/Point.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * 多边形
                */
                class Polygon : public AbstractModel
                {
                public:
                    Polygon();
                    ~Polygon() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标注列表
                     * @return Points 标注列表
                     * 
                     */
                    std::vector<Point> GetPoints() const;

                    /**
                     * 设置标注列表
                     * @param _points 标注列表
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
                     * 标注列表
                     */
                    std::vector<Point> m_points;
                    bool m_pointsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_POLYGON_H_
