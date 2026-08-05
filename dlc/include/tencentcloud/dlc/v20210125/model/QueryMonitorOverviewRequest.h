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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_QUERYMONITOROVERVIEWREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_QUERYMONITOROVERVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * QueryMonitorOverview请求参数结构体
                */
                class QueryMonitorOverviewRequest : public AbstractModel
                {
                public:
                    QueryMonitorOverviewRequest();
                    ~QueryMonitorOverviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>图表类型列表（批量查询多个指标的当前值）</p>
                     * @return ChartTypes <p>图表类型列表（批量查询多个指标的当前值）</p>
                     * 
                     */
                    std::vector<std::string> GetChartTypes() const;

                    /**
                     * 设置<p>图表类型列表（批量查询多个指标的当前值）</p>
                     * @param _chartTypes <p>图表类型列表（批量查询多个指标的当前值）</p>
                     * 
                     */
                    void SetChartTypes(const std::vector<std::string>& _chartTypes);

                    /**
                     * 判断参数 ChartTypes 是否已赋值
                     * @return ChartTypes 是否已赋值
                     * 
                     */
                    bool ChartTypesHasBeenSet() const;

                    /**
                     * 获取<p>推理服务 ID（业务唯一标识）</p>
                     * @return ServiceId <p>推理服务 ID（业务唯一标识）</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>推理服务 ID（业务唯一标识）</p>
                     * @param _serviceId <p>推理服务 ID（业务唯一标识）</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                private:

                    /**
                     * <p>图表类型列表（批量查询多个指标的当前值）</p>
                     */
                    std::vector<std::string> m_chartTypes;
                    bool m_chartTypesHasBeenSet;

                    /**
                     * <p>推理服务 ID（业务唯一标识）</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_QUERYMONITOROVERVIEWREQUEST_H_
