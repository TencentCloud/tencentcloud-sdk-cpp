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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEMETRICOVERVIEWLISTRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEMETRICOVERVIEWLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/MetricOverview.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeMetricOverviewList返回参数结构体
                */
                class DescribeMetricOverviewListResponse : public AbstractModel
                {
                public:
                    DescribeMetricOverviewListResponse();
                    ~DescribeMetricOverviewListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>所有域 Overview 统一出参：KPI 卡片列表，key 字符串标识指标，客户端按 resource_type 解析；key 白名单参考 platform.common.v2.MetricOverview 注释</p>
                     * @return MetricList <p>所有域 Overview 统一出参：KPI 卡片列表，key 字符串标识指标，客户端按 resource_type 解析；key 白名单参考 platform.common.v2.MetricOverview 注释</p>
                     * 
                     */
                    std::vector<MetricOverview> GetMetricList() const;

                    /**
                     * 判断参数 MetricList 是否已赋值
                     * @return MetricList 是否已赋值
                     * 
                     */
                    bool MetricListHasBeenSet() const;

                    /**
                     * 获取<p>总记录数，等于 MetricList 长度，仅为列表接口一致性预留</p>
                     * @return TotalCount <p>总记录数，等于 MetricList 长度，仅为列表接口一致性预留</p>
                     * 
                     */
                    std::string GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>所有域 Overview 统一出参：KPI 卡片列表，key 字符串标识指标，客户端按 resource_type 解析；key 白名单参考 platform.common.v2.MetricOverview 注释</p>
                     */
                    std::vector<MetricOverview> m_metricList;
                    bool m_metricListHasBeenSet;

                    /**
                     * <p>总记录数，等于 MetricList 长度，仅为列表接口一致性预留</p>
                     */
                    std::string m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEMETRICOVERVIEWLISTRESPONSE_H_
