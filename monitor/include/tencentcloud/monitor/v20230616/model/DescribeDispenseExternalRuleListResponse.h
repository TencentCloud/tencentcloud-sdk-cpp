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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEDISPENSEEXTERNALRULELISTRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEDISPENSEEXTERNALRULELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/Rule.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * DescribeDispenseExternalRuleList返回参数结构体
                */
                class DescribeDispenseExternalRuleListResponse : public AbstractModel
                {
                public:
                    DescribeDispenseExternalRuleListResponse();
                    ~DescribeDispenseExternalRuleListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleList 指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Rule> GetRuleList() const;

                    /**
                     * 判断参数 RuleList 是否已赋值
                     * @return RuleList 是否已赋值
                     * 
                     */
                    bool RuleListHasBeenSet() const;

                    /**
                     * 获取列表大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 列表大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Rule> m_ruleList;
                    bool m_ruleListHasBeenSet;

                    /**
                     * 列表大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEDISPENSEEXTERNALRULELISTRESPONSE_H_
