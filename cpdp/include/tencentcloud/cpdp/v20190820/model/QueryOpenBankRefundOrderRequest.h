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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKREFUNDORDERREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKREFUNDORDERREQUEST_H_

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
                * QueryOpenBankRefundOrder请求参数结构体
                */
                class QueryOpenBankRefundOrderRequest : public AbstractModel
                {
                public:
                    QueryOpenBankRefundOrderRequest();
                    ~QueryOpenBankRefundOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道商户号。
                     * @return ChannelMerchantId 渠道商户号。
                     * 
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置渠道商户号。
                     * @param _channelMerchantId 渠道商户号。
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
                     * 获取外部商户退单号，与渠道退款单号二者选填其一。
                     * @return OutRefundId 外部商户退单号，与渠道退款单号二者选填其一。
                     * 
                     */
                    std::string GetOutRefundId() const;

                    /**
                     * 设置外部商户退单号，与渠道退款单号二者选填其一。
                     * @param _outRefundId 外部商户退单号，与渠道退款单号二者选填其一。
                     * 
                     */
                    void SetOutRefundId(const std::string& _outRefundId);

                    /**
                     * 判断参数 OutRefundId 是否已赋值
                     * @return OutRefundId 是否已赋值
                     * 
                     */
                    bool OutRefundIdHasBeenSet() const;

                    /**
                     * 获取渠道退款订单号，与外部商户退款单号二者选填其一。
                     * @return ChannelRefundId 渠道退款订单号，与外部商户退款单号二者选填其一。
                     * 
                     */
                    std::string GetChannelRefundId() const;

                    /**
                     * 设置渠道退款订单号，与外部商户退款单号二者选填其一。
                     * @param _channelRefundId 渠道退款订单号，与外部商户退款单号二者选填其一。
                     * 
                     */
                    void SetChannelRefundId(const std::string& _channelRefundId);

                    /**
                     * 判断参数 ChannelRefundId 是否已赋值
                     * @return ChannelRefundId 是否已赋值
                     * 
                     */
                    bool ChannelRefundIdHasBeenSet() const;

                    /**
                     * 获取环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * @return Environment 环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * @param _environment 环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
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
                     * 渠道商户号。
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 外部商户退单号，与渠道退款单号二者选填其一。
                     */
                    std::string m_outRefundId;
                    bool m_outRefundIdHasBeenSet;

                    /**
                     * 渠道退款订单号，与外部商户退款单号二者选填其一。
                     */
                    std::string m_channelRefundId;
                    bool m_channelRefundIdHasBeenSet;

                    /**
                     * 环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKREFUNDORDERREQUEST_H_
