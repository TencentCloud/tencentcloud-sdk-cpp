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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ADJUSTINFODETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ADJUSTINFODETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * UIN异常调整明细
                */
                class AdjustInfoDetail : public AbstractModel
                {
                public:
                    AdjustInfoDetail();
                    ~AdjustInfoDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取支付者UIN：支付者的账号 ID，账号 ID 是用户在腾讯云的唯一账号标识
                     * @return PayerUin 支付者UIN：支付者的账号 ID，账号 ID 是用户在腾讯云的唯一账号标识
                     * 
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置支付者UIN：支付者的账号 ID，账号 ID 是用户在腾讯云的唯一账号标识
                     * @param _payerUin 支付者UIN：支付者的账号 ID，账号 ID 是用户在腾讯云的唯一账号标识
                     * 
                     */
                    void SetPayerUin(const std::string& _payerUin);

                    /**
                     * 判断参数 PayerUin 是否已赋值
                     * @return PayerUin 是否已赋值
                     * 
                     */
                    bool PayerUinHasBeenSet() const;

                    /**
                     * 获取账单月份，格式：yyyy-MM
                     * @return Month 账单月份，格式：yyyy-MM
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置账单月份，格式：yyyy-MM
                     * @param _month 账单月份，格式：yyyy-MM
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
                     * 获取调整类型
调账：manualAdjustment
补结算：supplementarySettlement
重结算：reSettlement
                     * @return AdjustType 调整类型
调账：manualAdjustment
补结算：supplementarySettlement
重结算：reSettlement
                     * 
                     */
                    std::string GetAdjustType() const;

                    /**
                     * 设置调整类型
调账：manualAdjustment
补结算：supplementarySettlement
重结算：reSettlement
                     * @param _adjustType 调整类型
调账：manualAdjustment
补结算：supplementarySettlement
重结算：reSettlement
                     * 
                     */
                    void SetAdjustType(const std::string& _adjustType);

                    /**
                     * 判断参数 AdjustType 是否已赋值
                     * @return AdjustType 是否已赋值
                     * 
                     */
                    bool AdjustTypeHasBeenSet() const;

                    /**
                     * 获取调整单号
                     * @return AdjustNum 调整单号
                     * 
                     */
                    std::string GetAdjustNum() const;

                    /**
                     * 设置调整单号
                     * @param _adjustNum 调整单号
                     * 
                     */
                    void SetAdjustNum(const std::string& _adjustNum);

                    /**
                     * 判断参数 AdjustNum 是否已赋值
                     * @return AdjustNum 是否已赋值
                     * 
                     */
                    bool AdjustNumHasBeenSet() const;

                    /**
                     * 获取异常调整完成时间，格式：yyyy-MM-dd HH:mm:ss
                     * @return AdjustCompletionTime 异常调整完成时间，格式：yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetAdjustCompletionTime() const;

                    /**
                     * 设置异常调整完成时间，格式：yyyy-MM-dd HH:mm:ss
                     * @param _adjustCompletionTime 异常调整完成时间，格式：yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetAdjustCompletionTime(const std::string& _adjustCompletionTime);

                    /**
                     * 判断参数 AdjustCompletionTime 是否已赋值
                     * @return AdjustCompletionTime 是否已赋值
                     * 
                     */
                    bool AdjustCompletionTimeHasBeenSet() const;

                    /**
                     * 获取调整金额
                     * @return AdjustAmount 调整金额
                     * 
                     */
                    double GetAdjustAmount() const;

                    /**
                     * 设置调整金额
                     * @param _adjustAmount 调整金额
                     * 
                     */
                    void SetAdjustAmount(const double& _adjustAmount);

                    /**
                     * 判断参数 AdjustAmount 是否已赋值
                     * @return AdjustAmount 是否已赋值
                     * 
                     */
                    bool AdjustAmountHasBeenSet() const;

                private:

                    /**
                     * 支付者UIN：支付者的账号 ID，账号 ID 是用户在腾讯云的唯一账号标识
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * 账单月份，格式：yyyy-MM
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * 调整类型
调账：manualAdjustment
补结算：supplementarySettlement
重结算：reSettlement
                     */
                    std::string m_adjustType;
                    bool m_adjustTypeHasBeenSet;

                    /**
                     * 调整单号
                     */
                    std::string m_adjustNum;
                    bool m_adjustNumHasBeenSet;

                    /**
                     * 异常调整完成时间，格式：yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_adjustCompletionTime;
                    bool m_adjustCompletionTimeHasBeenSet;

                    /**
                     * 调整金额
                     */
                    double m_adjustAmount;
                    bool m_adjustAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ADJUSTINFODETAIL_H_
