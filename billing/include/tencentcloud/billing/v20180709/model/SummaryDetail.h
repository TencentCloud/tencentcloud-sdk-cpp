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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_SUMMARYDETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_SUMMARYDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BusinessSummaryInfo.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 账单多维度汇总消费详情
                */
                class SummaryDetail : public AbstractModel
                {
                public:
                    SummaryDetail();
                    ~SummaryDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账单维度编码
                     * @return GroupKey 账单维度编码
                     * 
                     */
                    std::string GetGroupKey() const;

                    /**
                     * 设置账单维度编码
                     * @param _groupKey 账单维度编码
                     * 
                     */
                    void SetGroupKey(const std::string& _groupKey);

                    /**
                     * 判断参数 GroupKey 是否已赋值
                     * @return GroupKey 是否已赋值
                     * 
                     */
                    bool GroupKeyHasBeenSet() const;

                    /**
                     * 获取账单维度值
                     * @return GroupValue 账单维度值
                     * 
                     */
                    std::string GetGroupValue() const;

                    /**
                     * 设置账单维度值
                     * @param _groupValue 账单维度值
                     * 
                     */
                    void SetGroupValue(const std::string& _groupValue);

                    /**
                     * 判断参数 GroupValue 是否已赋值
                     * @return GroupValue 是否已赋值
                     * 
                     */
                    bool GroupValueHasBeenSet() const;

                    /**
                     * 获取原价，单位为元。TotalCost字段自账单3.0（即2021-05）之后开始生效，账单3.0之前返回"-"。合同价的情况下，TotalCost字段与官网价格存在差异，也返回“-”。
                     * @return TotalCost 原价，单位为元。TotalCost字段自账单3.0（即2021-05）之后开始生效，账单3.0之前返回"-"。合同价的情况下，TotalCost字段与官网价格存在差异，也返回“-”。
                     * 
                     */
                    std::string GetTotalCost() const;

                    /**
                     * 设置原价，单位为元。TotalCost字段自账单3.0（即2021-05）之后开始生效，账单3.0之前返回"-"。合同价的情况下，TotalCost字段与官网价格存在差异，也返回“-”。
                     * @param _totalCost 原价，单位为元。TotalCost字段自账单3.0（即2021-05）之后开始生效，账单3.0之前返回"-"。合同价的情况下，TotalCost字段与官网价格存在差异，也返回“-”。
                     * 
                     */
                    void SetTotalCost(const std::string& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取优惠后总价
                     * @return RealTotalCost 优惠后总价
                     * 
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置优惠后总价
                     * @param _realTotalCost 优惠后总价
                     * 
                     */
                    void SetRealTotalCost(const std::string& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     * 
                     */
                    bool RealTotalCostHasBeenSet() const;

                    /**
                     * 获取现金账户支出：通过现金账户支付的金额
                     * @return CashPayAmount 现金账户支出：通过现金账户支付的金额
                     * 
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置现金账户支出：通过现金账户支付的金额
                     * @param _cashPayAmount 现金账户支出：通过现金账户支付的金额
                     * 
                     */
                    void SetCashPayAmount(const std::string& _cashPayAmount);

                    /**
                     * 判断参数 CashPayAmount 是否已赋值
                     * @return CashPayAmount 是否已赋值
                     * 
                     */
                    bool CashPayAmountHasBeenSet() const;

                    /**
                     * 获取赠送账户支出：使用赠送金支付的金额
                     * @return IncentivePayAmount 赠送账户支出：使用赠送金支付的金额
                     * 
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置赠送账户支出：使用赠送金支付的金额
                     * @param _incentivePayAmount 赠送账户支出：使用赠送金支付的金额
                     * 
                     */
                    void SetIncentivePayAmount(const std::string& _incentivePayAmount);

                    /**
                     * 判断参数 IncentivePayAmount 是否已赋值
                     * @return IncentivePayAmount 是否已赋值
                     * 
                     */
                    bool IncentivePayAmountHasBeenSet() const;

                    /**
                     * 获取优惠券支出：使用各类优惠券（如代金券、现金券等）支付的金额
                     * @return VoucherPayAmount 优惠券支出：使用各类优惠券（如代金券、现金券等）支付的金额
                     * 
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置优惠券支出：使用各类优惠券（如代金券、现金券等）支付的金额
                     * @param _voucherPayAmount 优惠券支出：使用各类优惠券（如代金券、现金券等）支付的金额
                     * 
                     */
                    void SetVoucherPayAmount(const std::string& _voucherPayAmount);

                    /**
                     * 判断参数 VoucherPayAmount 是否已赋值
                     * @return VoucherPayAmount 是否已赋值
                     * 
                     */
                    bool VoucherPayAmountHasBeenSet() const;

                    /**
                     * 获取分成金账户支出：通过分成金账户支付的金额
                     * @return TransferPayAmount 分成金账户支出：通过分成金账户支付的金额
                     * 
                     */
                    std::string GetTransferPayAmount() const;

                    /**
                     * 设置分成金账户支出：通过分成金账户支付的金额
                     * @param _transferPayAmount 分成金账户支出：通过分成金账户支付的金额
                     * 
                     */
                    void SetTransferPayAmount(const std::string& _transferPayAmount);

                    /**
                     * 判断参数 TransferPayAmount 是否已赋值
                     * @return TransferPayAmount 是否已赋值
                     * 
                     */
                    bool TransferPayAmountHasBeenSet() const;

                    /**
                     * 获取产品汇总信息
                     * @return Business 产品汇总信息
                     * 
                     */
                    std::vector<BusinessSummaryInfo> GetBusiness() const;

                    /**
                     * 设置产品汇总信息
                     * @param _business 产品汇总信息
                     * 
                     */
                    void SetBusiness(const std::vector<BusinessSummaryInfo>& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                private:

                    /**
                     * 账单维度编码
                     */
                    std::string m_groupKey;
                    bool m_groupKeyHasBeenSet;

                    /**
                     * 账单维度值
                     */
                    std::string m_groupValue;
                    bool m_groupValueHasBeenSet;

                    /**
                     * 原价，单位为元。TotalCost字段自账单3.0（即2021-05）之后开始生效，账单3.0之前返回"-"。合同价的情况下，TotalCost字段与官网价格存在差异，也返回“-”。
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * 优惠后总价
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * 现金账户支出：通过现金账户支付的金额
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * 赠送账户支出：使用赠送金支付的金额
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * 优惠券支出：使用各类优惠券（如代金券、现金券等）支付的金额
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * 分成金账户支出：通过分成金账户支付的金额
                     */
                    std::string m_transferPayAmount;
                    bool m_transferPayAmountHasBeenSet;

                    /**
                     * 产品汇总信息
                     */
                    std::vector<BusinessSummaryInfo> m_business;
                    bool m_businessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_SUMMARYDETAIL_H_
