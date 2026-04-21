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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_MODIFYALLOCATIONRULEREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_MODIFYALLOCATIONRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyAllocationRule请求参数结构体
                */
                class ModifyAllocationRuleRequest : public AbstractModel
                {
                public:
                    ModifyAllocationRuleRequest();
                    ~ModifyAllocationRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>所编辑公摊规则ID</p>
                     * @return RuleId <p>所编辑公摊规则ID</p>
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置<p>所编辑公摊规则ID</p>
                     * @param _ruleId <p>所编辑公摊规则ID</p>
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
                     * 获取<p>编辑后公摊规则名称</p>
                     * @return Name <p>编辑后公摊规则名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>编辑后公摊规则名称</p>
                     * @param _name <p>编辑后公摊规则名称</p>
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
                     * 获取<p>公摊策略类型，枚举值如下： 1 - 自定义分摊占比 2 - 等比分摊 3 - 按占比分摊</p>
                     * @return Type <p>公摊策略类型，枚举值如下： 1 - 自定义分摊占比 2 - 等比分摊 3 - 按占比分摊</p>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>公摊策略类型，枚举值如下： 1 - 自定义分摊占比 2 - 等比分摊 3 - 按占比分摊</p>
                     * @param _type <p>公摊策略类型，枚举值如下： 1 - 自定义分摊占比 2 - 等比分摊 3 - 按占比分摊</p>
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
                     * 获取<p>编辑后公摊规则表达式</p>
                     * @return RuleDetail <p>编辑后公摊规则表达式</p>
                     * 
                     */
                    AllocationRuleExpression GetRuleDetail() const;

                    /**
                     * 设置<p>编辑后公摊规则表达式</p>
                     * @param _ruleDetail <p>编辑后公摊规则表达式</p>
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
                     * 获取<p>编辑后公摊比例表达式</p>
                     * @return RatioDetail <p>编辑后公摊比例表达式</p>
                     * 
                     */
                    std::vector<AllocationRationExpression> GetRatioDetail() const;

                    /**
                     * 设置<p>编辑后公摊比例表达式</p>
                     * @param _ratioDetail <p>编辑后公摊比例表达式</p>
                     * 
                     */
                    void SetRatioDetail(const std::vector<AllocationRationExpression>& _ratioDetail);

                    /**
                     * 判断参数 RatioDetail 是否已赋值
                     * @return RatioDetail 是否已赋值
                     * 
                     */
                    bool RatioDetailHasBeenSet() const;

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
                     * <p>所编辑公摊规则ID</p>
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>编辑后公摊规则名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>公摊策略类型，枚举值如下： 1 - 自定义分摊占比 2 - 等比分摊 3 - 按占比分摊</p>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>编辑后公摊规则表达式</p>
                     */
                    AllocationRuleExpression m_ruleDetail;
                    bool m_ruleDetailHasBeenSet;

                    /**
                     * <p>编辑后公摊比例表达式</p>
                     */
                    std::vector<AllocationRationExpression> m_ratioDetail;
                    bool m_ratioDetailHasBeenSet;

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

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_MODIFYALLOCATIONRULEREQUEST_H_
