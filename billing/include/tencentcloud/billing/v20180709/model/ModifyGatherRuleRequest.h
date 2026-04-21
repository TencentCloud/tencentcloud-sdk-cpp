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
                     * 获取<p>所编辑归集规则ID</p>
                     * @return Id <p>所编辑归集规则ID</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>所编辑归集规则ID</p>
                     * @param _id <p>所编辑归集规则ID</p>
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
                     * 获取<p>所编辑分账规则详情</p>
                     * @return RuleDetail <p>所编辑分账规则详情</p>
                     * 
                     */
                    AllocationRuleExpression GetRuleDetail() const;

                    /**
                     * 设置<p>所编辑分账规则详情</p>
                     * @param _ruleDetail <p>所编辑分账规则详情</p>
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
                     * 获取<p>月份，不传默认当前月</p>
                     * @return Month <p>月份，不传默认当前月</p>
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置<p>月份，不传默认当前月</p>
                     * @param _month <p>月份，不传默认当前月</p>
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
                     * <p>所编辑归集规则ID</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>所编辑分账规则详情</p>
                     */
                    AllocationRuleExpression m_ruleDetail;
                    bool m_ruleDetailHasBeenSet;

                    /**
                     * <p>月份，不传默认当前月</p>
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_MODIFYGATHERRULEREQUEST_H_
