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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENDRDATALEAKOUTALERTLISTRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENDRDATALEAKOUTALERTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/DataLeakOutAlertEvent.h>
#include <tencentcloud/cfw/v20190904/model/FieldOption.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeNDRDataLeakOutAlertList返回参数结构体
                */
                class DescribeNDRDataLeakOutAlertListResponse : public AbstractModel
                {
                public:
                    DescribeNDRDataLeakOutAlertListResponse();
                    ~DescribeNDRDataLeakOutAlertListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合查询条件的总条数
                     * @return Total 符合查询条件的总条数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取查询结果列表
                     * @return Data 查询结果列表
                     * 
                     */
                    std::vector<DataLeakOutAlertEvent> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取实例类型可选项
                     * @return InstanceTypeOptions 实例类型可选项
                     * 
                     */
                    std::vector<FieldOption> GetInstanceTypeOptions() const;

                    /**
                     * 判断参数 InstanceTypeOptions 是否已赋值
                     * @return InstanceTypeOptions 是否已赋值
                     * 
                     */
                    bool InstanceTypeOptionsHasBeenSet() const;

                    /**
                     * 获取地域可选项
                     * @return RegionOptions 地域可选项
                     * 
                     */
                    std::vector<FieldOption> GetRegionOptions() const;

                    /**
                     * 判断参数 RegionOptions 是否已赋值
                     * @return RegionOptions 是否已赋值
                     * 
                     */
                    bool RegionOptionsHasBeenSet() const;

                    /**
                     * 获取目标服务类型可选项
                     * @return DstServiceTypeOptions 目标服务类型可选项
                     * 
                     */
                    std::vector<FieldOption> GetDstServiceTypeOptions() const;

                    /**
                     * 判断参数 DstServiceTypeOptions 是否已赋值
                     * @return DstServiceTypeOptions 是否已赋值
                     * 
                     */
                    bool DstServiceTypeOptionsHasBeenSet() const;

                    /**
                     * 获取风险场景（类型）可选项
                     * @return RiskScenarioOptions 风险场景（类型）可选项
                     * 
                     */
                    std::vector<FieldOption> GetRiskScenarioOptions() const;

                    /**
                     * 判断参数 RiskScenarioOptions 是否已赋值
                     * @return RiskScenarioOptions 是否已赋值
                     * 
                     */
                    bool RiskScenarioOptionsHasBeenSet() const;

                    /**
                     * 获取AI分析任务状态可选项
                     * @return AnalysisStatusOptions AI分析任务状态可选项
                     * 
                     */
                    std::vector<FieldOption> GetAnalysisStatusOptions() const;

                    /**
                     * 判断参数 AnalysisStatusOptions 是否已赋值
                     * @return AnalysisStatusOptions 是否已赋值
                     * 
                     */
                    bool AnalysisStatusOptionsHasBeenSet() const;

                private:

                    /**
                     * 符合查询条件的总条数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 查询结果列表
                     */
                    std::vector<DataLeakOutAlertEvent> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 实例类型可选项
                     */
                    std::vector<FieldOption> m_instanceTypeOptions;
                    bool m_instanceTypeOptionsHasBeenSet;

                    /**
                     * 地域可选项
                     */
                    std::vector<FieldOption> m_regionOptions;
                    bool m_regionOptionsHasBeenSet;

                    /**
                     * 目标服务类型可选项
                     */
                    std::vector<FieldOption> m_dstServiceTypeOptions;
                    bool m_dstServiceTypeOptionsHasBeenSet;

                    /**
                     * 风险场景（类型）可选项
                     */
                    std::vector<FieldOption> m_riskScenarioOptions;
                    bool m_riskScenarioOptionsHasBeenSet;

                    /**
                     * AI分析任务状态可选项
                     */
                    std::vector<FieldOption> m_analysisStatusOptions;
                    bool m_analysisStatusOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENDRDATALEAKOUTALERTLISTRESPONSE_H_
