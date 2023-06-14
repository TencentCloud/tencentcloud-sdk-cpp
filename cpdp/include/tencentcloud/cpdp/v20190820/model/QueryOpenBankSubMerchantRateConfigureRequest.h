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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKSUBMERCHANTRATECONFIGUREREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKSUBMERCHANTRATECONFIGUREREQUEST_H_

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
                * QueryOpenBankSubMerchantRateConfigure请求参数结构体
                */
                class QueryOpenBankSubMerchantRateConfigureRequest : public AbstractModel
                {
                public:
                    QueryOpenBankSubMerchantRateConfigureRequest();
                    ~QueryOpenBankSubMerchantRateConfigureRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道进件序列号。
                     * @return ChannelRegistrationNo 渠道进件序列号。
                     * 
                     */
                    std::string GetChannelRegistrationNo() const;

                    /**
                     * 设置渠道进件序列号。
                     * @param _channelRegistrationNo 渠道进件序列号。
                     * 
                     */
                    void SetChannelRegistrationNo(const std::string& _channelRegistrationNo);

                    /**
                     * 判断参数 ChannelRegistrationNo 是否已赋值
                     * @return ChannelRegistrationNo 是否已赋值
                     * 
                     */
                    bool ChannelRegistrationNoHasBeenSet() const;

                    /**
                     * 获取渠道商户ID。
                     * @return ChannelMerchantId 渠道商户ID。
                     * 
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置渠道商户ID。
                     * @param _channelMerchantId 渠道商户ID。
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
                     * 获取渠道子商户ID。
                     * @return ChannelSubMerchantId 渠道子商户ID。
                     * 
                     */
                    std::string GetChannelSubMerchantId() const;

                    /**
                     * 设置渠道子商户ID。
                     * @param _channelSubMerchantId 渠道子商户ID。
                     * 
                     */
                    void SetChannelSubMerchantId(const std::string& _channelSubMerchantId);

                    /**
                     * 判断参数 ChannelSubMerchantId 是否已赋值
                     * @return ChannelSubMerchantId 是否已赋值
                     * 
                     */
                    bool ChannelSubMerchantIdHasBeenSet() const;

                    /**
                     * 获取渠道名称。详见附录-云企付枚举类说明-ChannelName。
TENPAY: 商企付
WECHAT: 微信支付
ALIPAY: 支付宝
HELIPAY:合利宝
                     * @return ChannelName 渠道名称。详见附录-云企付枚举类说明-ChannelName。
TENPAY: 商企付
WECHAT: 微信支付
ALIPAY: 支付宝
HELIPAY:合利宝
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置渠道名称。详见附录-云企付枚举类说明-ChannelName。
TENPAY: 商企付
WECHAT: 微信支付
ALIPAY: 支付宝
HELIPAY:合利宝
                     * @param _channelName 渠道名称。详见附录-云企付枚举类说明-ChannelName。
TENPAY: 商企付
WECHAT: 微信支付
ALIPAY: 支付宝
HELIPAY:合利宝
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取渠道产品费率序列号。与外部产品费率序列号二者选填其一。
                     * @return ChannelProductFeeNo 渠道产品费率序列号。与外部产品费率序列号二者选填其一。
                     * 
                     */
                    std::string GetChannelProductFeeNo() const;

                    /**
                     * 设置渠道产品费率序列号。与外部产品费率序列号二者选填其一。
                     * @param _channelProductFeeNo 渠道产品费率序列号。与外部产品费率序列号二者选填其一。
                     * 
                     */
                    void SetChannelProductFeeNo(const std::string& _channelProductFeeNo);

                    /**
                     * 判断参数 ChannelProductFeeNo 是否已赋值
                     * @return ChannelProductFeeNo 是否已赋值
                     * 
                     */
                    bool ChannelProductFeeNoHasBeenSet() const;

                    /**
                     * 获取外部产品费率序列号。与渠道产品费率序列号二者选填其一。
                     * @return OutProductFeeNo 外部产品费率序列号。与渠道产品费率序列号二者选填其一。
                     * 
                     */
                    std::string GetOutProductFeeNo() const;

                    /**
                     * 设置外部产品费率序列号。与渠道产品费率序列号二者选填其一。
                     * @param _outProductFeeNo 外部产品费率序列号。与渠道产品费率序列号二者选填其一。
                     * 
                     */
                    void SetOutProductFeeNo(const std::string& _outProductFeeNo);

                    /**
                     * 判断参数 OutProductFeeNo 是否已赋值
                     * @return OutProductFeeNo 是否已赋值
                     * 
                     */
                    bool OutProductFeeNoHasBeenSet() const;

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
                     * 渠道进件序列号。
                     */
                    std::string m_channelRegistrationNo;
                    bool m_channelRegistrationNoHasBeenSet;

                    /**
                     * 渠道商户ID。
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 渠道子商户ID。
                     */
                    std::string m_channelSubMerchantId;
                    bool m_channelSubMerchantIdHasBeenSet;

                    /**
                     * 渠道名称。详见附录-云企付枚举类说明-ChannelName。
TENPAY: 商企付
WECHAT: 微信支付
ALIPAY: 支付宝
HELIPAY:合利宝
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 渠道产品费率序列号。与外部产品费率序列号二者选填其一。
                     */
                    std::string m_channelProductFeeNo;
                    bool m_channelProductFeeNoHasBeenSet;

                    /**
                     * 外部产品费率序列号。与渠道产品费率序列号二者选填其一。
                     */
                    std::string m_outProductFeeNo;
                    bool m_outProductFeeNoHasBeenSet;

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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKSUBMERCHANTRATECONFIGUREREQUEST_H_
