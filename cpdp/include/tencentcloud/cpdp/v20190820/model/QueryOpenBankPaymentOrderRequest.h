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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKPAYMENTORDERREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKPAYMENTORDERREQUEST_H_

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
                * QueryOpenBankPaymentOrder请求参数结构体
                */
                class QueryOpenBankPaymentOrderRequest : public AbstractModel
                {
                public:
                    QueryOpenBankPaymentOrderRequest();
                    ~QueryOpenBankPaymentOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道商户号。外部接入平台入驻云企付平台下发。
                     * @return ChannelMerchantId 渠道商户号。外部接入平台入驻云企付平台下发。
                     * 
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置渠道商户号。外部接入平台入驻云企付平台下发。
                     * @param _channelMerchantId 渠道商户号。外部接入平台入驻云企付平台下发。
                     * 
                     */
                    void SetChannelMerchantId(const std::string& _channelMerchantId);

                    /**
                     * 判断参数 ChannelMerchantId 是否已赋值
                     * @return ChannelMerchantId 是否已赋值
                     * 
                     */
                    bool ChannelMerchantIdHasBeenSet() const;

                    /**
                     * 获取外部商户订单号。与ChannelOrderId不能同时为空。若传空串即表示忽略该参数。
                     * @return OutOrderId 外部商户订单号。与ChannelOrderId不能同时为空。若传空串即表示忽略该参数。
                     * 
                     */
                    std::string GetOutOrderId() const;

                    /**
                     * 设置外部商户订单号。与ChannelOrderId不能同时为空。若传空串即表示忽略该参数。
                     * @param _outOrderId 外部商户订单号。与ChannelOrderId不能同时为空。若传空串即表示忽略该参数。
                     * 
                     */
                    void SetOutOrderId(const std::string& _outOrderId);

                    /**
                     * 判断参数 OutOrderId 是否已赋值
                     * @return OutOrderId 是否已赋值
                     * 
                     */
                    bool OutOrderIdHasBeenSet() const;

                    /**
                     * 获取云平台订单号。与OutOrderId不能同时为空。若调用下单接口时，发生异常，无法取到ChannelOrderId，传空串即可
                     * @return ChannelOrderId 云平台订单号。与OutOrderId不能同时为空。若调用下单接口时，发生异常，无法取到ChannelOrderId，传空串即可
                     * 
                     */
                    std::string GetChannelOrderId() const;

                    /**
                     * 设置云平台订单号。与OutOrderId不能同时为空。若调用下单接口时，发生异常，无法取到ChannelOrderId，传空串即可
                     * @param _channelOrderId 云平台订单号。与OutOrderId不能同时为空。若调用下单接口时，发生异常，无法取到ChannelOrderId，传空串即可
                     * 
                     */
                    void SetChannelOrderId(const std::string& _channelOrderId);

                    /**
                     * 判断参数 ChannelOrderId 是否已赋值
                     * @return ChannelOrderId 是否已赋值
                     * 
                     */
                    bool ChannelOrderIdHasBeenSet() const;

                    /**
                     * 获取接入环境。沙箱环境填 sandbox。缺省默认调用生产环境。
                     * @return Environment 接入环境。沙箱环境填 sandbox。缺省默认调用生产环境。
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置接入环境。沙箱环境填 sandbox。缺省默认调用生产环境。
                     * @param _environment 接入环境。沙箱环境填 sandbox。缺省默认调用生产环境。
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                private:

                    /**
                     * 渠道商户号。外部接入平台入驻云企付平台下发。
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 外部商户订单号。与ChannelOrderId不能同时为空。若传空串即表示忽略该参数。
                     */
                    std::string m_outOrderId;
                    bool m_outOrderIdHasBeenSet;

                    /**
                     * 云平台订单号。与OutOrderId不能同时为空。若调用下单接口时，发生异常，无法取到ChannelOrderId，传空串即可
                     */
                    std::string m_channelOrderId;
                    bool m_channelOrderIdHasBeenSet;

                    /**
                     * 接入环境。沙箱环境填 sandbox。缺省默认调用生产环境。
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKPAYMENTORDERREQUEST_H_
