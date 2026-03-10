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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBillSummary请求参数结构体
                */
                class DescribeBillSummaryRequest : public AbstractModel
                {
                public:
                    DescribeBillSummaryRequest();
                    ~DescribeBillSummaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>账单月份，格式为2023-04</p>
                     * @return Month <p>账单月份，格式为2023-04</p>
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置<p>账单月份，格式为2023-04</p>
                     * @param _month <p>账单月份，格式为2023-04</p>
                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                    /**
                     * 获取<p>账单维度类型，枚举值如下：business、project、region、payMode、tag</p>
                     * @return GroupType <p>账单维度类型，枚举值如下：business、project、region、payMode、tag</p>
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置<p>账单维度类型，枚举值如下：business、project、region、payMode、tag</p>
                     * @param _groupType <p>账单维度类型，枚举值如下：business、project、region、payMode、tag</p>
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取<p>标签键，GroupType=tag获取标签维度账单时传</p>
                     * @return TagKey <p>标签键，GroupType=tag获取标签维度账单时传</p>
                     * 
                     */
                    std::vector<std::string> GetTagKey() const;

                    /**
                     * 设置<p>标签键，GroupType=tag获取标签维度账单时传</p>
                     * @param _tagKey <p>标签键，GroupType=tag获取标签维度账单时传</p>
                     * 
                     */
                    void SetTagKey(const std::vector<std::string>& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取<p>操作者UIN：操作者账号 ID（预付费资源下单或后付费操作开通资源账号的 ID 或者角色 ID ）</p>
                     * @return OperateUin <p>操作者UIN：操作者账号 ID（预付费资源下单或后付费操作开通资源账号的 ID 或者角色 ID ）</p>
                     * 
                     */
                    std::string GetOperateUin() const;

                    /**
                     * 设置<p>操作者UIN：操作者账号 ID（预付费资源下单或后付费操作开通资源账号的 ID 或者角色 ID ）</p>
                     * @param _operateUin <p>操作者UIN：操作者账号 ID（预付费资源下单或后付费操作开通资源账号的 ID 或者角色 ID ）</p>
                     * 
                     */
                    void SetOperateUin(const std::string& _operateUin);

                    /**
                     * 判断参数 OperateUin 是否已赋值
                     * @return OperateUin 是否已赋值
                     * 
                     */
                    bool OperateUinHasBeenSet() const;

                    /**
                     * 获取<p>支付者的账号 ID（账号 ID 是用户在腾讯云的唯一账号标识），默认查询本账号账单，如集团管理账号需查询成员账号自付的账单，该字段需入参成员账号UIN</p>
                     * @return PayerUin <p>支付者的账号 ID（账号 ID 是用户在腾讯云的唯一账号标识），默认查询本账号账单，如集团管理账号需查询成员账号自付的账单，该字段需入参成员账号UIN</p>
                     * 
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置<p>支付者的账号 ID（账号 ID 是用户在腾讯云的唯一账号标识），默认查询本账号账单，如集团管理账号需查询成员账号自付的账单，该字段需入参成员账号UIN</p>
                     * @param _payerUin <p>支付者的账号 ID（账号 ID 是用户在腾讯云的唯一账号标识），默认查询本账号账单，如集团管理账号需查询成员账号自付的账单，该字段需入参成员账号UIN</p>
                     * 
                     */
                    void SetPayerUin(const std::string& _payerUin);

                    /**
                     * 判断参数 PayerUin 是否已赋值
                     * @return PayerUin 是否已赋值
                     * 
                     */
                    bool PayerUinHasBeenSet() const;

                private:

                    /**
                     * <p>账单月份，格式为2023-04</p>
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * <p>账单维度类型，枚举值如下：business、project、region、payMode、tag</p>
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * <p>标签键，GroupType=tag获取标签维度账单时传</p>
                     */
                    std::vector<std::string> m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * <p>操作者UIN：操作者账号 ID（预付费资源下单或后付费操作开通资源账号的 ID 或者角色 ID ）</p>
                     */
                    std::string m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * <p>支付者的账号 ID（账号 ID 是用户在腾讯云的唯一账号标识），默认查询本账号账单，如集团管理账号需查询成员账号自付的账单，该字段需入参成员账号UIN</p>
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYREQUEST_H_
