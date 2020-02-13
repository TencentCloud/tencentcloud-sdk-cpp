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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DATAPOINT_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DATAPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * 时延等数据，数据点
                */
                class DataPoint : public AbstractModel
                {
                public:
                    DataPoint();
                    ~DataPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据点的时间
                     * @return LogTime 数据点的时间
                     */
                    std::string GetLogTime() const;

                    /**
                     * 设置数据点的时间
                     * @param LogTime 数据点的时间
                     */
                    void SetLogTime(const std::string& _logTime);

                    /**
                     * 判断参数 LogTime 是否已赋值
                     * @return LogTime 是否已赋值
                     */
                    bool LogTimeHasBeenSet() const;

                    /**
                     * 获取数据值
                     * @return MetricValue 数据值
                     */
                    double GetMetricValue() const;

                    /**
                     * 设置数据值
                     * @param MetricValue 数据值
                     */
                    void SetMetricValue(const double& _metricValue);

                    /**
                     * 判断参数 MetricValue 是否已赋值
                     * @return MetricValue 是否已赋值
                     */
                    bool MetricValueHasBeenSet() const;

                private:

                    /**
                     * 数据点的时间
                     */
                    std::string m_logTime;
                    bool m_logTimeHasBeenSet;

                    /**
                     * 数据值
                     */
                    double m_metricValue;
                    bool m_metricValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DATAPOINT_H_
