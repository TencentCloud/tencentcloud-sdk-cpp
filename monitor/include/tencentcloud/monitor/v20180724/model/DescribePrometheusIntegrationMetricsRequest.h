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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSINTEGRATIONMETRICSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSINTEGRATIONMETRICSREQUEST_H_

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
                * DescribePrometheusIntegrationMetrics请求参数结构体
                */
                class DescribePrometheusIntegrationMetricsRequest : public AbstractModel
                {
                public:
                    DescribePrometheusIntegrationMetricsRequest();
                    ~DescribePrometheusIntegrationMetricsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集成类型标识。取值参考DescribePrometheusIntegrations接口返回中IntegrationSet[i].Code参数
                     * @return IntegrationCode 集成类型标识。取值参考DescribePrometheusIntegrations接口返回中IntegrationSet[i].Code参数
                     * 
                     */
                    std::string GetIntegrationCode() const;

                    /**
                     * 设置集成类型标识。取值参考DescribePrometheusIntegrations接口返回中IntegrationSet[i].Code参数
                     * @param _integrationCode 集成类型标识。取值参考DescribePrometheusIntegrations接口返回中IntegrationSet[i].Code参数
                     * 
                     */
                    void SetIntegrationCode(const std::string& _integrationCode);

                    /**
                     * 判断参数 IntegrationCode 是否已赋值
                     * @return IntegrationCode 是否已赋值
                     * 
                     */
                    bool IntegrationCodeHasBeenSet() const;

                private:

                    /**
                     * 集成类型标识。取值参考DescribePrometheusIntegrations接口返回中IntegrationSet[i].Code参数
                     */
                    std::string m_integrationCode;
                    bool m_integrationCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSINTEGRATIONMETRICSREQUEST_H_
