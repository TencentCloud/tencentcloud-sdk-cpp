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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_MIGRATEORDERREFUNDQUERYREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_MIGRATEORDERREFUNDQUERYREQUEST_H_

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
                * MigrateOrderRefundQuery请求参数结构体
                */
                class MigrateOrderRefundQueryRequest : public AbstractModel
                {
                public:
                    MigrateOrderRefundQueryRequest();
                    ~MigrateOrderRefundQueryRequest() = default;
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
                     * 获取支付渠道，ALIPAY对应支付宝渠道；UNIONPAY对应银联渠道
                     * @return PayChannel 支付渠道，ALIPAY对应支付宝渠道；UNIONPAY对应银联渠道
                     * 
                     */
                    std::string GetPayChannel() const;

                    /**
                     * 设置支付渠道，ALIPAY对应支付宝渠道；UNIONPAY对应银联渠道
                     * @param _payChannel 支付渠道，ALIPAY对应支付宝渠道；UNIONPAY对应银联渠道
                     * 
                     */
                    void SetPayChannel(const std::string& _payChannel);

                    /**
                     * 判断参数 PayChannel 是否已赋值
                     * @return PayChannel 是否已赋值
                     * 
                     */
                    bool PayChannelHasBeenSet() const;

                    /**
                     * 获取退款订单号，最长64位，仅支持数字、 字母
                     * @return RefundOrderId 退款订单号，最长64位，仅支持数字、 字母
                     * 
                     */
                    std::string GetRefundOrderId() const;

                    /**
                     * 设置退款订单号，最长64位，仅支持数字、 字母
                     * @param _refundOrderId 退款订单号，最长64位，仅支持数字、 字母
                     * 
                     */
                    void SetRefundOrderId(const std::string& _refundOrderId);

                    /**
                     * 判断参数 RefundOrderId 是否已赋值
                     * @return RefundOrderId 是否已赋值
                     * 
                     */
                    bool RefundOrderIdHasBeenSet() const;

                    /**
                     * 获取退款流水号
                     * @return TradeSerialNo 退款流水号
                     * 
                     */
                    std::string GetTradeSerialNo() const;

                    /**
                     * 设置退款流水号
                     * @param _tradeSerialNo 退款流水号
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
                     * 获取接入环境。沙箱环境填 sandbox。
                     * @return Profile 接入环境。沙箱环境填 sandbox。
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置接入环境。沙箱环境填 sandbox。
                     * @param _profile 接入环境。沙箱环境填 sandbox。
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
                     * 支付渠道，ALIPAY对应支付宝渠道；UNIONPAY对应银联渠道
                     */
                    std::string m_payChannel;
                    bool m_payChannelHasBeenSet;

                    /**
                     * 退款订单号，最长64位，仅支持数字、 字母
                     */
                    std::string m_refundOrderId;
                    bool m_refundOrderIdHasBeenSet;

                    /**
                     * 退款流水号
                     */
                    std::string m_tradeSerialNo;
                    bool m_tradeSerialNoHasBeenSet;

                    /**
                     * 接入环境。沙箱环境填 sandbox。
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_MIGRATEORDERREFUNDQUERYREQUEST_H_
