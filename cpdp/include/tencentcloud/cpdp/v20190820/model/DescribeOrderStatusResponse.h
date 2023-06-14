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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_DESCRIBEORDERSTATUSRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_DESCRIBEORDERSTATUSRESPONSE_H_

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
                * DescribeOrderStatus返回参数结构体
                */
                class DescribeOrderStatusResponse : public AbstractModel
                {
                public:
                    DescribeOrderStatusResponse();
                    ~DescribeOrderStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取交易状态 （0：成功，1：失败，2：待确认, 5：待处理，6：处理中）
                     * @return OrderStatus 交易状态 （0：成功，1：失败，2：待确认, 5：待处理，6：处理中）
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
                     * 获取转出子账户账号
                     * @return OutSubAccountNumber 转出子账户账号
                     * 
                     */
                    std::string GetOutSubAccountNumber() const;

                    /**
                     * 判断参数 OutSubAccountNumber 是否已赋值
                     * @return OutSubAccountNumber 是否已赋值
                     * 
                     */
                    bool OutSubAccountNumberHasBeenSet() const;

                    /**
                     * 获取转入子账户账号
                     * @return InSubAccountNumber 转入子账户账号
                     * 
                     */
                    std::string GetInSubAccountNumber() const;

                    /**
                     * 判断参数 InSubAccountNumber 是否已赋值
                     * @return InSubAccountNumber 是否已赋值
                     * 
                     */
                    bool InSubAccountNumberHasBeenSet() const;

                    /**
                     * 获取记账标志（1：登记挂账 2：支付 3：提现 4：清分5:下单预支付 6：确认并付款 7：退款 8：支付到平台 N:其他）
                     * @return BookingFlag 记账标志（1：登记挂账 2：支付 3：提现 4：清分5:下单预支付 6：确认并付款 7：退款 8：支付到平台 N:其他）
                     * 
                     */
                    std::string GetBookingFlag() const;

                    /**
                     * 判断参数 BookingFlag 是否已赋值
                     * @return BookingFlag 是否已赋值
                     * 
                     */
                    bool BookingFlagHasBeenSet() const;

                    /**
                     * 获取当交易失败时，返回交易失败原因
                     * @return FailMessage 当交易失败时，返回交易失败原因
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
                     * 交易状态 （0：成功，1：失败，2：待确认, 5：待处理，6：处理中）
                     */
                    std::string m_orderStatus;
                    bool m_orderStatusHasBeenSet;

                    /**
                     * 交易金额
                     */
                    std::string m_orderAmount;
                    bool m_orderAmountHasBeenSet;

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
                     * 转出子账户账号
                     */
                    std::string m_outSubAccountNumber;
                    bool m_outSubAccountNumberHasBeenSet;

                    /**
                     * 转入子账户账号
                     */
                    std::string m_inSubAccountNumber;
                    bool m_inSubAccountNumberHasBeenSet;

                    /**
                     * 记账标志（1：登记挂账 2：支付 3：提现 4：清分5:下单预支付 6：确认并付款 7：退款 8：支付到平台 N:其他）
                     */
                    std::string m_bookingFlag;
                    bool m_bookingFlagHasBeenSet;

                    /**
                     * 当交易失败时，返回交易失败原因
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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_DESCRIBEORDERSTATUSRESPONSE_H_
