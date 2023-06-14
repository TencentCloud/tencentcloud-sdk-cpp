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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBASEMETRICSRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBASEMETRICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/MetricSet.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeBaseMetrics返回参数结构体
                */
                class DescribeBaseMetricsResponse : public AbstractModel
                {
                public:
                    DescribeBaseMetricsResponse();
                    ~DescribeBaseMetricsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询得到的指标描述列表
                     * @return MetricSet 查询得到的指标描述列表
                     * 
                     */
                    std::vector<MetricSet> GetMetricSet() const;

                    /**
                     * 判断参数 MetricSet 是否已赋值
                     * @return MetricSet 是否已赋值
                     * 
                     */
                    bool MetricSetHasBeenSet() const;

                private:

                    /**
                     * 查询得到的指标描述列表
                     */
                    std::vector<MetricSet> m_metricSet;
                    bool m_metricSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBASEMETRICSRESPONSE_H_
