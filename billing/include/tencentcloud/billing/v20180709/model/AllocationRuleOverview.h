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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONRULEOVERVIEW_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONRULEOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/AllocationUnit.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 公摊规则概览
                */
                class AllocationRuleOverview : public AbstractModel
                {
                public:
                    AllocationRuleOverview();
                    ~AllocationRuleOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公摊规则ID
                     * @return RuleId 公摊规则ID
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置公摊规则ID
                     * @param _ruleId 公摊规则ID
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取公摊规则名称
                     * @return RuleName 公摊规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置公摊规则名称
                     * @param _ruleName 公摊规则名称
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取公摊策略类型
枚举值：
1 - 自定义分摊占比 
2 - 等比分摊 
3 - 按占比分摊
                     * @return Type 公摊策略类型
枚举值：
1 - 自定义分摊占比 
2 - 等比分摊 
3 - 按占比分摊
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置公摊策略类型
枚举值：
1 - 自定义分摊占比 
2 - 等比分摊 
3 - 按占比分摊
                     * @param _type 公摊策略类型
枚举值：
1 - 自定义分摊占比 
2 - 等比分摊 
3 - 按占比分摊
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取公摊规则最后更新时间
                     * @return UpdateTime 公摊规则最后更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置公摊规则最后更新时间
                     * @param _updateTime 公摊规则最后更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取分账单元概览
                     * @return AllocationNode 分账单元概览
                     * 
                     */
                    std::vector<AllocationUnit> GetAllocationNode() const;

                    /**
                     * 设置分账单元概览
                     * @param _allocationNode 分账单元概览
                     * 
                     */
                    void SetAllocationNode(const std::vector<AllocationUnit>& _allocationNode);

                    /**
                     * 判断参数 AllocationNode 是否已赋值
                     * @return AllocationNode 是否已赋值
                     * 
                     */
                    bool AllocationNodeHasBeenSet() const;

                private:

                    /**
                     * 公摊规则ID
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 公摊规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 公摊策略类型
枚举值：
1 - 自定义分摊占比 
2 - 等比分摊 
3 - 按占比分摊
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 公摊规则最后更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 分账单元概览
                     */
                    std::vector<AllocationUnit> m_allocationNode;
                    bool m_allocationNodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONRULEOVERVIEW_H_
