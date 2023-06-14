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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_DESCRIBECHARGEDETAILRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_DESCRIBECHARGEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeChargeDetail返回参数结构体
                */
                class DescribeChargeDetailResponse : public AbstractModel
                {
                public:
                    DescribeChargeDetailResponse();
                    ~DescribeChargeDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取交易状态 （0：成功，1：失败，2：异常,3:冲正，5：待处理）
                     * @return OrderStatus 交易状态 （0：成功，1：失败，2：异常,3:冲正，5：待处理）
                     * 
                     */
                    std::string GetOrderStatus() const;

                    /**
                     * 判断参数 OrderStatus 是否已赋值
                     * @return OrderStatus 是否已赋值
                     * 
                     */
                    bool OrderStatusHasBeenSet() const;

                    /**
                     * 获取交易金额
                     * @return OrderAmount 交易金额
                     * 
                     */
                    std::string GetOrderAmount() const;

                    /**
                     * 判断参数 OrderAmount 是否已赋值
                     * @return OrderAmount 是否已赋值
                     * 
                     */
                    bool OrderAmountHasBeenSet() const;

                    /**
                     * 获取佣金费
                     * @return CommissionAmount 佣金费
                     * 
                     */
                    std::string GetCommissionAmount() const;

                    /**
                     * 判断参数 CommissionAmount 是否已赋值
                     * @return CommissionAmount 是否已赋值
                     * 
                     */
                    bool CommissionAmountHasBeenSet() const;

                    /**
                     * 获取支付方式  0-冻结支付 1-普通支付
                     * @return PayMode 支付方式  0-冻结支付 1-普通支付
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取交易日期
                     * @return OrderDate 交易日期
                     * 
                     */
                    std::string GetOrderDate() const;

                    /**
                     * 判断参数 OrderDate 是否已赋值
                     * @return OrderDate 是否已赋值
                     * 
                     */
                    bool OrderDateHasBeenSet() const;

                    /**
                     * 获取交易时间
                     * @return OrderTime 交易时间
                     * 
                     */
                    std::string GetOrderTime() const;

                    /**
                     * 判断参数 OrderTime 是否已赋值
                     * @return OrderTime 是否已赋值
                     * 
                     */
                    bool OrderTimeHasBeenSet() const;

                    /**
                     * 获取订单实际转入见证子账户的名称
                     * @return OrderActualInSubAccountName 订单实际转入见证子账户的名称
                     * 
                     */
                    std::string GetOrderActualInSubAccountName() const;

                    /**
                     * 判断参数 OrderActualInSubAccountName 是否已赋值
                     * @return OrderActualInSubAccountName 是否已赋值
                     * 
                     */
                    bool OrderActualInSubAccountNameHasBeenSet() const;

                    /**
                     * 获取订单实际转入见证子账户的帐号
                     * @return OrderActualInSubAccountNumber 订单实际转入见证子账户的帐号
                     * 
                     */
                    std::string GetOrderActualInSubAccountNumber() const;

                    /**
                     * 判断参数 OrderActualInSubAccountNumber 是否已赋值
                     * @return OrderActualInSubAccountNumber 是否已赋值
                     * 
                     */
                    bool OrderActualInSubAccountNumberHasBeenSet() const;

                    /**
                     * 获取订单实际转入见证子账户的帐号
                     * @return OrderInSubAccountName 订单实际转入见证子账户的帐号
                     * 
                     */
                    std::string GetOrderInSubAccountName() const;

                    /**
                     * 判断参数 OrderInSubAccountName 是否已赋值
                     * @return OrderInSubAccountName 是否已赋值
                     * 
                     */
                    bool OrderInSubAccountNameHasBeenSet() const;

                    /**
                     * 获取订单转入见证子账户的帐号
                     * @return OrderInSubAccountNumber 订单转入见证子账户的帐号
                     * 
                     */
                    std::string GetOrderInSubAccountNumber() const;

                    /**
                     * 判断参数 OrderInSubAccountNumber 是否已赋值
                     * @return OrderInSubAccountNumber 是否已赋值
                     * 
                     */
                    bool OrderInSubAccountNumberHasBeenSet() const;

                    /**
                     * 获取银行流水号
                     * @return FrontSequenceNumber 银行流水号
                     * 
                     */
                    std::string GetFrontSequenceNumber() const;

                    /**
                     * 判断参数 FrontSequenceNumber 是否已赋值
                     * @return FrontSequenceNumber 是否已赋值
                     * 
                     */
                    bool FrontSequenceNumberHasBeenSet() const;

                    /**
                     * 获取当充值失败时，返回交易失败原因
                     * @return FailMessage 当充值失败时，返回交易失败原因
                     * 
                     */
                    std::string GetFailMessage() const;

                    /**
                     * 判断参数 FailMessage 是否已赋值
                     * @return FailMessage 是否已赋值
                     * 
                     */
                    bool FailMessageHasBeenSet() const;

                    /**
                     * 获取请求类型
                     * @return RequestType 请求类型
                     * 
                     */
                    std::string GetRequestType() const;

                    /**
                     * 判断参数 RequestType 是否已赋值
                     * @return RequestType 是否已赋值
                     * 
                     */
                    bool RequestTypeHasBeenSet() const;

                private:

                    /**
                     * 交易状态 （0：成功，1：失败，2：异常,3:冲正，5：待处理）
                     */
                    std::string m_orderStatus;
                    bool m_orderStatusHasBeenSet;

                    /**
                     * 交易金额
                     */
                    std::string m_orderAmount;
                    bool m_orderAmountHasBeenSet;

                    /**
                     * 佣金费
                     */
                    std::string m_commissionAmount;
                    bool m_commissionAmountHasBeenSet;

                    /**
                     * 支付方式  0-冻结支付 1-普通支付
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 交易日期
                     */
                    std::string m_orderDate;
                    bool m_orderDateHasBeenSet;

                    /**
                     * 交易时间
                     */
                    std::string m_orderTime;
                    bool m_orderTimeHasBeenSet;

                    /**
                     * 订单实际转入见证子账户的名称
                     */
                    std::string m_orderActualInSubAccountName;
                    bool m_orderActualInSubAccountNameHasBeenSet;

                    /**
                     * 订单实际转入见证子账户的帐号
                     */
                    std::string m_orderActualInSubAccountNumber;
                    bool m_orderActualInSubAccountNumberHasBeenSet;

                    /**
                     * 订单实际转入见证子账户的帐号
                     */
                    std::string m_orderInSubAccountName;
                    bool m_orderInSubAccountNameHasBeenSet;

                    /**
                     * 订单转入见证子账户的帐号
                     */
                    std::string m_orderInSubAccountNumber;
                    bool m_orderInSubAccountNumberHasBeenSet;

                    /**
                     * 银行流水号
                     */
                    std::string m_frontSequenceNumber;
                    bool m_frontSequenceNumberHasBeenSet;

                    /**
                     * 当充值失败时，返回交易失败原因
                     */
                    std::string m_failMessage;
                    bool m_failMessageHasBeenSet;

                    /**
                     * 请求类型
                     */
                    std::string m_requestType;
                    bool m_requestTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_DESCRIBECHARGEDETAILRESPONSE_H_
