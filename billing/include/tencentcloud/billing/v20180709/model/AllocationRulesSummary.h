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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONRULESSUMMARY_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONRULESSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/AllocationRuleExpression.h>
#include <tencentcloud/billing/v20180709/model/AllocationRationExpression.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 公摊规则列表
                */
                class AllocationRulesSummary : public AbstractModel
                {
                public:
                    AllocationRulesSummary();
                    ~AllocationRulesSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取新增公摊规则名称
                     * @return Name 新增公摊规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置新增公摊规则名称
                     * @param _name 新增公摊规则名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取公摊策略类型，枚举值如下：
1 - 自定义分摊占比 
2 - 等比分摊
3 - 按占比分摊
                     * @return Type 公摊策略类型，枚举值如下：
1 - 自定义分摊占比 
2 - 等比分摊
3 - 按占比分摊
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置公摊策略类型，枚举值如下：
1 - 自定义分摊占比 
2 - 等比分摊
3 - 按占比分摊
                     * @param _type 公摊策略类型，枚举值如下：
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
                     * 获取公摊规则表达式
                     * @return RuleDetail 公摊规则表达式
                     * 
                     */
                    AllocationRuleExpression GetRuleDetail() const;

                    /**
                     * 设置公摊规则表达式
                     * @param _ruleDetail 公摊规则表达式
                     * 
                     */
                    void SetRuleDetail(const AllocationRuleExpression& _ruleDetail);

                    /**
                     * 判断参数 RuleDetail 是否已赋值
                     * @return RuleDetail 是否已赋值
                     * 
                     */
                    bool RuleDetailHasBeenSet() const;

                    /**
                     * 获取公摊比例表达式，按占比分摊不传
                     * @return RatioDetail 公摊比例表达式，按占比分摊不传
                     * 
                     */
                    std::vector<AllocationRationExpression> GetRatioDetail() const;

                    /**
                     * 设置公摊比例表达式，按占比分摊不传
                     * @param _ratioDetail 公摊比例表达式，按占比分摊不传
                     * 
                     */
                    void SetRatioDetail(const std::vector<AllocationRationExpression>& _ratioDetail);

                    /**
                     * 判断参数 RatioDetail 是否已赋值
                     * @return RatioDetail 是否已赋值
                     * 
                     */
                    bool RatioDetailHasBeenSet() const;

                private:

                    /**
                     * 新增公摊规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 公摊策略类型，枚举值如下：
1 - 自定义分摊占比 
2 - 等比分摊
3 - 按占比分摊
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 公摊规则表达式
                     */
                    AllocationRuleExpression m_ruleDetail;
                    bool m_ruleDetailHasBeenSet;

                    /**
                     * 公摊比例表达式，按占比分摊不传
                     */
                    std::vector<AllocationRationExpression> m_ratioDetail;
                    bool m_ratioDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONRULESSUMMARY_H_
