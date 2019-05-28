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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBASEMETRICSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBASEMETRICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeBaseMetrics请求参数结构体
                */
                class DescribeBaseMetricsRequest : public AbstractModel
                {
                public:
                    DescribeBaseMetricsRequest();
                    ~DescribeBaseMetricsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务命名空间
                     * @return Namespace 业务命名空间
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置业务命名空间
                     * @param Namespace 业务命名空间
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取指标名
                     * @return MetricName 指标名
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名
                     * @param MetricName 指标名
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                private:

                    /**
                     * 业务命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 指标名
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBASEMETRICSREQUEST_H_
