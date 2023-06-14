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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEORDERREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEORDERREQUEST_H_

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
                * CreateOrder请求参数结构体
                */
                class CreateOrderRequest : public AbstractModel
                {
                public:
                    CreateOrderRequest();
                    ~CreateOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道编号。ZSB2B：招商银行B2B。
                     * @return ChannelCode 渠道编号。ZSB2B：招商银行B2B。
                     * 
                     */
                    std::string GetChannelCode() const;

                    /**
                     * 设置渠道编号。ZSB2B：招商银行B2B。
                     * @param _channelCode 渠道编号。ZSB2B：招商银行B2B。
                     * 
                     */
                    void SetChannelCode(const std::string& _channelCode);

                    /**
                     * 判断参数 ChannelCode 是否已赋值
                     * @return ChannelCode 是否已赋值
                     * 
                     */
                    bool ChannelCodeHasBeenSet() const;

                    /**
                     * 获取进件成功后返给商户方的 AppId。
                     * @return MerchantAppId 进件成功后返给商户方的 AppId。
                     * 
                     */
                    std::string GetMerchantAppId() const;

                    /**
                     * 设置进件成功后返给商户方的 AppId。
                     * @param _merchantAppId 进件成功后返给商户方的 AppId。
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
                     * 获取交易金额。单位：元
                     * @return Amount 交易金额。单位：元
                     * 
                     */
                    std::string GetAmount() const;

                    /**
                     * 设置交易金额。单位：元
                     * @param _amount 交易金额。单位：元
                     * 
                     */
                    void SetAmount(const std::string& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                    /**
                     * 获取商户流水号。商户唯一订单号由字母或数字组成。
                     * @return TraceNo 商户流水号。商户唯一订单号由字母或数字组成。
                     * 
                     */
                    std::string GetTraceNo() const;

                    /**
                     * 设置商户流水号。商户唯一订单号由字母或数字组成。
                     * @param _traceNo 商户流水号。商户唯一订单号由字母或数字组成。
                     * 
                     */
                    void SetTraceNo(const std::string& _traceNo);

                    /**
                     * 判断参数 TraceNo 是否已赋值
                     * @return TraceNo 是否已赋值
                     * 
                     */
                    bool TraceNoHasBeenSet() const;

                    /**
                     * 获取通知地址。商户接收交易结果的通知地址。
                     * @return NotifyUrl 通知地址。商户接收交易结果的通知地址。
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置通知地址。商户接收交易结果的通知地址。
                     * @param _notifyUrl 通知地址。商户接收交易结果的通知地址。
                     * 
                     */
                    void SetNotifyUrl(const std::string& _notifyUrl);

                    /**
                     * 判断参数 NotifyUrl 是否已赋值
                     * @return NotifyUrl 是否已赋值
                     * 
                     */
                    bool NotifyUrlHasBeenSet() const;

                    /**
                     * 获取返回地址。支付成功后，页面将跳 转返回到商户的该地址。
                     * @return ReturnUrl 返回地址。支付成功后，页面将跳 转返回到商户的该地址。
                     * 
                     */
                    std::string GetReturnUrl() const;

                    /**
                     * 设置返回地址。支付成功后，页面将跳 转返回到商户的该地址。
                     * @param _returnUrl 返回地址。支付成功后，页面将跳 转返回到商户的该地址。
                     * 
                     */
                    void SetReturnUrl(const std::string& _returnUrl);

                    /**
                     * 判断参数 ReturnUrl 是否已赋值
                     * @return ReturnUrl 是否已赋值
                     * 
                     */
                    bool ReturnUrlHasBeenSet() const;

                private:

                    /**
                     * 渠道编号。ZSB2B：招商银行B2B。
                     */
                    std::string m_channelCode;
                    bool m_channelCodeHasBeenSet;

                    /**
                     * 进件成功后返给商户方的 AppId。
                     */
                    std::string m_merchantAppId;
                    bool m_merchantAppIdHasBeenSet;

                    /**
                     * 交易金额。单位：元
                     */
                    std::string m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * 商户流水号。商户唯一订单号由字母或数字组成。
                     */
                    std::string m_traceNo;
                    bool m_traceNoHasBeenSet;

                    /**
                     * 通知地址。商户接收交易结果的通知地址。
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                    /**
                     * 返回地址。支付成功后，页面将跳 转返回到商户的该地址。
                     */
                    std::string m_returnUrl;
                    bool m_returnUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEORDERREQUEST_H_
