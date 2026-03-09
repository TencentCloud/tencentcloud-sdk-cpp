/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_TRAFFICGRAY_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_TRAFFICGRAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 泳道流量灰度规则
                */
                class TrafficGray : public AbstractModel
                {
                public:
                    TrafficGray();
                    ~TrafficGray() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流量灰度规则，按比例灰度或预热方式
                     * @return Mode 流量灰度规则，按比例灰度或预热方式
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置流量灰度规则，按比例灰度或预热方式
                     * @param _mode 流量灰度规则，按比例灰度或预热方式
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取按比例灰度的百分比值1-100
                     * @return Percent 按比例灰度的百分比值1-100
                     * 
                     */
                    int64_t GetPercent() const;

                    /**
                     * 设置按比例灰度的百分比值1-100
                     * @param _percent 按比例灰度的百分比值1-100
                     * 
                     */
                    void SetPercent(const int64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取预热的间隔
                     * @return IntervalSecond 预热的间隔
                     * 
                     */
                    int64_t GetIntervalSecond() const;

                    /**
                     * 设置预热的间隔
                     * @param _intervalSecond 预热的间隔
                     * 
                     */
                    void SetIntervalSecond(const int64_t& _intervalSecond);

                    /**
                     * 判断参数 IntervalSecond 是否已赋值
                     * @return IntervalSecond 是否已赋值
                     * 
                     */
                    bool IntervalSecondHasBeenSet() const;

                    /**
                     * 获取预热的曲度
                     * @return Curvature 预热的曲度
                     * 
                     */
                    int64_t GetCurvature() const;

                    /**
                     * 设置预热的曲度
                     * @param _curvature 预热的曲度
                     * 
                     */
                    void SetCurvature(const int64_t& _curvature);

                    /**
                     * 判断参数 Curvature 是否已赋值
                     * @return Curvature 是否已赋值
                     * 
                     */
                    bool CurvatureHasBeenSet() const;

                private:

                    /**
                     * 流量灰度规则，按比例灰度或预热方式
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 按比例灰度的百分比值1-100
                     */
                    int64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 预热的间隔
                     */
                    int64_t m_intervalSecond;
                    bool m_intervalSecondHasBeenSet;

                    /**
                     * 预热的曲度
                     */
                    int64_t m_curvature;
                    bool m_curvatureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_TRAFFICGRAY_H_
