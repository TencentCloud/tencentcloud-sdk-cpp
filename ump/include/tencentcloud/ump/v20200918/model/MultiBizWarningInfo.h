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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_MULTIBIZWARNINGINFO_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_MULTIBIZWARNINGINFO_H_

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
                * 多经点位告警信息
                */
                class MultiBizWarningInfo : public AbstractModel
                {
                public:
                    MultiBizWarningInfo();
                    ~MultiBizWarningInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警类型：
0: 无变化
1: 侵占
2: 消失
                     * @return WarningType 告警类型：
0: 无变化
1: 侵占
2: 消失
                     * 
                     */
                    int64_t GetWarningType() const;

                    /**
                     * 设置告警类型：
0: 无变化
1: 侵占
2: 消失
                     * @param _warningType 告警类型：
0: 无变化
1: 侵占
2: 消失
                     * 
                     */
                    void SetWarningType(const int64_t& _warningType);

                    /**
                     * 判断参数 WarningType 是否已赋值
                     * @return WarningType 是否已赋值
                     * 
                     */
                    bool WarningTypeHasBeenSet() const;

                    /**
                     * 获取告警侵占或消失面积
                     * @return WarningAreaSize 告警侵占或消失面积
                     * 
                     */
                    double GetWarningAreaSize() const;

                    /**
                     * 设置告警侵占或消失面积
                     * @param _warningAreaSize 告警侵占或消失面积
                     * 
                     */
                    void SetWarningAreaSize(const double& _warningAreaSize);

                    /**
                     * 判断参数 WarningAreaSize 是否已赋值
                     * @return WarningAreaSize 是否已赋值
                     * 
                     */
                    bool WarningAreaSizeHasBeenSet() const;

                    /**
                     * 获取告警侵占或消失坐标
                     * @return WarningLocation 告警侵占或消失坐标
                     * 
                     */
                    Point GetWarningLocation() const;

                    /**
                     * 设置告警侵占或消失坐标
                     * @param _warningLocation 告警侵占或消失坐标
                     * 
                     */
                    void SetWarningLocation(const Point& _warningLocation);

                    /**
                     * 判断参数 WarningLocation 是否已赋值
                     * @return WarningLocation 是否已赋值
                     * 
                     */
                    bool WarningLocationHasBeenSet() const;

                    /**
                     * 获取告警侵占或消失轮廓
                     * @return WarningAreaContour 告警侵占或消失轮廓
                     * 
                     */
                    std::vector<Point> GetWarningAreaContour() const;

                    /**
                     * 设置告警侵占或消失轮廓
                     * @param _warningAreaContour 告警侵占或消失轮廓
                     * 
                     */
                    void SetWarningAreaContour(const std::vector<Point>& _warningAreaContour);

                    /**
                     * 判断参数 WarningAreaContour 是否已赋值
                     * @return WarningAreaContour 是否已赋值
                     * 
                     */
                    bool WarningAreaContourHasBeenSet() const;

                private:

                    /**
                     * 告警类型：
0: 无变化
1: 侵占
2: 消失
                     */
                    int64_t m_warningType;
                    bool m_warningTypeHasBeenSet;

                    /**
                     * 告警侵占或消失面积
                     */
                    double m_warningAreaSize;
                    bool m_warningAreaSizeHasBeenSet;

                    /**
                     * 告警侵占或消失坐标
                     */
                    Point m_warningLocation;
                    bool m_warningLocationHasBeenSet;

                    /**
                     * 告警侵占或消失轮廓
                     */
                    std::vector<Point> m_warningAreaContour;
                    bool m_warningAreaContourHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_MULTIBIZWARNINGINFO_H_
