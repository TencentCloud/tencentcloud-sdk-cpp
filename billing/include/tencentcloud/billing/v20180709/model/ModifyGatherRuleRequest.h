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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_MODIFYGATHERRULEREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_MODIFYGATHERRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyGatherRule请求参数结构体
                */
                class ModifyGatherRuleRequest : public AbstractModel
                {
                public:
                    ModifyGatherRuleRequest();
                    ~ModifyGatherRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取所编辑归集规则ID
                     * @return Id 所编辑归集规则ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置所编辑归集规则ID
                     * @param _id 所编辑归集规则ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取所编辑分账规则详情
                     * @return RuleDetail 所编辑分账规则详情
                     * 
                     */
                    AllocationRuleExpression GetRuleDetail() const;

                    /**
                     * 设置所编辑分账规则详情
                     * @param _ruleDetail 所编辑分账规则详情
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
                     * 获取月份，不传默认当前月
                     * @return Month 月份，不传默认当前月
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置月份，不传默认当前月
                     * @param _month 月份，不传默认当前月
                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                private:

                    /**
                     * 所编辑归集规则ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 所编辑分账规则详情
                     */
                    AllocationRuleExpression m_ruleDetail;
                    bool m_ruleDetailHasBeenSet;

                    /**
                     * 月份，不传默认当前月
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_MODIFYGATHERRULEREQUEST_H_
