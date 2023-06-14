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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_ORDERSUMMARYRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_ORDERSUMMARYRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 订单汇总结果
                */
                class OrderSummaryResult : public AbstractModel
                {
                public:
                    OrderSummaryResult();
                    ~OrderSummaryResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取汇总ID
                     * @return SummaryId 汇总ID
                     * 
                     */
                    std::string GetSummaryId() const;

                    /**
                     * 设置汇总ID
                     * @param _summaryId 汇总ID
                     * 
                     */
                    void SetSummaryId(const std::string& _summaryId);

                    /**
                     * 判断参数 SummaryId 是否已赋值
                     * @return SummaryId 是否已赋值
                     * 
                     */
                    bool SummaryIdHasBeenSet() const;

                    /**
                     * 获取收款账户ID
                     * @return PayeeId 收款账户ID
                     * 
                     */
                    std::string GetPayeeId() const;

                    /**
                     * 设置收款账户ID
                     * @param _payeeId 收款账户ID
                     * 
                     */
                    void SetPayeeId(const std::string& _payeeId);

                    /**
                     * 判断参数 PayeeId 是否已赋值
                     * @return PayeeId 是否已赋值
                     * 
                     */
                    bool PayeeIdHasBeenSet() const;

                    /**
                     * 获取收款账户名称
                     * @return Name 收款账户名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置收款账户名称
                     * @param _name 收款账户名称
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
                     * 获取收入类型
                     * @return IncomeType 收入类型
                     * 
                     */
                    std::string GetIncomeType() const;

                    /**
                     * 设置收入类型
                     * @param _incomeType 收入类型
                     * 
                     */
                    void SetIncomeType(const std::string& _incomeType);

                    /**
                     * 判断参数 IncomeType 是否已赋值
                     * @return IncomeType 是否已赋值
                     * 
                     */
                    bool IncomeTypeHasBeenSet() const;

                    /**
                     * 获取汇总金额
                     * @return SummaryAmount 汇总金额
                     * 
                     */
                    std::string GetSummaryAmount() const;

                    /**
                     * 设置汇总金额
                     * @param _summaryAmount 汇总金额
                     * 
                     */
                    void SetSummaryAmount(const std::string& _summaryAmount);

                    /**
                     * 判断参数 SummaryAmount 是否已赋值
                     * @return SummaryAmount 是否已赋值
                     * 
                     */
                    bool SummaryAmountHasBeenSet() const;

                    /**
                     * 获取汇总日期
                     * @return SummaryTime 汇总日期
                     * 
                     */
                    std::string GetSummaryTime() const;

                    /**
                     * 设置汇总日期
                     * @param _summaryTime 汇总日期
                     * 
                     */
                    void SetSummaryTime(const std::string& _summaryTime);

                    /**
                     * 判断参数 SummaryTime 是否已赋值
                     * @return SummaryTime 是否已赋值
                     * 
                     */
                    bool SummaryTimeHasBeenSet() const;

                    /**
                     * 获取汇总记录数量
                     * @return SummaryCount 汇总记录数量
                     * 
                     */
                    int64_t GetSummaryCount() const;

                    /**
                     * 设置汇总记录数量
                     * @param _summaryCount 汇总记录数量
                     * 
                     */
                    void SetSummaryCount(const int64_t& _summaryCount);

                    /**
                     * 判断参数 SummaryCount 是否已赋值
                     * @return SummaryCount 是否已赋值
                     * 
                     */
                    bool SummaryCountHasBeenSet() const;

                    /**
                     * 获取外部用户ID
                     * @return OutUserId 外部用户ID
                     * 
                     */
                    std::string GetOutUserId() const;

                    /**
                     * 设置外部用户ID
                     * @param _outUserId 外部用户ID
                     * 
                     */
                    void SetOutUserId(const std::string& _outUserId);

                    /**
                     * 判断参数 OutUserId 是否已赋值
                     * @return OutUserId 是否已赋值
                     * 
                     */
                    bool OutUserIdHasBeenSet() const;

                private:

                    /**
                     * 汇总ID
                     */
                    std::string m_summaryId;
                    bool m_summaryIdHasBeenSet;

                    /**
                     * 收款账户ID
                     */
                    std::string m_payeeId;
                    bool m_payeeIdHasBeenSet;

                    /**
                     * 收款账户名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 收入类型
                     */
                    std::string m_incomeType;
                    bool m_incomeTypeHasBeenSet;

                    /**
                     * 汇总金额
                     */
                    std::string m_summaryAmount;
                    bool m_summaryAmountHasBeenSet;

                    /**
                     * 汇总日期
                     */
                    std::string m_summaryTime;
                    bool m_summaryTimeHasBeenSet;

                    /**
                     * 汇总记录数量
                     */
                    int64_t m_summaryCount;
                    bool m_summaryCountHasBeenSet;

                    /**
                     * 外部用户ID
                     */
                    std::string m_outUserId;
                    bool m_outUserIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_ORDERSUMMARYRESULT_H_
