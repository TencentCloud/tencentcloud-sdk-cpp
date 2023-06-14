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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYSINGLEPAYMENTRESULTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYSINGLEPAYMENTRESULTREQUEST_H_

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
                * QuerySinglePaymentResult请求参数结构体
                */
                class QuerySinglePaymentResultRequest : public AbstractModel
                {
                public:
                    QuerySinglePaymentResultRequest();
                    ~QuerySinglePaymentResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取转账类型
                     * @return TransferType 转账类型
                     * 
                     */
                    int64_t GetTransferType() const;

                    /**
                     * 设置转账类型
                     * @param _transferType 转账类型
                     * 
                     */
                    void SetTransferType(const int64_t& _transferType);

                    /**
                     * 判断参数 TransferType 是否已赋值
                     * @return TransferType 是否已赋值
                     * 
                     */
                    bool TransferTypeHasBeenSet() const;

                    /**
                     * 获取交易流水流水号，唯一
                     * @return TradeSerialNo 交易流水流水号，唯一
                     * 
                     */
                    std::string GetTradeSerialNo() const;

                    /**
                     * 设置交易流水流水号，唯一
                     * @param _tradeSerialNo 交易流水流水号，唯一
                     * 
                     */
                    void SetTradeSerialNo(const std::string& _tradeSerialNo);

                    /**
                     * 判断参数 TradeSerialNo 是否已赋值
                     * @return TradeSerialNo 是否已赋值
                     * 
                     */
                    bool TradeSerialNoHasBeenSet() const;

                    /**
                     * 获取订单号，与TradeSerialNo不能同时为空
                     * @return OrderId 订单号，与TradeSerialNo不能同时为空
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单号，与TradeSerialNo不能同时为空
                     * @param _orderId 订单号，与TradeSerialNo不能同时为空
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                private:

                    /**
                     * 转账类型
                     */
                    int64_t m_transferType;
                    bool m_transferTypeHasBeenSet;

                    /**
                     * 交易流水流水号，唯一
                     */
                    std::string m_tradeSerialNo;
                    bool m_tradeSerialNoHasBeenSet;

                    /**
                     * 订单号，与TradeSerialNo不能同时为空
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYSINGLEPAYMENTRESULTREQUEST_H_
