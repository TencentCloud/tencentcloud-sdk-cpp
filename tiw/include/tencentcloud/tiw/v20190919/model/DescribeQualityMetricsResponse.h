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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEQUALITYMETRICSRESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEQUALITYMETRICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/TimeValue.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeQualityMetrics返回参数结构体
                */
                class DescribeQualityMetricsResponse : public AbstractModel
                {
                public:
                    DescribeQualityMetricsResponse();
                    ~DescribeQualityMetricsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取输入的查询指标
                     * @return Metric 输入的查询指标
                     */
                    std::string GetMetric() const;

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取时间序列
                     * @return Content 时间序列
                     */
                    std::vector<TimeValue> GetContent() const;

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 输入的查询指标
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 时间序列
                     */
                    std::vector<TimeValue> m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEQUALITYMETRICSRESPONSE_H_
