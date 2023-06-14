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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEAGENTBILLSREQUEST_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEAGENTBILLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * DescribeAgentBills请求参数结构体
                */
                class DescribeAgentBillsRequest : public AbstractModel
                {
                public:
                    DescribeAgentBillsRequest();
                    ~DescribeAgentBillsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取支付月份，如2018-02
                     * @return SettleMonth 支付月份，如2018-02
                     * 
                     */
                    std::string GetSettleMonth() const;

                    /**
                     * 设置支付月份，如2018-02
                     * @param _settleMonth 支付月份，如2018-02
                     * 
                     */
                    void SetSettleMonth(const std::string& _settleMonth);

                    /**
                     * 判断参数 SettleMonth 是否已赋值
                     * @return SettleMonth 是否已赋值
                     * 
                     */
                    bool SettleMonthHasBeenSet() const;

                    /**
                     * 获取客户账号ID
                     * @return ClientUin 客户账号ID
                     * 
                     */
                    std::string GetClientUin() const;

                    /**
                     * 设置客户账号ID
                     * @param _clientUin 客户账号ID
                     * 
                     */
                    void SetClientUin(const std::string& _clientUin);

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     * 
                     */
                    bool ClientUinHasBeenSet() const;

                    /**
                     * 获取支付方式，prepay/postpay
                     * @return PayMode 支付方式，prepay/postpay
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置支付方式，prepay/postpay
                     * @param _payMode 支付方式，prepay/postpay
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取预付费订单号
                     * @return OrderId 预付费订单号
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置预付费订单号
                     * @param _orderId 预付费订单号
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取客户备注名称
                     * @return ClientRemark 客户备注名称
                     * 
                     */
                    std::string GetClientRemark() const;

                    /**
                     * 设置客户备注名称
                     * @param _clientRemark 客户备注名称
                     * 
                     */
                    void SetClientRemark(const std::string& _clientRemark);

                    /**
                     * 判断参数 ClientRemark 是否已赋值
                     * @return ClientRemark 是否已赋值
                     * 
                     */
                    bool ClientRemarkHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取限制数目
                     * @return Limit 限制数目
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数目
                     * @param _limit 限制数目
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 支付月份，如2018-02
                     */
                    std::string m_settleMonth;
                    bool m_settleMonthHasBeenSet;

                    /**
                     * 客户账号ID
                     */
                    std::string m_clientUin;
                    bool m_clientUinHasBeenSet;

                    /**
                     * 支付方式，prepay/postpay
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 预付费订单号
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 客户备注名称
                     */
                    std::string m_clientRemark;
                    bool m_clientRemarkHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数目
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEAGENTBILLSREQUEST_H_
