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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALERTRULESRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALERTRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusRuleSet.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeAlertRules返回参数结构体
                */
                class DescribeAlertRulesResponse : public AbstractModel
                {
                public:
                    DescribeAlertRulesResponse();
                    ~DescribeAlertRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取报警规则数量
                     * @return TotalCount 报警规则数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取报警规则详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlertRuleSet 报警规则详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusRuleSet> GetAlertRuleSet() const;

                    /**
                     * 判断参数 AlertRuleSet 是否已赋值
                     * @return AlertRuleSet 是否已赋值
                     * 
                     */
                    bool AlertRuleSetHasBeenSet() const;

                private:

                    /**
                     * 报警规则数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 报警规则详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusRuleSet> m_alertRuleSet;
                    bool m_alertRuleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALERTRULESRESPONSE_H_
