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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_GATHERRULESUMMARY_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_GATHERRULESUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/AllocationRuleExpression.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 归集规则列表
                */
                class GatherRuleSummary : public AbstractModel
                {
                public:
                    GatherRuleSummary();
                    ~GatherRuleSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分账规则表达式
                     * @return RuleDetail 分账规则表达式
                     * 
                     */
                    AllocationRuleExpression GetRuleDetail() const;

                    /**
                     * 设置分账规则表达式
                     * @param _ruleDetail 分账规则表达式
                     * 
                     */
                    void SetRuleDetail(const AllocationRuleExpression& _ruleDetail);

                    /**
                     * 判断参数 RuleDetail 是否已赋值
                     * @return RuleDetail 是否已赋值
                     * 
                     */
                    bool RuleDetailHasBeenSet() const;

                private:

                    /**
                     * 分账规则表达式
                     */
                    AllocationRuleExpression m_ruleDetail;
                    bool m_ruleDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_GATHERRULESUMMARY_H_
