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

#ifndef TENCENTCLOUD_EIS_V20210601_MODEL_GETRUNTIMERESOURCEMONITORMETRICMCRESPONSE_H_
#define TENCENTCLOUD_EIS_V20210601_MODEL_GETRUNTIMERESOURCEMONITORMETRICMCRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eis/v20210601/model/MetricValueMC.h>


namespace TencentCloud
{
    namespace Eis
    {
        namespace V20210601
        {
            namespace Model
            {
                /**
                * GetRuntimeResourceMonitorMetricMC返回参数结构体
                */
                class GetRuntimeResourceMonitorMetricMCResponse : public AbstractModel
                {
                public:
                    GetRuntimeResourceMonitorMetricMCResponse();
                    ~GetRuntimeResourceMonitorMetricMCResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取指标名称，K8sWorkloadCpuCoreUsed，K8sWorkloadMemUsageBytes，K8sWorkloadNetworkReceiveBytesBw，K8sWorkloadNetworkTransmitBytesBw
                     * @return MetricType 指标名称，K8sWorkloadCpuCoreUsed，K8sWorkloadMemUsageBytes，K8sWorkloadNetworkReceiveBytesBw，K8sWorkloadNetworkTransmitBytesBw
                     * 
                     */
                    std::string GetMetricType() const;

                    /**
                     * 判断参数 MetricType 是否已赋值
                     * @return MetricType 是否已赋值
                     * 
                     */
                    bool MetricTypeHasBeenSet() const;

                    /**
                     * 获取metric数值列表
                     * @return Values metric数值列表
                     * 
                     */
                    std::vector<MetricValueMC> GetValues() const;

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * 指标名称，K8sWorkloadCpuCoreUsed，K8sWorkloadMemUsageBytes，K8sWorkloadNetworkReceiveBytesBw，K8sWorkloadNetworkTransmitBytesBw
                     */
                    std::string m_metricType;
                    bool m_metricTypeHasBeenSet;

                    /**
                     * metric数值列表
                     */
                    std::vector<MetricValueMC> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIS_V20210601_MODEL_GETRUNTIMERESOURCEMONITORMETRICMCRESPONSE_H_
