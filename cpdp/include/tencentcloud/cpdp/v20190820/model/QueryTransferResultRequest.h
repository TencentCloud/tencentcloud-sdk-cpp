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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYTRANSFERRESULTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYTRANSFERRESULTREQUEST_H_

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
                * QueryTransferResult请求参数结构体
                */
                class QueryTransferResultRequest : public AbstractModel
                {
                public:
                    QueryTransferResultRequest();
                    ~QueryTransferResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取商户号
                     * @return MerchantId 商户号
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置商户号
                     * @param _merchantId 商户号
                     * 
                     */
                    void SetMerchantId(const std::string& _merchantId);

                    /**
                     * 判断参数 MerchantId 是否已赋值
                     * @return MerchantId 是否已赋值
                     * 
                     */
                    bool MerchantIdHasBeenSet() const;

                    /**
                     * 获取申请商户号的appid或者商户号绑定的appid
                     * @return MerchantAppId 申请商户号的appid或者商户号绑定的appid
                     * 
                     */
                    std::string GetMerchantAppId() const;

                    /**
                     * 设置申请商户号的appid或者商户号绑定的appid
                     * @param _merchantAppId 申请商户号的appid或者商户号绑定的appid
                     * 
                     */
                    void SetMerchantAppId(const std::string& _merchantAppId);

                    /**
                     * 判断参数 MerchantAppId 是否已赋值
                     * @return MerchantAppId 是否已赋值
                     * 
                     */
                    bool MerchantAppIdHasBeenSet() const;

                    /**
                     * 获取1、 微信企业付款 
2、 支付宝转账 
3、 平安银企直联代发转账
                     * @return TransferType 1、 微信企业付款 
2、 支付宝转账 
3、 平安银企直联代发转账
                     * 
                     */
                    int64_t GetTransferType() const;

                    /**
                     * 设置1、 微信企业付款 
2、 支付宝转账 
3、 平安银企直联代发转账
                     * @param _transferType 1、 微信企业付款 
2、 支付宝转账 
3、 平安银企直联代发转账
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
                     * 获取交易流水流水号（与 OrderId 不能同时为空）
                     * @return TradeSerialNo 交易流水流水号（与 OrderId 不能同时为空）
                     * 
                     */
                    std::string GetTradeSerialNo() const;

                    /**
                     * 设置交易流水流水号（与 OrderId 不能同时为空）
                     * @param _tradeSerialNo 交易流水流水号（与 OrderId 不能同时为空）
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
                     * 获取订单号（与 TradeSerialNo 不能同时为空）
                     * @return OrderId 订单号（与 TradeSerialNo 不能同时为空）
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单号（与 TradeSerialNo 不能同时为空）
                     * @param _orderId 订单号（与 TradeSerialNo 不能同时为空）
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
                     * 获取接入环境。沙箱环境填sandbox。
                     * @return Profile 接入环境。沙箱环境填sandbox。
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置接入环境。沙箱环境填sandbox。
                     * @param _profile 接入环境。沙箱环境填sandbox。
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                private:

                    /**
                     * 商户号
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 申请商户号的appid或者商户号绑定的appid
                     */
                    std::string m_merchantAppId;
                    bool m_merchantAppIdHasBeenSet;

                    /**
                     * 1、 微信企业付款 
2、 支付宝转账 
3、 平安银企直联代发转账
                     */
                    int64_t m_transferType;
                    bool m_transferTypeHasBeenSet;

                    /**
                     * 交易流水流水号（与 OrderId 不能同时为空）
                     */
                    std::string m_tradeSerialNo;
                    bool m_tradeSerialNoHasBeenSet;

                    /**
                     * 订单号（与 TradeSerialNo 不能同时为空）
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 接入环境。沙箱环境填sandbox。
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYTRANSFERRESULTREQUEST_H_
