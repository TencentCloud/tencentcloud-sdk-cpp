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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_MIGRATEORDERREFUNDREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_MIGRATEORDERREFUNDREQUEST_H_

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
                * MigrateOrderRefund请求参数结构体
                */
                class MigrateOrderRefundRequest : public AbstractModel
                {
                public:
                    MigrateOrderRefundRequest();
                    ~MigrateOrderRefundRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取商户代码
                     * @return MerchantId 商户代码
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置商户代码
                     * @param _merchantId 商户代码
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
                     * 获取正向支付商户订单号
                     * @return PayOrderId 正向支付商户订单号
                     * 
                     */
                    std::string GetPayOrderId() const;

                    /**
                     * 设置正向支付商户订单号
                     * @param _payOrderId 正向支付商户订单号
                     * 
                     */
                    void SetPayOrderId(const std::string& _payOrderId);

                    /**
                     * 判断参数 PayOrderId 是否已赋值
                     * @return PayOrderId 是否已赋值
                     * 
                     */
                    bool PayOrderIdHasBeenSet() const;

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
                     * 获取退款金额，单位：分。备注：改字段必须大于0 和小于10000000000的整数。
                     * @return RefundAmt 退款金额，单位：分。备注：改字段必须大于0 和小于10000000000的整数。
                     * 
                     */
                    uint64_t GetRefundAmt() const;

                    /**
                     * 设置退款金额，单位：分。备注：改字段必须大于0 和小于10000000000的整数。
                     * @param _refundAmt 退款金额，单位：分。备注：改字段必须大于0 和小于10000000000的整数。
                     * 
                     */
                    void SetRefundAmt(const uint64_t& _refundAmt);

                    /**
                     * 判断参数 RefundAmt 是否已赋值
                     * @return RefundAmt 是否已赋值
                     * 
                     */
                    bool RefundAmtHasBeenSet() const;

                    /**
                     * 获取第三方支付机构支付交易号
                     * @return ThirdChannelOrderId 第三方支付机构支付交易号
                     * 
                     */
                    std::string GetThirdChannelOrderId() const;

                    /**
                     * 设置第三方支付机构支付交易号
                     * @param _thirdChannelOrderId 第三方支付机构支付交易号
                     * 
                     */
                    void SetThirdChannelOrderId(const std::string& _thirdChannelOrderId);

                    /**
                     * 判断参数 ThirdChannelOrderId 是否已赋值
                     * @return ThirdChannelOrderId 是否已赋值
                     * 
                     */
                    bool ThirdChannelOrderIdHasBeenSet() const;

                    /**
                     * 获取原始支付金额，单位：分。备注：当该字段为空或者为0 时，系统会默认使用订单当 实付金额作为退款金额
                     * @return PayAmt 原始支付金额，单位：分。备注：当该字段为空或者为0 时，系统会默认使用订单当 实付金额作为退款金额
                     * 
                     */
                    uint64_t GetPayAmt() const;

                    /**
                     * 设置原始支付金额，单位：分。备注：当该字段为空或者为0 时，系统会默认使用订单当 实付金额作为退款金额
                     * @param _payAmt 原始支付金额，单位：分。备注：当该字段为空或者为0 时，系统会默认使用订单当 实付金额作为退款金额
                     * 
                     */
                    void SetPayAmt(const uint64_t& _payAmt);

                    /**
                     * 判断参数 PayAmt 是否已赋值
                     * @return PayAmt 是否已赋值
                     * 
                     */
                    bool PayAmtHasBeenSet() const;

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

                    /**
                     * 获取退款原因
                     * @return RefundReason 退款原因
                     * 
                     */
                    std::string GetRefundReason() const;

                    /**
                     * 设置退款原因
                     * @param _refundReason 退款原因
                     * 
                     */
                    void SetRefundReason(const std::string& _refundReason);

                    /**
                     * 判断参数 RefundReason 是否已赋值
                     * @return RefundReason 是否已赋值
                     * 
                     */
                    bool RefundReasonHasBeenSet() const;

                private:

                    /**
                     * 商户代码
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 支付渠道，ALIPAY对应支付宝渠道；UNIONPAY对应银联渠道
                     */
                    std::string m_payChannel;
                    bool m_payChannelHasBeenSet;

                    /**
                     * 正向支付商户订单号
                     */
                    std::string m_payOrderId;
                    bool m_payOrderIdHasBeenSet;

                    /**
                     * 退款订单号，最长64位，仅支持数字、 字母
                     */
                    std::string m_refundOrderId;
                    bool m_refundOrderIdHasBeenSet;

                    /**
                     * 退款金额，单位：分。备注：改字段必须大于0 和小于10000000000的整数。
                     */
                    uint64_t m_refundAmt;
                    bool m_refundAmtHasBeenSet;

                    /**
                     * 第三方支付机构支付交易号
                     */
                    std::string m_thirdChannelOrderId;
                    bool m_thirdChannelOrderIdHasBeenSet;

                    /**
                     * 原始支付金额，单位：分。备注：当该字段为空或者为0 时，系统会默认使用订单当 实付金额作为退款金额
                     */
                    uint64_t m_payAmt;
                    bool m_payAmtHasBeenSet;

                    /**
                     * 接入环境。沙箱环境填 sandbox。
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * 退款原因
                     */
                    std::string m_refundReason;
                    bool m_refundReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_MIGRATEORDERREFUNDREQUEST_H_
