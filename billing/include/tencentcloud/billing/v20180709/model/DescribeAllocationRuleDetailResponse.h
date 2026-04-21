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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONRULEDETAILRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONRULEDETAILRESPONSE_H_

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
                * DescribeAllocationRuleDetail返回参数结构体
                */
                class DescribeAllocationRuleDetailResponse : public AbstractModel
                {
                public:
                    DescribeAllocationRuleDetailResponse();
                    ~DescribeAllocationRuleDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>公摊规则ID</p>
                     * @return Id <p>公摊规则ID</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>公摊规则所属UIN</p>
                     * @return Uin <p>公摊规则所属UIN</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>公摊规则名称</p>
                     * @return Name <p>公摊规则名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>公摊策略类型，枚举值如下：<br>1 - 自定义分摊占比<br>2 - 等比分摊<br>3 - 按占比分摊</p>
                     * @return Type <p>公摊策略类型，枚举值如下：<br>1 - 自定义分摊占比<br>2 - 等比分摊<br>3 - 按占比分摊</p>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>公摊规则表达式</p>
                     * @return RuleDetail <p>公摊规则表达式</p>
                     * 
                     */
                    AllocationRuleExpression GetRuleDetail() const;

                    /**
                     * 判断参数 RuleDetail 是否已赋值
                     * @return RuleDetail 是否已赋值
                     * 
                     */
                    bool RuleDetailHasBeenSet() const;

                    /**
                     * 获取<p>公摊比例表达式，Type为1和2时返回</p>
                     * @return RatioDetail <p>公摊比例表达式，Type为1和2时返回</p>
                     * 
                     */
                    std::vector<AllocationRationExpression> GetRatioDetail() const;

                    /**
                     * 判断参数 RatioDetail 是否已赋值
                     * @return RatioDetail 是否已赋值
                     * 
                     */
                    bool RatioDetailHasBeenSet() const;

                private:

                    /**
                     * <p>公摊规则ID</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>公摊规则所属UIN</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>公摊规则名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>公摊策略类型，枚举值如下：<br>1 - 自定义分摊占比<br>2 - 等比分摊<br>3 - 按占比分摊</p>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>公摊规则表达式</p>
                     */
                    AllocationRuleExpression m_ruleDetail;
                    bool m_ruleDetailHasBeenSet;

                    /**
                     * <p>公摊比例表达式，Type为1和2时返回</p>
                     */
                    std::vector<AllocationRationExpression> m_ratioDetail;
                    bool m_ratioDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONRULEDETAILRESPONSE_H_
